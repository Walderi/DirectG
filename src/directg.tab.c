/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "src/directg.y"


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha/PilhaDim.c"
#include "hash/hashDirectG.c"

//Pegar variavel com $$ -- Ex.: $$=strdup(yytext); , strdup(licate) OR strcpy($$,$1);
#define YYSTYPE char*

extern int 	yylineno;
extern char 	*yytext;

//yyerrork; //stack error correction


int erros=0;
char escopo[30];
char nome[30];
char nomefuncao[30];
char tipo[30];
char* a;
char param[30];
FILE *arquivo;
int id; // Idenficação na busca


VetFuncao hashFuncao;
VetVariavel hashVariavel;

void inserirvariavel(char *Nome,char * Tipo,char * escopo){
int existe;
	existe = hashvariavel_existe(Nome, Tipo, escopo , &hashVariavel);

	if (existe == 0) {
	hashvariavel_inserir(Nome, Tipo,escopo, &hashVariavel);
	} else {
	erros++;
	yyerror("Variavel Já Declarada!! ");
	}
}

void inserirfuncao(char* nome, char* tiporeturn){
int existe;

	existe = hashfuncao_existe(nome, tiporeturn, &hashFuncao);
	if(existe == 0){
	hashfuncao_inserir( nome, tiporeturn, &hashFuncao);
	}else{
	erros++;
        yyerror("Função já Declarada!! ");
	}


}





/* Line 268 of yacc.c  */
#line 134 "directg.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_ALGORITMO = 258,
     T_FIMALGORITMO = 259,
     token = 260,
     T_VAR = 261,
     T_INICIO = 262,
     T_COMENTARIO = 263,
     T_IDENTIFICADOR = 264,
     T_ATRIBUI = 265,
     T_SEPARADOR = 266,
     T_ABRE_PARENT = 267,
     T_FECHA_PARENT = 268,
     T_ABRECOLCHETE = 269,
     T_FECHACOLCHETE = 270,
     T_AND = 271,
     T_OR = 272,
     T_NOT = 273,
     T_XOR = 274,
     T_INTEIRO = 275,
     T_REAL = 276,
     T_CARACTERE = 277,
     T_LOGICO = 278,
     T_NUMINTEIRO = 279,
     T_NUMREAL = 280,
     T_STRING = 281,
     T_VETOR = 282,
     T_DECLARAVAR = 283,
     T_PONTOPONTO = 284,
     T_ESPACO = 285,
     T_LOGICO_VERDADEIRO = 286,
     T_LOGICO_FALSO = 287,
     T_VARIAVEL = 288,
     T_PROCEDIMENTO = 289,
     T_FIMPROCEDIMENTO = 290,
     T_FUNCAO = 291,
     T_FIMFUNCAO = 292,
     T_RETORNE = 293,
     T_INVALIDO = 294,
     T_QUEBRA = 295,
     T_REPITA = 296,
     T_ATE = 297,
     T_ESCOLHA = 298,
     T_CASO = 299,
     T_OUTROCASO = 300,
     T_FIMESCOLHA = 301,
     T_ENQUANTO = 302,
     T_FIMENQUANTO = 303,
     T_SE = 304,
     T_ENTAO = 305,
     T_SENAO = 306,
     T_FIMSE = 307,
     T_INTERROMPA = 308,
     T_PARA = 309,
     T_DE = 310,
     T_PASSO = 311,
     T_FACA = 312,
     T_FIMPARA = 313,
     T_SOMA = 314,
     T_DIVISAO = 315,
     T_SUBTRACAO = 316,
     T_MULT = 317,
     T_POTENCIA = 318,
     T_MOD = 319,
     T_PI = 320,
     T_DIFERENTE = 321,
     T_MENORQUE = 322,
     T_MENORIGUALQUE = 323,
     T_MAIORQUE = 324,
     T_MAIORIGUALQUE = 325,
     T_IGUAL = 326,
     T_DIVISAOINTEIRA = 327,
     T_RESTO = 328,
     T_ESCREVAL = 329,
     T_ESCREVA = 330,
     T_LEIA = 331,
     T_RAIZQ = 332,
     T_COPIA = 333,
     T_COMPR = 334,
     T_MAIUSC = 335
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 269 "directg.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1964

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  168
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNRULES -- Number of states.  */
#define YYNSTATES  516

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    12,    14,    16,    19,
      21,    23,    27,    29,    31,    35,    37,    39,    41,    44,
      46,    47,    52,    53,    59,    62,    64,    66,    67,    71,
      74,    77,    79,    81,    82,    83,    84,    92,    98,   101,
     103,   105,   107,   108,   109,   115,   117,   119,   121,   123,
     125,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   159,   163,   165,   167,
     169,   171,   173,   175,   178,   180,   184,   189,   194,   196,
     198,   200,   203,   206,   207,   210,   213,   215,   217,   220,
     223,   226,   229,   231,   233,   235,   237,   239,   241,   243,
     245,   247,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   296,   303,   305,   307,   309,   318,   320,   322,   324,
     326,   330,   332,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   367,   378,   387,   399,   412,   422,
     424,   426,   428,   430,   432,   434,   436,   438,   440,   441,
     446,   448,   455,   457,   459,   461,   463,   465,   470,   471,
     478,   480,   481,   487,   488,   490,   492,   494,   496,   498,
     499,   500,   501,   508,   510,   512,   514,   516,   518,   520,
     522,   524,   526,   528,   529,   530,   531,   532,   533,   551,
     553,   555,   557,   561,   563,   565,   567,   570,   571,   577,
     579,   581,   583,   587,   591,   593,   595,   596,   597,   603,
     605,   607,   609,   610,   616,   618,   619,   620,   631,   633,
     635,   638,   641,   643,   645,   647,   649,   651,   653,   655,
     657,   659,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   693,   695,   697,
     699,   703,   707,   711,   715,   719,   723,   726,   730,   734,
     736,   738,   740,   742,   744,   746,   748,   750,   754,   759,
     761,   763,   767,   769,   773,   775,   779,   781,   785,   787,
     789,   794,   799,   801,   803,   805,   814,   816,   818,   823,
     825,   827,   832,   834,   835,   838,   840,   841,   843,   846,
     852,   856,   864,   868,   870,   874,   876,   878,   881,   883,
     886,   888,   890,   891,   897,   899,   901,   903,   905,   907,
     909,   911,   913,   917,   921,   925,   927,   929,   931,   933,
     935,   937,   939,   941
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      82,     0,    -1,    -1,    82,    88,    84,    -1,    40,    -1,
     201,    -1,     1,    -1,    83,    -1,    83,    84,    -1,     3,
      -1,     1,    -1,    85,    90,    84,    -1,     4,    -1,     1,
      -1,    86,    92,    87,    -1,    26,    -1,    89,    -1,     1,
      -1,     7,    84,    -1,     1,    -1,    -1,    96,    91,    93,
     126,    -1,    -1,    96,   172,    91,    94,   126,    -1,   200,
      92,    -1,     6,    -1,     1,    -1,    -1,    95,    84,    98,
      -1,    95,    84,    -1,   200,    96,    -1,    28,    -1,     1,
      -1,    -1,    -1,    -1,   102,    97,   112,    99,    84,   100,
      98,    -1,   102,    97,   123,    84,    98,    -1,   200,    98,
      -1,    11,    -1,     1,    -1,   105,    -1,    -1,    -1,   105,
     103,   101,   104,   102,    -1,   106,    -1,     9,    -1,   124,
      -1,     1,    -1,    20,    -1,    21,    -1,    22,    -1,   107,
      -1,   108,    -1,     1,    -1,    23,    -1,   107,    -1,   108,
      -1,   109,    -1,   111,    -1,     1,    -1,    14,    -1,     1,
      -1,    15,    -1,     1,    -1,   113,   116,   114,    -1,   117,
     118,   119,    -1,   215,    -1,    29,    -1,     1,    -1,   215,
      -1,    55,    -1,     1,    -1,   120,   112,    -1,    27,    -1,
     122,   115,   121,    -1,   106,   113,   105,   114,    -1,   106,
     113,   215,   114,    -1,    53,    -1,   127,    -1,   200,    -1,
     200,   126,    -1,   127,   126,    -1,    -1,    89,    84,    -1,
     206,    84,    -1,   128,    -1,   148,    -1,   125,    84,    -1,
     220,    84,    -1,   221,    84,    -1,    84,   127,    -1,     1,
      -1,   143,    -1,   132,    -1,   147,    -1,    57,    -1,     1,
      -1,    47,    -1,    48,    -1,     1,    -1,   130,   243,   129,
      84,   126,   131,    84,    -1,     1,    -1,    54,    -1,    58,
      -1,     1,    -1,    55,    -1,     1,    -1,   145,    -1,   219,
      -1,   215,    -1,     1,    -1,   219,    -1,   215,    -1,     1,
      -1,   105,    -1,   215,    -1,   219,    -1,     1,    -1,    56,
      -1,   135,   137,   136,   138,    -1,   135,   137,   136,   138,
     140,   139,    -1,     1,    -1,    57,    -1,     1,    -1,   133,
     105,   141,   142,    84,   126,   134,    84,    -1,    41,    -1,
      42,    -1,     1,    -1,   243,    -1,   156,   243,   157,    -1,
       1,    -1,   144,    84,   126,   145,   146,    84,    -1,     1,
      -1,   153,    -1,   160,    -1,    49,    -1,    52,    -1,     1,
      -1,    50,    -1,     1,    -1,    51,    -1,     1,    -1,   149,
     243,   151,    84,   126,   150,    84,    -1,   149,   243,   151,
      84,   126,   152,    84,   126,   150,    84,    -1,   149,   243,
     151,    84,   126,   153,   150,    84,    -1,   149,   243,   151,
      84,   126,   152,    84,   126,   153,   150,    84,    -1,   149,
     243,   151,    84,   126,   153,   152,    84,   126,   153,   150,
      84,    -1,   149,   243,   151,    84,   126,   152,   153,   150,
      84,    -1,     1,    -1,    43,    -1,    46,    -1,     1,    -1,
      12,    -1,     1,    -1,    13,    -1,     1,    -1,   105,    -1,
      -1,   156,   159,   105,   157,    -1,     1,    -1,   154,   158,
      84,   165,   155,    84,    -1,     1,    -1,    44,    -1,     1,
      -1,    45,    -1,     1,    -1,   161,   168,    84,   126,    -1,
      -1,   161,   168,    84,   126,   164,   163,    -1,     1,    -1,
      -1,   163,   162,   166,    84,   126,    -1,    -1,   105,    -1,
      89,    -1,   110,    -1,     1,    -1,   167,    -1,    -1,    -1,
      -1,   167,   169,   170,   101,   171,   168,    -1,   177,    -1,
     197,    -1,   220,    -1,   221,    -1,   220,    -1,    36,    -1,
      37,    -1,     1,    -1,    28,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,   178,   186,   176,   112,   179,    84,
     180,    96,    91,   126,   185,    84,   181,   175,   182,    84,
      -1,     1,    -1,    38,    -1,     1,    -1,   156,    89,   157,
      -1,    89,    -1,   219,    -1,     1,    -1,   183,   184,    -1,
      -1,   106,   187,   156,   189,   157,    -1,     1,    -1,    28,
      -1,     1,    -1,   190,   188,   112,    -1,   189,   101,   189,
      -1,     1,    -1,   105,    -1,    -1,    -1,   105,   191,   101,
     192,   190,    -1,    34,    -1,    35,    -1,     1,    -1,    -1,
     106,   196,   156,   189,   157,    -1,     1,    -1,    -1,    -1,
     193,   198,   195,   199,    84,    96,    91,   126,   194,    84,
      -1,     1,    -1,   201,    -1,   201,   200,    -1,     8,    84,
      -1,    10,    -1,    32,    -1,    31,    -1,    89,    -1,   219,
      -1,   173,    -1,   203,    -1,   204,    -1,     1,    -1,   106,
     202,   205,    -1,     1,    -1,    59,    -1,    61,    -1,    62,
      -1,    60,    -1,    72,    -1,    64,    -1,    61,    -1,    63,
      -1,    24,    -1,     1,    -1,    25,    -1,    65,    -1,   215,
      -1,   216,    -1,   217,    -1,   218,    -1,   105,    -1,   219,
     207,   219,    -1,   219,   208,   219,    -1,   219,   209,   219,
      -1,   219,   210,   219,    -1,   219,   211,   219,    -1,   219,
     212,   219,    -1,   213,   219,    -1,   219,   214,   219,    -1,
     156,   219,   157,    -1,   173,    -1,   224,    -1,   227,    -1,
     229,    -1,   231,    -1,   236,    -1,   238,    -1,   240,    -1,
     106,   156,   157,    -1,   106,   156,   222,   157,    -1,     1,
      -1,   105,    -1,   105,   101,   222,    -1,   218,    -1,   218,
     101,   222,    -1,   221,    -1,   221,   101,   222,    -1,   220,
      -1,   220,   101,   222,    -1,     1,    -1,    79,    -1,   223,
     156,   105,   157,    -1,   223,   156,    89,   157,    -1,     1,
      -1,    78,    -1,   137,    -1,   225,   156,   105,   101,   226,
     101,   215,   157,    -1,     1,    -1,    80,    -1,   228,   156,
     105,   157,    -1,     1,    -1,    77,    -1,   230,   156,   219,
     157,    -1,     1,    -1,    -1,    28,   215,    -1,     1,    -1,
      -1,    89,    -1,   219,   232,    -1,   233,   101,   219,    97,
     215,    -1,   233,   101,   219,    -1,   233,   101,   219,    97,
     215,    97,   215,    -1,   233,   101,    89,    -1,     1,    -1,
     156,   233,   157,    -1,     1,    -1,    75,    -1,   235,   234,
      -1,    74,    -1,   237,   234,    -1,     1,    -1,    76,    -1,
      -1,   239,   156,   241,   105,   157,    -1,     1,    -1,    71,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,     1,    -1,   219,   242,   219,    -1,   243,   248,   243,
      -1,   156,   243,   157,    -1,   105,    -1,    16,    -1,    17,
      -1,    18,    -1,    19,    -1,   244,    -1,   245,    -1,   246,
      -1,   247,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   114,   117,   118,   119,   123,   124,   128,
     133,   137,   141,   142,   146,   150,   154,   155,   159,   160,
     164,   164,   165,   165,   166,   171,   172,   175,   176,   177,
     178,   183,   184,   187,   188,   193,   188,   194,   195,   199,
     200,   204,   212,   218,   212,   226,   230,   231,   232,   236,
     240,   245,   250,   252,   253,   257,   262,   263,   264,   265,
     266,   274,   275,   279,   280,   284,   288,   292,   296,   297,
     301,   305,   306,   310,   314,   318,   322,   323,   330,   334,
     335,   336,   337,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   355,   356,   357,   362,   363,   367,   371,
     372,   376,   378,   386,   390,   391,   395,   396,   400,   404,
     405,   406,   410,   411,   412,   416,   417,   418,   419,   423,
     427,   428,   429,   433,   434,   438,   443,   448,   449,   453,
     454,   455,   461,   462,   468,   469,   473,   477,   478,   482,
     483,   487,   488,   494,   495,   496,   497,   498,   499,   500,
     505,   509,   510,   514,   515,   519,   520,   523,   524,   524,
     525,   531,   532,   536,   537,   541,   542,   546,   547,   547,
     548,   554,   554,   557,   558,   559,   560,   561,   565,   566,
     566,   566,   566,   570,   571,   572,   576,   577,   581,   585,
     586,   590,   591,   595,   595,   601,   602,   602,   595,   603,
     607,   608,   612,   613,   614,   615,   619,   623,   623,   624,
     628,   629,   633,   634,   635,   639,   646,   652,   646,   656,
     660,   661,   665,   665,   666,   670,   670,   670,   674,   678,
     679,   683,   687,   691,   696,   701,   702,   703,   704,   705,
     706,   710,   711,   715,   720,   725,   729,   734,   739,   743,
     747,   752,   753,   757,   761,   765,   766,   767,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     786,   787,   788,   789,   790,   791,   792,   796,   797,   798,
     802,   803,   804,   805,   806,   807,   808,   809,   810,   814,
     818,   819,   820,   824,   828,   832,   833,   837,   841,   842,
     846,   850,   851,   854,   855,   856,   859,   860,   861,   862,
     863,   864,   865,   866,   870,   871,   875,   879,   883,   888,
     889,   893,   897,   897,   898,   902,   903,   904,   905,   906,
     907,   908,   912,   913,   914,   915,   920,   924,   928,   932,
     936,   937,   938,   939
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALGORITMO", "T_FIMALGORITMO", "token",
  "T_VAR", "T_INICIO", "T_COMENTARIO", "T_IDENTIFICADOR", "T_ATRIBUI",
  "T_SEPARADOR", "T_ABRE_PARENT", "T_FECHA_PARENT", "T_ABRECOLCHETE",
  "T_FECHACOLCHETE", "T_AND", "T_OR", "T_NOT", "T_XOR", "T_INTEIRO",
  "T_REAL", "T_CARACTERE", "T_LOGICO", "T_NUMINTEIRO", "T_NUMREAL",
  "T_STRING", "T_VETOR", "T_DECLARAVAR", "T_PONTOPONTO", "T_ESPACO",
  "T_LOGICO_VERDADEIRO", "T_LOGICO_FALSO", "T_VARIAVEL", "T_PROCEDIMENTO",
  "T_FIMPROCEDIMENTO", "T_FUNCAO", "T_FIMFUNCAO", "T_RETORNE",
  "T_INVALIDO", "T_QUEBRA", "T_REPITA", "T_ATE", "T_ESCOLHA", "T_CASO",
  "T_OUTROCASO", "T_FIMESCOLHA", "T_ENQUANTO", "T_FIMENQUANTO", "T_SE",
  "T_ENTAO", "T_SENAO", "T_FIMSE", "T_INTERROMPA", "T_PARA", "T_DE",
  "T_PASSO", "T_FACA", "T_FIMPARA", "T_SOMA", "T_DIVISAO", "T_SUBTRACAO",
  "T_MULT", "T_POTENCIA", "T_MOD", "T_PI", "T_DIFERENTE", "T_MENORQUE",
  "T_MENORIGUALQUE", "T_MAIORQUE", "T_MAIORIGUALQUE", "T_IGUAL",
  "T_DIVISAOINTEIRA", "T_RESTO", "T_ESCREVAL", "T_ESCREVA", "T_LEIA",
  "T_RAIZQ", "T_COPIA", "T_COMPR", "T_MAIUSC", "$accept", "Input",
  "QuebraComando", "QuebrasComando", "InicioAlgoritmo",
  "CabecalhoAlgoritmo", "FimAlgoritmo", "BlocoAlgoritmo", "String",
  "NomeAlgoritmo", "InicioLogica", "BlocoCodigo", "$@1", "$@2",
  "InicioBlocoDeclaracao", "BlocoDeclaracao", "DefineTipo",
  "BlocoVariaveis", "$@3", "$@4", "Separador", "Variaveis", "$@5", "$@6",
  "Variavel", "Identificador", "TipoInteiro", "TipoReal", "TipoCaractere",
  "TipoNumerico", "TipoLogico", "Tipos", "AbreColchete", "FechaColchete",
  "ExprColcheteVetor", "ExprInternaColcheteVetor", "PosInicialVetor",
  "EntrePosVetor", "PosFinalVetor", "DefineTipoVetor", "TipoDoTipoVetor",
  "NomeVetor", "TipoVetor", "VariavelVetor", "Interromper",
  "BlocosLogicos", "BlocoLogico", "Lacos", "FacaEnquanto",
  "InicioEnquanto", "FimEnquanto", "BlocoEnquanto", "InicioPara",
  "FimPara", "AlcancePara", "AtePara", "InicioAlcancePara",
  "FimAlcancePara", "AlcancePasso", "PassoPara", "ExprCondicaoPara",
  "FacaPara", "BlocoPara", "InicioRepita", "RepitaAte", "ExprRepitaAte",
  "BlocoRepita", "Desvios", "InicioSe", "FimSe", "DesvioEntao",
  "DesvioSenao", "BlocosSe", "InicioEscolha", "FimEscolha",
  "AbreParenteses", "FechaParenteses", "ExprEscolha", "$@7",
  "BlocosEscolha", "AbreCaso", "OutroCaso", "BlocosCaso", "$@8",
  "BlocoCasos", "$@9", "Selecao", "SelecaoCasos", "$@10", "$@11", "$@12",
  "Funcoes", "FuncaoRetornavel", "IniciaFuncao", "FimFuncao",
  "DefinidorFuncao", "Funcao", "$@13", "$@14", "$@15", "$@16", "$@17",
  "PalavraRetorno", "ExprRetorno", "Retorno", "NomeFuncao", "$@18",
  "DefineVarAssinatura", "Assinatura", "Variaveisfuncao", "$@19", "$@20",
  "InicioProcedimento", "FimProcedimento", "NomeProcedimento", "$@21",
  "BlocoProcedimento", "$@22", "$@23", "Comentarios", "Comentario",
  "Atribuidor", "LogicoFalso", "LogicoVerdadeiro", "Atribuido",
  "Atribuicao", "ExprSoma", "ExprSub", "ExprMult", "ExprDiv", "ExprDivInt",
  "ExprMod", "Negativo", "ExprPot", "NumeroInteiro", "NumeroReal", "Pi",
  "Numero", "ArtmExpr", "FuncaoNativa", "FuncaoNaoNativa",
  "AssinaturaExistente", "InicioComprimento", "Comprimento", "InicioCopia",
  "SegundoTermoCopia", "Copia", "InicioMaiusc", "Maiusc", "InicioRaiz",
  "Raiz", "CasasDecimais", "ExprEscreva", "ParametrosEscreva",
  "InicioEscreva", "Escreva", "InicioEscreval", "Escreval", "InicioLeia",
  "Leia", "$@24", "CondicoesLogicas", "ExpressaoLogica", "LogicoAnd",
  "LogicoOr", "LogicoNot", "LogicoXor", "OperadoresLogicos", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    83,    84,    84,    85,
      85,    86,    87,    87,    88,    89,    90,    90,    91,    91,
      93,    92,    94,    92,    92,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    99,   100,    98,    98,    98,   101,
     101,   102,   103,   104,   102,   105,   106,   106,   106,   107,
     108,   109,   110,   110,   110,   111,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   116,   117,   118,   118,
     119,   120,   120,   121,   122,   123,   124,   124,   125,   126,
     126,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   129,   129,   130,   131,
     131,   132,   132,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   139,   139,   139,   139,   140,
     141,   141,   141,   142,   142,   143,   144,   145,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   158,
     158,   160,   160,   161,   161,   162,   162,   163,   164,   163,
     163,   166,   165,   167,   167,   167,   167,   167,   168,   169,
     170,   171,   168,   172,   172,   172,   173,   173,   174,   175,
     175,   176,   176,   178,   179,   180,   181,   182,   177,   177,
     183,   183,   184,   184,   184,   184,   185,   187,   186,   186,
     188,   188,   189,   189,   189,   190,   191,   192,   190,   193,
     194,   194,   196,   195,   195,   198,   199,   197,   197,   200,
     200,   201,   202,   203,   204,   205,   205,   205,   205,   205,
     205,   206,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   215,   216,   217,   218,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     220,   220,   220,   220,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   223,
     224,   224,   224,   225,   226,   227,   227,   228,   229,   229,
     230,   231,   231,   232,   232,   232,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   234,   235,   236,   237,   238,
     238,   239,   241,   240,   240,   242,   242,   242,   242,   242,
     242,   242,   243,   243,   243,   243,   244,   245,   246,   247,
     248,   248,   248,   248
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     2,     1,
       0,     4,     0,     5,     2,     1,     1,     0,     3,     2,
       2,     1,     1,     0,     0,     0,     7,     5,     2,     1,
       1,     1,     0,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     4,     4,     1,     1,
       1,     2,     2,     0,     2,     2,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     8,     1,     1,     1,     1,
       3,     1,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,    10,     8,    11,    12,     9,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     6,     1,     1,     1,     1,     1,     4,     0,     6,
       1,     0,     5,     0,     1,     1,     1,     1,     1,     0,
       0,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     0,     0,     0,    17,     1,
       1,     1,     3,     1,     1,     1,     2,     0,     5,     1,
       1,     1,     3,     3,     1,     1,     0,     0,     5,     1,
       1,     1,     0,     5,     1,     0,     0,    10,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       4,     4,     1,     1,     1,     8,     1,     1,     4,     1,
       1,     4,     1,     0,     2,     1,     0,     1,     2,     5,
       3,     7,     3,     1,     3,     1,     1,     2,     1,     2,
       1,     1,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,     0,     0,     0,    17,    15,
      16,     0,    26,    25,     0,     0,     0,     0,     0,   229,
       6,     4,     0,     3,     5,    11,   231,    13,    12,    14,
       0,    19,     0,   219,   188,   318,   316,   321,   300,   293,
     289,   297,    20,     0,   193,   183,   225,   184,   185,     0,
     270,     0,   271,     0,   272,     0,   273,     0,   274,     0,
     275,     0,   276,    24,     0,   230,     8,    48,    46,    28,
       0,    41,     0,    47,     0,    18,     0,    19,    22,     0,
       0,   154,   153,     0,     0,     0,     0,   315,     0,   317,
     319,   322,    32,    31,     0,     0,    62,    61,     0,    38,
       6,   126,   150,    98,   136,    78,   103,     0,     0,     0,
       0,    21,     0,    86,     0,    94,     0,    93,     0,    95,
      87,     0,   134,     0,   135,     0,     5,     0,     0,     0,
       0,    48,     0,     0,    48,     0,   226,     0,     0,     0,
       0,    48,   251,   253,   249,   254,   259,     0,     0,   269,
       0,   255,   256,   257,   258,     0,   187,   186,    48,   307,
       0,     0,     0,    60,    49,    50,    51,    55,    74,    56,
      57,    58,    59,    34,     0,     0,    40,    39,    43,    48,
       0,     0,    91,    84,   154,   232,     0,     0,    88,    82,
     259,     0,     0,     0,     0,     0,     0,    48,   157,   158,
       0,    81,    85,    89,    90,    23,     0,   192,   191,     0,
       0,     0,   156,   155,   291,   290,     0,   298,     0,   266,
     243,   246,   244,   245,   250,   248,   247,   301,     0,     0,
       0,     0,     0,     0,     0,   305,     0,   308,   156,     0,
     314,     0,     0,     0,     0,     0,     0,    64,    63,    76,
      77,   156,     0,   277,     0,     0,     0,     0,    48,   234,
     233,   235,   269,   238,   239,   241,   236,     0,     0,   331,
     326,   327,   328,   329,   330,   325,     0,    97,   336,   337,
     338,   339,    96,     0,   340,   341,   342,   343,     0,   107,
     106,     0,     0,     0,   140,   139,     0,     0,     0,     0,
     194,     0,     0,    48,   294,   255,   109,     0,   268,   260,
     261,   262,   263,   264,   265,   267,   252,   304,   312,     0,
     323,    35,     0,     0,    67,    72,    71,     0,    75,    37,
      44,     0,     0,     0,     0,   278,   156,   334,   332,     0,
     333,     0,   124,   123,     0,   128,   127,     0,     0,     0,
     164,   163,     0,     0,     0,    48,   215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    69,    68,     0,
      73,    48,   281,   283,   287,   285,     0,     0,   108,     0,
      48,     0,     0,   129,     0,   159,    48,   175,   174,    52,
      53,   176,   178,     0,   166,   165,   171,   152,   151,     0,
       0,     0,   208,   211,   210,     0,   195,   223,     0,    30,
       0,     0,    36,    66,    70,   100,    99,     0,    48,   120,
     255,   112,     0,   132,     0,   138,   141,   137,     0,     0,
       0,   180,     0,     0,   161,   217,     0,   212,     0,     0,
     295,     0,   101,   119,     0,   105,   104,     0,   334,   143,
       6,     0,     0,   138,     0,     0,     0,   167,     0,     0,
       0,   221,   220,     0,   311,    48,   259,   121,   255,   117,
     125,     0,   138,     0,   145,     0,   181,     0,   172,   218,
       0,   227,   138,     0,     0,   148,     0,     0,   169,     0,
     144,     0,   149,     0,   182,   201,   200,     0,     0,   146,
       0,    48,   203,     0,   206,   204,   196,   147,     0,     0,
     202,   190,   189,   197,     0,   198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    22,   107,     5,     6,    29,     7,   108,    11,
      42,    15,    76,   130,    16,    17,    94,    69,   242,   365,
     401,    70,    95,   246,   146,   147,   169,   170,   171,   391,
     172,   173,    98,   249,   244,   322,   323,   369,   413,   327,
     328,   174,   175,    73,   110,   111,   112,   113,   283,   114,
     417,   115,   116,   447,   291,   377,   304,   419,   467,   444,
     292,   344,   117,   118,   347,   381,   119,   120,   121,   428,
     296,   429,   122,   123,   399,   148,   308,   200,   297,   124,
     352,   396,   353,   477,   354,   433,   392,   393,   431,   456,
     487,    43,   149,    44,   513,   209,    45,    79,   359,   438,
     509,   514,   497,   504,   498,   133,   206,   405,   357,   358,
     400,   459,    46,   463,   136,   210,    47,    80,   211,   125,
      24,   187,   263,   264,   265,   127,   228,   229,   230,   231,
     232,   233,   150,   234,   151,   152,   153,   154,   192,   156,
     157,   257,    49,    50,    51,   307,    52,    53,    54,    55,
      56,   237,   161,    89,    57,    58,    59,    60,    61,    62,
     162,   276,   193,   284,   285,   286,   287,   288
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -405
static const yytype_int16 yypact[] =
{
    -405,   406,  -405,  -405,  -405,   143,   519,   211,  -405,  -405,
    -405,   211,  -405,  -405,   211,   345,   211,   191,   519,   139,
    -405,  -405,   742,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    1660,    24,   211,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,   411,  -405,  -405,  -405,  -405,  -405,   252,
    -405,   252,  -405,   252,  -405,   252,  -405,   299,  -405,   299,
    -405,   252,  -405,  -405,   191,  -405,  -405,  -405,  -405,  -405,
     190,    25,   824,  -405,  1682,  -405,  1063,  -405,  -405,   320,
     321,  -405,  -405,   249,   354,   354,  1540,   230,  1402,  -405,
    -405,  -405,  -405,  -405,   261,   276,  -405,  -405,   289,  -405,
     459,  -405,  -405,  -405,  -405,  -405,  -405,   850,   211,   313,
     211,  -405,   906,  -405,  1540,  -405,   354,  -405,   211,  -405,
    -405,  1540,  -405,   372,  -405,   961,   139,   211,   211,   211,
    1063,   145,   131,   202,   209,   285,  -405,    56,    56,   276,
      56,  1870,  -405,  -405,  -405,  -405,  -405,  1786,  1540,  -405,
    1540,  -405,  -405,  -405,  -405,   627,  -405,  -405,  1870,  -405,
      74,   327,   354,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,   126,   211,  -405,  -405,  -405,  -405,
     219,   219,  -405,  -405,   311,  -405,  1706,  1422,  -405,  -405,
    1058,  1540,  1814,    37,    41,  1079,   138,    42,  -405,  -405,
     211,  -405,  -405,  -405,  -405,  -405,   252,  -405,  -405,   489,
     252,   211,  -405,  -405,  -405,  -405,  1566,  -405,   627,   476,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  1540,  1540,
    1540,  1540,  1540,  1540,  1540,  -405,   208,  -405,  1448,  1494,
    -405,    56,   211,   208,    62,  1682,   354,  -405,  -405,  -405,
    -405,   402,   340,  -405,   387,   418,   441,    56,  1870,  -405,
    -405,  -405,   221,  -405,  -405,  -405,   476,  1800,   359,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  1540,  -405,  -405,  -405,
    -405,  -405,  -405,   211,  -405,  -405,  -405,  -405,  1540,   132,
    -405,  1566,    31,    26,  -405,  -405,   211,   354,   140,   358,
    -405,   358,   516,  1870,  -405,    49,   476,   276,  -405,   476,
     476,   476,   476,   476,   476,   476,  -405,  -405,  -405,  1892,
    -405,  -405,   219,   123,  -405,  -405,  -405,   489,  -405,  -405,
    -405,   732,   732,   732,   732,  -405,  1742,  -405,   476,  1122,
     563,    26,  -405,  -405,   211,  -405,  -405,  1601,   618,    56,
     163,  -405,   700,   117,    63,   213,   233,   327,   205,   211,
     327,   411,   516,   208,   208,  1682,  -405,  -405,  -405,   208,
    -405,  -405,  -405,  -405,  -405,  -405,    23,  1623,  -405,  1165,
    1870,   211,  1540,   563,   164,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   246,   211,  -405,  -405,  -405,  -405,  -405,   211,
     276,   358,  -405,  -405,  -405,   489,  -405,  -405,  1181,  -405,
      56,   235,  -405,  -405,  -405,  -405,  -405,   211,  1870,   168,
      43,   476,    19,  -405,   359,   331,  -405,  -405,   211,   162,
      21,  -405,  1016,   211,  -405,  -405,   444,  -405,   516,   152,
    -405,   208,  -405,  -405,  1648,  -405,  -405,   211,   239,  -405,
    -405,  1224,    27,  -405,   211,   211,   276,   215,  1271,   354,
     411,  -405,  -405,   211,  -405,  1870,    33,  -405,    51,   476,
    -405,   115,  -405,   211,  -405,  1330,  -405,   140,  -405,  -405,
    1314,  -405,   222,   211,    27,  -405,    46,   700,  -405,    28,
    -405,   211,  -405,    27,  -405,  -405,  -405,  1520,   211,  -405,
     211,   914,  -405,  1494,  -405,   476,  -405,  -405,    56,   149,
    -405,  -405,  -405,  -405,   211,  -405
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -405,  -405,  -405,    -7,  -405,  -405,  -405,  -405,    -2,  -405,
     -35,   260,  -405,  -405,  -405,    -8,  -298,   -69,  -405,  -405,
     -55,    34,  -405,  -405,   273,    98,  -338,  -336,  -405,  -405,
    -405,  -198,   141,  -180,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,   -47,   227,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,    45,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,    50,  -405,  -405,  -405,  -405,  -404,
    -405,   -62,  -367,  -405,  -405,   -16,   405,  -405,  -405,  -405,
    -405,  -405,  -108,  -405,  -405,  -405,  -405,   -97,  -405,  -405,
    -405,  -405,   236,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -278,   -39,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,    40,
       0,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,   272,  -405,  -405,  -173,   384,   -15,
     391,   256,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,   365,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -109,  -405,  -405,  -405,  -405,  -405
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -336
static const yytype_int16 yytable[] =
{
      23,   250,    48,    10,    25,    99,    19,    26,    78,    30,
      64,   300,   196,   254,   389,    66,   390,   430,    19,    19,
     445,   364,   453,   360,   415,    75,   454,   345,   472,   495,
      19,  -199,   342,    83,  -115,    84,   -42,    85,   277,    86,
     178,    88,   289,    88,  -113,    91,    18,   492,   473,    48,
    -110,  -154,  -116,   278,   279,   280,   281,   212,    18,    65,
    -110,   128,   452,   325,   397,   189,   496,   483,   346,   213,
      74,   416,   426,   427,    19,   235,   126,   446,   201,   427,
     491,   137,   268,   205,   216,  -303,   159,  -303,   343,   500,
    -115,  -110,   128,   186,   282,   104,   290,   128,   191,  -113,
    -113,   183,   236,   188,   484,   191,   239,   199,  -116,   398,
     128,   195,   126,   441,    74,   128,   482,   326,   394,   493,
     202,   203,   204,   436,   367,   126,    19,    96,    72,   370,
     126,   186,    96,   220,   221,   222,   223,   224,   225,   294,
      97,   350,   366,  -207,     8,    97,   226,    14,   293,   389,
     511,   390,   368,   461,   278,   279,   280,   281,   254,   254,
     254,   254,   395,   450,   104,   425,    65,   427,   245,     9,
      14,   255,    72,  -209,   109,   191,   329,   132,   135,   340,
     128,    72,    72,    72,   351,   261,   512,   462,   295,  -122,
     299,    92,    31,   298,   301,   126,    72,   331,    32,   332,
     333,   334,    21,   207,   302,   109,   403,   437,  -170,   316,
     109,   104,    20,   104,    72,   426,   427,  -224,    93,    14,
     247,    72,  -237,   109,   443,    33,  -214,    34,   109,  -237,
     208,  -154,   142,   404,   248,   321,    92,   318,   383,  -154,
    -130,  -154,  -154,  -154,  -216,    19,  -309,  -130,  -309,  -224,
      67,    21,   363,    81,  -154,  -154,  -154,  -179,    68,  -168,
      72,  -237,   163,    93,    82,    35,    36,    37,    38,    39,
      40,    41,   191,   424,  -149,     9,   339,   176,    63,  -130,
     330,   164,   165,   166,   167,    74,    96,   177,   168,   348,
     179,  -154,   376,   109,   361,  -154,   412,  -222,    68,    97,
      87,   384,    19,    71,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,    82,   -62,   142,   184,   243,   255,   255,   255,   255,
     -62,   131,   134,   185,   128,    82,   408,    97,   238,    68,
      68,   382,   422,   128,   182,   -62,   341,   379,   177,   126,
     213,   176,   362,    72,    72,   435,    27,    71,   126,    28,
     387,   177,   406,  -280,   409,    67,   138,   139,   140,   355,
     212,   439,    19,    68,   128,    19,   191,    68,   455,   488,
     181,   180,   213,   197,   423,   278,   279,   280,   281,   126,
    -142,    68,  -149,  -149,    82,   457,   432,   190,   176,   194,
     494,   378,   434,   128,   190,    72,   198,    72,   177,    72,
    -282,   476,   362,   -48,   471,    74,     2,     3,   126,     4,
     442,   478,    77,   -48,   -48,   -48,   -48,   128,    32,   176,
     479,   449,   451,   262,    90,   480,   458,     0,   486,   177,
     460,  -286,   126,   489,     0,   241,   128,   109,    19,     0,
     470,     0,   176,   128,     0,   176,   109,   474,   475,     0,
      72,   126,   177,     0,  -284,   177,   481,  -213,   126,   252,
     128,     0,     0,    72,   190,   128,   485,   129,     0,   -48,
     155,   -48,   160,   -48,     0,   126,   490,   109,   362,     0,
     126,   503,     0,     0,   499,   387,     0,     0,   305,     0,
     163,   506,     0,   507,     0,   502,     0,     0,   129,    72,
       0,   508,     0,   129,     0,     0,   109,   515,   317,   164,
     165,   166,   167,     0,     0,   324,   129,    12,    71,    71,
      12,   129,    13,   -27,    14,    13,   -27,    14,     0,     0,
     109,     0,   218,     0,   219,   220,   221,   222,   223,   224,
     225,     0,   214,   215,     0,   217,     0,     0,   226,   109,
       0,     0,     0,   -27,     0,   -27,   109,    72,     0,     0,
     227,   190,     0,   305,     0,     0,   240,     0,     0,     0,
     349,   266,   356,   109,   356,   267,     0,   256,   109,   278,
     279,   280,   281,     0,     0,    72,   129,   372,   373,   374,
     375,   253,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     306,     0,     0,     0,   252,   252,   252,   252,     0,     0,
       0,     0,   309,   310,   311,   312,   313,   314,   315,   100,
     190,     0,     0,   319,     0,   388,    14,    68,   212,     0,
       0,     0,     0,     0,     0,   410,   411,     0,    71,     0,
     213,   414,     0,     0,     9,     0,   320,     0,     0,   420,
       0,     0,     0,     0,     0,   190,     0,     0,    21,   101,
     338,   102,   335,     0,     0,   103,     0,   104,     0,   -83,
     -83,   105,   106,   337,   356,   306,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,   221,   222,   223,
     224,   225,    35,    36,    37,    38,    39,    40,    41,   226,
       0,   386,     0,     0,     0,     0,     0,     0,  -173,    68,
       0,  -173,     0,   464,     0,     0,   468,   466,     0,     0,
     164,   165,   256,   256,   256,   256,     9,     0,     0,     0,
     129,     0,   356,   371,     0,     0,     0,     0,     0,   129,
    -173,    68,    -7,    20,     0,    -7,    -7,     0,    -7,    -7,
      14,    -7,     0,     0,   385,     0,   142,   143,     0,     0,
     388,   421,   402,     0,     0,   407,   267,     0,    -7,     0,
     129,     0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,
      -7,     0,    21,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,   145,     0,   129,
      -7,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,   440,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   129,     0,    96,     0,     0,   469,   448,
       0,     0,   -45,     0,     0,   -45,     0,   -45,    97,   -45,
       0,     0,   129,     0,     0,     0,     0,     0,     0,   129,
       0,   100,   -45,     0,   -83,     0,     0,     0,    14,    68,
       0,     0,     0,     0,   -45,     0,   129,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     9,     0,     0,   -45,
       0,   505,     0,     0,     0,   -83,     0,   218,   -83,     0,
      21,   101,   -83,   102,   -83,   -83,   -83,   103,   -83,   104,
       0,   -83,   -83,   105,   106,     0,     0,   100,   -83,     0,
     -79,     0,     0,   510,    14,    68,     0,     0,     0,     0,
       0,     0,     0,  -154,    35,    36,    37,    38,    39,    40,
      41,     0,     9,     0,     0,     0,     0,     0,  -154,  -154,
    -154,   -79,     0,     0,   -79,     0,    21,   101,   -79,   102,
     -79,   -79,   -79,   103,   -79,   104,     0,   -79,   -79,   105,
     106,     0,   100,     0,   -79,   -80,     0,     0,     0,    14,
      68,     0,     0,     0,     0,     0,     0,     0,     0,  -154,
      35,    36,    37,    38,    39,    40,    41,     9,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,     0,   -80,     0,     0,   -80,
       0,    21,   101,   -80,   102,   -80,   -80,   -80,   103,   -80,
     104,     0,   -80,   -80,   105,   106,     0,   100,     0,   -80,
       0,     0,     0,     0,    14,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,   101,     0,   102,
     -83,   -83,     0,   103,   100,   104,  -335,   -83,     0,   105,
     106,    14,    68,     0,  -335,  -335,  -335,  -335,     0,     0,
     100,     0,     0,     0,     0,     0,     0,    14,    68,     9,
      35,    36,    37,    38,    39,    40,    41,     0,  -335,     0,
       0,     0,     0,    21,   101,     9,   102,     0,  -335,     0,
     103,     0,   104,     0,     0,  -335,   105,   106,     0,    21,
     101,   -83,   102,   100,     0,     0,   103,     0,   104,     0,
      14,    68,   105,   106,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,    21,   101,     0,   102,   100,     0,     0,   103,
     -83,   104,     0,    14,    68,   105,   106,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,    14,
      68,     9,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,    21,   101,     9,   102,     0,
       0,     0,   103,     0,   104,     0,   -83,     0,   105,   106,
       0,    21,   101,   -83,   102,   100,     0,     0,   103,     0,
     104,     0,    14,    68,   105,   106,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       9,     0,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,    21,   101,     0,   102,     0,     0,
       0,   103,   100,   104,     0,     0,   -83,   105,   106,    14,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,    21,   101,     0,   102,   100,     0,   -83,   103,     0,
     104,     0,    14,    68,   105,   106,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,    14,    68,
       9,     0,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,   -83,     0,    21,   101,     9,   102,     0,     0,
       0,   103,     0,   104,     0,     0,     0,   105,   106,     0,
      21,   101,     0,   102,     0,     0,     0,   103,     0,   104,
       0,     0,     0,   105,   106,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,   158,    35,    36,    37,    38,    39,    40,
      41,    68,     0,  -306,    82,  -306,     0,     0,     0,     0,
       0,     0,     0,   258,     0,     0,   142,   143,     9,     0,
       0,    68,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,   143,     9,   -40,
       0,     0,     0,   259,   260,     0,     0,   -40,     0,     0,
     -40,     0,     0,   144,     0,     0,     0,   145,     0,     0,
       0,     0,   -40,   -40,   -40,     0,    35,    36,    37,    38,
      39,    40,    41,   144,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,   141,    35,    36,    37,    38,
      39,    40,    41,    68,     0,     0,    82,     0,     0,   -40,
       0,     0,     0,   -40,     0,     0,     0,     0,   142,   143,
       9,   501,   -40,   -40,   -40,   -40,   -40,   -40,   -40,    68,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,   141,     0,     0,   142,   143,     9,     0,     0,    68,
       0,     0,    82,     0,     0,   144,     0,     0,     0,   145,
       0,     0,     0,     0,   142,   143,     0,   303,    35,    36,
      37,    38,    39,    40,    41,    68,     0,     0,    82,     0,
       0,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     142,   143,     0,     0,    35,    36,    37,    38,    39,    40,
      41,   144,   380,     0,     0,   145,     0,     0,     0,     0,
      68,     0,     0,    82,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,   418,   142,   143,   144,     0,     0,
       0,   145,    68,     0,     0,    82,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,   142,   143,   465,
       0,     0,     0,     0,     0,     0,     0,    68,     0,     0,
      82,    67,   144,     0,     0,     0,   145,   -29,    14,    68,
       0,     0,   142,   143,     0,    35,    36,    37,    38,    39,
      40,    41,     0,    67,   144,     0,     0,     0,   145,   -33,
      14,    68,     0,     0,   -29,     0,   -29,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,   251,     0,   144,
       0,     0,     0,   145,     0,    68,   -33,     0,   -33,   213,
       0,     0,    35,    36,    37,    38,    39,    40,    41,     0,
     142,   143,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -331,     0,     0,  -331,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,  -331,  -331,     0,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,   184,     0,     0,
       0,     0,     0,     0,   -45,     0,     0,   -45,    82,   -45,
      97,   336,   -45,   -45,   -45,   -45,     0,  -331,     0,     0,
       0,     0,     0,   213,   -45,   269,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,     0,     0,     0,   -45,     0,   -45,     0,
       0,     0,     0,     0,     0,     0,   -45,     0,     0,     0,
       0,     0,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   220,
     221,   222,   223,   224,   225,     0,   270,   271,   272,   273,
     274,   275,   226,   220,   221,   222,   223,   224,   225,  -154,
     270,   271,   272,   273,   274,   275,   226,     0,     0,     0,
       0,     0,     0,    92,  -154,  -154,     0,     0,     0,     0,
       0,     0,     0,  -310,     0,  -310,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -154,     0,     0,     0,     0,
       0,     0,     0,     0,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   220,   221,   222,   223,   224,   225,     0,     0,     0,
       0,     0,     0,     0,   226
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-405))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,   181,    17,     5,    11,    74,     6,    14,    43,    16,
      18,   209,   121,   186,   352,    22,   352,   384,    18,    19,
       1,   319,     1,   301,     1,    32,   430,     1,     1,     1,
      30,     7,     1,    49,     1,    51,    11,    53,     1,    55,
      95,    57,     1,    59,     1,    61,     6,     1,   452,    64,
       1,     9,     1,    16,    17,    18,    19,     1,    18,    19,
      11,    76,   429,     1,     1,   112,    38,   471,    42,    13,
      30,    48,    51,    52,    74,     1,    76,    58,   125,    52,
     484,    83,   191,   130,   139,    11,    88,    13,    57,   493,
      57,    42,   107,   109,    57,    49,    55,   112,   114,    56,
      57,   108,    28,   110,   471,   121,   161,   123,    57,    46,
     125,   118,   112,   411,    74,   130,     1,    55,     1,   486,
     127,   128,   129,   401,     1,   125,   126,     1,    30,   327,
     130,   147,     1,    59,    60,    61,    62,    63,    64,     1,
      14,     1,   322,    12,     1,    14,    72,     8,   195,   487,
       1,   487,    29,     1,    16,    17,    18,    19,   331,   332,
     333,   334,    45,     1,    49,     1,   126,    52,   175,    26,
       8,   186,    74,    28,    76,   191,   245,    79,    80,   288,
     195,    83,    84,    85,    44,   187,    37,    35,    50,    57,
     206,     1,     1,   200,   210,   195,    98,   252,     7,   254,
     255,   256,    40,     1,   211,   107,     1,   405,    45,     1,
     112,    49,     1,    49,   116,    51,    52,     8,    28,     8,
       1,   123,     1,   125,    56,    34,    13,    36,   130,     8,
      28,     1,    24,    28,    15,   242,     1,   239,   347,     9,
       1,    11,    12,    13,    11,   245,    11,     8,    13,    40,
       1,    40,   307,     1,    24,    25,    26,    11,     9,    44,
     162,    40,     1,    28,    12,    74,    75,    76,    77,    78,
      79,    80,   288,   382,    52,    26,   283,     1,    18,    40,
     246,    20,    21,    22,    23,   245,     1,    11,    27,   296,
       1,    61,   339,   195,   302,    65,   365,    12,     9,    14,
       1,   348,   302,    30,    74,    75,    76,    77,    78,    79,
      80,    12,     1,    24,     1,   174,   331,   332,   333,   334,
       9,     1,     1,    10,   339,    12,   361,    14,     1,     9,
       9,   347,   379,   348,   107,    24,   291,   344,    11,   339,
      13,     1,   302,   245,   246,   400,     1,    74,   348,     4,
     352,    11,   359,    13,   362,     1,    83,    84,    85,     1,
       1,   408,   362,     9,   379,   365,   382,     9,   430,   477,
      98,    98,    13,     1,   381,    16,    17,    18,    19,   379,
      49,     9,    51,    52,    12,   432,   393,   114,     1,   116,
     487,   341,   399,   408,   121,   297,   123,   299,    11,   301,
      13,   456,   362,     1,   451,   365,     0,     1,   408,     3,
     417,   458,     1,    11,    12,    13,    14,   432,     7,     1,
     459,   428,   429,   187,    59,   460,   433,    -1,   475,    11,
     438,    13,   432,   480,    -1,   162,   451,   339,   438,    -1,
     447,    -1,     1,   458,    -1,     1,   348,   454,   455,    -1,
     352,   451,    11,    -1,    13,    11,   463,    13,   458,   186,
     475,    -1,    -1,   365,   191,   480,   473,    76,    -1,    10,
      86,    12,    88,    14,    -1,   475,   483,   379,   438,    -1,
     480,   497,    -1,    -1,   491,   487,    -1,    -1,   216,    -1,
       1,   498,    -1,   500,    -1,   497,    -1,    -1,   107,   401,
      -1,   503,    -1,   112,    -1,    -1,   408,   514,   236,    20,
      21,    22,    23,    -1,    -1,   243,   125,     1,   245,   246,
       1,   130,     6,     7,     8,     6,     7,     8,    -1,    -1,
     432,    -1,   148,    -1,   150,    59,    60,    61,    62,    63,
      64,    -1,   137,   138,    -1,   140,    -1,    -1,    72,   451,
      -1,    -1,    -1,    34,    -1,    36,   458,   459,    -1,    -1,
     155,   288,    -1,   291,    -1,    -1,   161,    -1,    -1,    -1,
     297,   187,   299,   475,   301,   191,    -1,   186,   480,    16,
      17,    18,    19,    -1,    -1,   487,   195,   331,   332,   333,
     334,   186,    -1,    74,    75,    76,    77,    78,    79,    80,
     216,    -1,    -1,    -1,   331,   332,   333,   334,    -1,    -1,
      -1,    -1,   228,   229,   230,   231,   232,   233,   234,     1,
     347,    -1,    -1,   239,    -1,   352,     8,     9,     1,    -1,
      -1,    -1,    -1,    -1,    -1,   363,   364,    -1,   365,    -1,
      13,   369,    -1,    -1,    26,    -1,   241,    -1,    -1,   377,
      -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    40,    41,
     276,    43,   257,    -1,    -1,    47,    -1,    49,    -1,    51,
      52,    53,    54,   268,   401,   291,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    74,    75,    76,    77,    78,    79,    80,    72,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      -1,    11,    -1,   441,    -1,    -1,   444,   444,    -1,    -1,
      20,    21,   331,   332,   333,   334,    26,    -1,    -1,    -1,
     339,    -1,   459,     1,    -1,    -1,    -1,    -1,    -1,   348,
      40,     9,     0,     1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,   349,    -1,    24,    25,    -1,    -1,
     487,   377,   357,    -1,    -1,   360,   382,    -1,    26,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    65,    -1,   408,
      58,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,   410,    74,    75,    76,    77,
      78,    79,    80,   432,    -1,     1,    -1,    -1,   444,   424,
      -1,    -1,     8,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,     1,    28,    -1,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    40,    -1,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,    26,    -1,    -1,    55,
      -1,   497,    -1,    -1,    -1,    35,    -1,   503,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    -1,    -1,     1,    58,    -1,
       4,    -1,    -1,   508,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    74,    75,    76,    77,    78,    79,
      80,    -1,    26,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    -1,     1,    -1,    58,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      74,    75,    76,    77,    78,    79,    80,    26,    74,    75,
      76,    77,    78,    79,    80,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,     1,    -1,    58,
      -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    -1,    47,     1,    49,     8,     4,    -1,    53,
      54,     8,     9,    -1,    16,    17,    18,    19,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    26,
      74,    75,    76,    77,    78,    79,    80,    -1,    40,    -1,
      -1,    -1,    -1,    40,    41,    26,    43,    -1,    50,    -1,
      47,    -1,    49,    -1,    -1,    57,    53,    54,    -1,    40,
      41,    42,    43,     1,    -1,    -1,    47,    -1,    49,    -1,
       8,     9,    53,    54,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    40,    41,    -1,    43,     1,    -1,    -1,    47,
      48,    49,    -1,     8,     9,    53,    54,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    26,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    40,    41,    26,    43,    -1,
      -1,    -1,    47,    -1,    49,    -1,    35,    -1,    53,    54,
      -1,    40,    41,    58,    43,     1,    -1,    -1,    47,    -1,
      49,    -1,     8,     9,    53,    54,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    40,    41,    -1,    43,    -1,    -1,
      -1,    47,     1,    49,    -1,    -1,    52,    53,    54,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,     1,    -1,    46,    47,    -1,
      49,    -1,     8,     9,    53,    54,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      26,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    38,    -1,    40,    41,    26,    43,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    74,    75,    76,    77,    78,    79,
      80,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    24,    25,    26,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,     1,
      -1,    -1,    -1,    31,    32,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    24,    25,    26,    -1,    74,    75,    76,    77,
      78,    79,    80,    61,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    74,    75,    76,    77,
      78,    79,    80,     9,    -1,    -1,    12,    -1,    -1,    61,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    24,    25,
      26,     1,    74,    75,    76,    77,    78,    79,    80,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    24,    25,    26,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    24,    25,    -1,     1,    74,    75,
      76,    77,    78,    79,    80,     9,    -1,    -1,    12,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    61,     1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,     1,    24,    25,    61,    -1,    -1,
      -1,    65,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    24,    25,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      12,     1,    61,    -1,    -1,    -1,    65,     7,     8,     9,
      -1,    -1,    24,    25,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,     1,    61,    -1,    -1,    -1,    65,     7,
       8,     9,    -1,    -1,    34,    -1,    36,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,     1,    -1,    61,
      -1,    -1,    -1,    65,    -1,     9,    34,    -1,    36,    13,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      24,    25,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    12,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,     1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    12,    13,
      14,     1,    16,    17,    18,    19,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    13,    28,     1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    72,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    71,    72,    59,    60,    61,    62,    63,    64,     9,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    82,     0,     1,     3,    85,    86,    88,     1,    26,
      89,    90,     1,     6,     8,    92,    95,    96,   200,   201,
       1,    40,    83,    84,   201,    84,    84,     1,     4,    87,
      84,     1,     7,    34,    36,    74,    75,    76,    77,    78,
      79,    80,    91,   172,   174,   177,   193,   197,   220,   223,
     224,   225,   227,   228,   229,   230,   231,   235,   236,   237,
     238,   239,   240,    92,    96,   200,    84,     1,     9,    98,
     102,   105,   106,   124,   200,    84,    93,     1,    91,   178,
     198,     1,    12,   156,   156,   156,   156,     1,   156,   234,
     234,   156,     1,    28,    97,   103,     1,    14,   113,    98,
       1,    41,    43,    47,    49,    53,    54,    84,    89,   106,
     125,   126,   127,   128,   130,   132,   133,   143,   144,   147,
     148,   149,   153,   154,   160,   200,   201,   206,   220,   221,
      94,     1,   106,   186,     1,   106,   195,    89,   105,   105,
     105,     1,    24,    25,    61,    65,   105,   106,   156,   173,
     213,   215,   216,   217,   218,   219,   220,   221,     1,    89,
     219,   233,   241,     1,    20,    21,    22,    23,    27,   107,
     108,   109,   111,   112,   122,   123,     1,    11,   101,     1,
     105,   215,   127,    84,     1,    10,   156,   202,    84,   126,
     105,   156,   219,   243,   105,    84,   243,     1,   105,   156,
     158,   126,    84,    84,    84,   126,   187,     1,    28,   176,
     196,   199,     1,    13,   157,   157,   101,   157,   219,   219,
      59,    60,    61,    62,    63,    64,    72,   157,   207,   208,
     209,   210,   211,   212,   214,     1,    28,   232,     1,   101,
     157,   105,    99,   113,   115,    84,   104,     1,    15,   114,
     114,     1,   105,   157,   218,   220,   221,   222,     1,    31,
      32,    89,   173,   203,   204,   205,   219,   219,   243,     1,
      66,    67,    68,    69,    70,    71,   242,     1,    16,    17,
      18,    19,    57,   129,   244,   245,   246,   247,   248,     1,
      55,   135,   141,   126,     1,    50,   151,   159,    84,   156,
     112,   156,    84,     1,   137,   215,   219,   226,   157,   219,
     219,   219,   219,   219,   219,   219,     1,   215,    89,   219,
     157,    84,   116,   117,   215,     1,    55,   120,   121,    98,
     102,   101,   101,   101,   101,   157,     1,   157,   219,    84,
     243,   137,     1,    57,   142,     1,    42,   145,    84,   105,
       1,    44,   161,   163,   165,     1,   105,   189,   190,   179,
     189,    96,   200,   101,    97,   100,   114,     1,    29,   118,
     112,     1,   222,   222,   222,   222,   126,   136,   145,    84,
       1,   146,   156,   243,   126,   157,     1,    89,   105,   107,
     108,   110,   167,   168,     1,    45,   162,     1,    46,   155,
     191,   101,   157,     1,    28,   188,    84,   157,    91,    96,
     215,   215,    98,   119,   215,     1,    48,   131,     1,   138,
     215,   219,   126,    84,   243,     1,    51,    52,   150,   152,
     153,   169,    84,   166,    84,   101,   189,   112,   180,   126,
     157,    97,    84,    56,   140,     1,    58,   134,   157,    84,
       1,    84,   153,     1,   150,   152,   170,   126,    84,   192,
      96,     1,    35,   194,   215,     1,   105,   139,   215,   219,
      84,   126,     1,   150,    84,    84,   101,   164,   126,   190,
      91,    84,     1,   150,   153,    84,   126,   171,   163,   126,
      84,   150,     1,   153,   168,     1,    38,   183,   185,    84,
     150,     1,    89,   156,   184,   219,    84,    84,    89,   181,
     157,     1,    37,   175,   182,    84
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1806 of yacc.c  */
#line 117 "src/directg.y"
    {fprintf(arquivo, "\n");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 119 "src/directg.y"
    {erros++;yyerror("Erro do fim de linha");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 128 "src/directg.y"
    {arquivo = fopen("../Saida.C","w+"); 
		     	strcpy(escopo,"global");
			fprintf(arquivo, "#include <stdio.h> \n#include <stdlib.h> \n#include <math.h> \n#include <string.h> \n#define false 0\n#define true 1  ");			

				}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 133 "src/directg.y"
    {erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 141 "src/directg.y"
    {fprintf(arquivo, "return 0; \n } ");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 142 "src/directg.y"
    {erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 155 "src/directg.y"
    {erros++;yyerror("Algoritmo sem nome");}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 160 "src/directg.y"
    {erros++;yyerror("Faltando \" INICIO \" ");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 164 "src/directg.y"
    {fprintf(arquivo, "int main() {");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 165 "src/directg.y"
    {fprintf(arquivo, "int main() {");}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 172 "src/directg.y"
    {erros++;yyerror("Faltando \" VAR \" ");}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 184 "src/directg.y"
    {erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 188 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo);
					id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
				//	fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,hashVariavel.variaveis[id].nome); }
									
					fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,param); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 193 "src/directg.y"
    {strcpy(param,"");}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 200 "src/directg.y"
    {erros++;yyerror("Faltando \",\" para divisao de variaveis");}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 204 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 212 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 218 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 230 "src/directg.y"
    {(yyval)=strdup(yytext); strcpy(nome, (yyval));}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 232 "src/directg.y"
    {erros++;yyerror("Identificador invalido");}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 236 "src/directg.y"
    {strcpy(tipo,"int"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 240 "src/directg.y"
    {strcpy(tipo,"float"); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 245 "src/directg.y"
    {strcpy(tipo,"char"); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 253 "src/directg.y"
    {erros++;yyerror("Esperado um numero");}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 257 "src/directg.y"
    {strcpy(tipo,"short"); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 266 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 275 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 280 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 297 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 306 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 349 "src/directg.y"
    {erros++;yyerror("Erro no bloco logico");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 362 "src/directg.y"
    {fprintf(arquivo,"{ \n ");}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 363 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 367 "src/directg.y"
    {fprintf(arquivo, "While " );}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 371 "src/directg.y"
    {fprintf(arquivo,"\n  } ");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 372 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 378 "src/directg.y"
    {erros++; yyerror("Erro no bloco ENQUANTO");}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 386 "src/directg.y"
    {fprintf(arquivo, "for");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 390 "src/directg.y"
    {fprintf(arquivo, "\n }");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 391 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 395 "src/directg.y"
    {fprintf(arquivo, "; ");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 396 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 406 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 412 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 419 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 429 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 434 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 443 "src/directg.y"
    {fprintf(arquivo, "do {");}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 448 "src/directg.y"
    {fprintf(arquivo, "} while ");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 449 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 455 "src/directg.y"
    {erros++;yyerror("Erro na expressao do ATE");}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 462 "src/directg.y"
    {erros++;yyerror("Erro no bloco REPITA");}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 473 "src/directg.y"
    {fprintf(arquivo, " if ");}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 477 "src/directg.y"
    {fprintf(arquivo, " } ");}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 478 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 482 "src/directg.y"
    {fprintf(arquivo, " { ");}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 483 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 487 "src/directg.y"
    {fprintf(arquivo, " } else {  ");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 488 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 500 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 505 "src/directg.y"
    {fprintf(arquivo, " switch ");}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 509 "src/directg.y"
    {fprintf(arquivo, " } ");}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 510 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 514 "src/directg.y"
    {/*fprintf(arquivo, "( ");*/}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 515 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 519 "src/directg.y"
    {/*fprintf(arquivo, " ) ");*/}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 520 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 524 "src/directg.y"
    {fprintf(arquivo, " ( ");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 524 "src/directg.y"
    {fprintf(arquivo, " )  { ");}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 525 "src/directg.y"
    {erros++;yyerror("Necessario uma variavel para ESCOLHA");}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {erros++;yyerror("Erro no Bloco de ESCOLHA");}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 536 "src/directg.y"
    {fprintf(arquivo, "\n case ");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 537 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 541 "src/directg.y"
    {fprintf(arquivo, "\n default : ");}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 542 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 546 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 547 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 548 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 554 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 561 "src/directg.y"
    {erros++;yyerror("Variavel de escolha errada");}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 565 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 566 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 566 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 566 "src/directg.y"
    {fprintf(arquivo, " \n  case ");}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 586 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 591 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 595 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 595 "src/directg.y"
    { inserirfuncao(nomefuncao, tipo);   
	         id = hashfuncao_busca(nomefuncao, tipo, &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
	 }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 601 "src/directg.y"
    {fprintf(arquivo, "{ \n"); strcpy(param, "");   }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 602 "src/directg.y"
    {strcpy(escopo,"global");}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 602 "src/directg.y"
    {fprintf(arquivo, "} \n");}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 603 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 615 "src/directg.y"
    {erros++;yyerror("Parametro de retorno errado");}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 623 "src/directg.y"
    {strcpy (nomefuncao, nome);   }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 624 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 629 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 635 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 639 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
                 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 646 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
		 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
          
}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 652 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 661 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 665 "src/directg.y"
    {strcpy (nomefuncao, nome); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 666 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 670 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 670 "src/directg.y"
    { inserirfuncao(nomefuncao, "void");
                 id = hashfuncao_busca(nomefuncao, "void", &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
         }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 674 "src/directg.y"
    {erros++;yyerror("Erro no BlocoProcedimento");}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 687 "src/directg.y"
    {fprintf(arquivo, "=");}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 691 "src/directg.y"
    {fprintf(arquivo, "false");}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 696 "src/directg.y"
    {fprintf(arquivo, "true");}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 706 "src/directg.y"
    {erros++;yyerror("Valor atribuido de forma errada");}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 711 "src/directg.y"
    {erros++;yyerror("Esperado \"<-\"");}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 715 "src/directg.y"
    {fprintf(arquivo, " + ");}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 720 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 725 "src/directg.y"
    {fprintf(arquivo, " * ");}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 729 "src/directg.y"
    {fprintf(arquivo, " \\ ");}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 734 "src/directg.y"
    {fprintf(arquivo, " / ");}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 739 "src/directg.y"
    {fprintf(arquivo, " %% ");}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 743 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 747 "src/directg.y"
    {fprintf(arquivo, " pow  ");}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 753 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 798 "src/directg.y"
    {erros++;yyerror("Funcao inexistente");}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 810 "src/directg.y"
    {erros++;yyerror("Erro de assinatura de funcao");}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 820 "src/directg.y"
    {erros++;yyerror("Erro na funcao Compr()");}
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 833 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 842 "src/directg.y"
    {erros++;yyerror("Erro no funcao Maiusc");}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 851 "src/directg.y"
    {erros++;yyerror("Erro na funcao Raiz");}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 856 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 866 "src/directg.y"
    {erros++;yyerror("Parametro improprio para funcao escreva");}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 871 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 875 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 883 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 888 "src/directg.y"
    {fprintf(arquivo, " printf(\"\\n\") ");}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 889 "src/directg.y"
    {erros++;yyerror("Erro na funcao escreval");}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 893 "src/directg.y"
    {fprintf(arquivo, " scanf ");}
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 897 "src/directg.y"
    {fprintf(arquivo, " (");}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 897 "src/directg.y"
    {fprintf(arquivo, " )");}
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 898 "src/directg.y"
    {erros++;yyerror("Erro na funcao leia (Antigo paçoca)");}
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 902 "src/directg.y"
    {fprintf(arquivo, " == ");}
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 903 "src/directg.y"
    {fprintf(arquivo, " != ");}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 904 "src/directg.y"
    {fprintf(arquivo, " < ");}
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 905 "src/directg.y"
    {fprintf(arquivo, " <= ");}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 906 "src/directg.y"
    {fprintf(arquivo, " > ");}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 907 "src/directg.y"
    {fprintf(arquivo, " >= ");}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 908 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 920 "src/directg.y"
    {fprintf(arquivo, " && ");}
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 924 "src/directg.y"
    {fprintf(arquivo, " ||  ");}
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 928 "src/directg.y"
    {fprintf(arquivo, " ! ");}
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 932 "src/directg.y"
    {fprintf(arquivo, " ^ ");}
    break;



/* Line 1806 of yacc.c  */
#line 3477 "directg.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 944 "src/directg.y"


//chamadas de funcoes da pilha dinamica
extern void FPVazia(TipoPilha *Pilha);
extern int Vazia(TipoPilha Pilha);
extern void Empilha(TipoItem Item, TipoPilha *Pilha);
extern void Desempilha(TipoPilha *Pilha, TipoItem *Item);
extern int Tamanho(TipoPilha Pilha);

//instanciacao elementos pilha

TipoPilha minhaPilha;
TipoItem item;

//chamadas da tabela hash

extern void hashfuncao_iniciar(VetFuncao *hashFuncao, VetVariavel *hashVariavel);
extern void hashfuncao_inserir(char nome[], char tipodereturn[], VetFuncao *hashFuncao);
extern int hashfuncao_busca( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
extern int hashfuncao_existe( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
extern void hashvariavel_inserir(char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel);
extern int hashvariavel_busca( char nome[], char tipo[], char escopo[],VetVariavel *hashVariavel );
extern int hashvariavel_existe( char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel );



int yyerror(char *s) {
        if (strcmp(yytext,"\n")==0 || strcmp(yytext,"\r")==0) {
                yytext="VAZIO";
		item.lineNo = yylineno--;
        	item.errNo = yytext;
        	item.errMsg = s;
        	Empilha(item,&minhaPilha);
        }
	else {

        item.lineNo = yylineno;
        item.errNo = yytext;
        item.errMsg = s;
	//yyerrork;
	//yyclearin;

        Empilha(item,&minhaPilha);
	}
}


int main(int argc, char *argv[] ) {
        FPVazia(&minhaPilha);
        extern FILE *yyin;
	short itemTopoNulo=1; //comeca com topo padrao nulo
	hashfuncao_iniciar(&hashFuncao, &hashVariavel);
  	yyin = fopen(argv[1], "r" );
  	printf("Compilando...\n");
	

	yyparse();
  	if (erros == 0) {
        	printf("Sucesso!\n");
        	return 0;
  	}
  	else {
        	printf("You Suck!\n");
        	while(Tamanho(minhaPilha) > 0) {
  			if (itemTopoNulo == 0) {
				printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:%s\n", minhaPilha.Topo->Item.errMsg,
                                         minhaPilha.Topo->Item.lineNo, minhaPilha.Topo->Item.errNo);
				
			//	printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:\n", minhaPilha.Topo->Item.errMsg,
                        //                 minhaPilha.Topo->Item.lineNo);
                        	Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
			}
			else {
				Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
				itemTopoNulo = 0;
			}
		}		
	}
	fclose(arquivo);
	return 0;
}

int yywrap(void) {
  return 1;
}


