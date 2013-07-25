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
#define YYLAST   1951

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  167
/* YYNRULES -- Number of rules.  */
#define YYNRULES  342
/* YYNRULES -- Number of states.  */
#define YYNSTATES  515

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
     886,   888,   890,   895,   897,   899,   901,   903,   905,   907,
     909,   911,   915,   919,   923,   925,   927,   929,   931,   933,
     935,   937,   939
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
      -1,    47,    -1,    48,    -1,     1,    -1,   130,   242,   129,
      84,   126,   131,    84,    -1,     1,    -1,    54,    -1,    58,
      -1,     1,    -1,    55,    -1,     1,    -1,   145,    -1,   219,
      -1,   215,    -1,     1,    -1,   219,    -1,   215,    -1,     1,
      -1,   105,    -1,   215,    -1,   219,    -1,     1,    -1,    56,
      -1,   135,   137,   136,   138,    -1,   135,   137,   136,   138,
     140,   139,    -1,     1,    -1,    57,    -1,     1,    -1,   133,
     105,   141,   142,    84,   126,   134,    84,    -1,    41,    -1,
      42,    -1,     1,    -1,   242,    -1,   156,   242,   157,    -1,
       1,    -1,   144,    84,   126,   145,   146,    84,    -1,     1,
      -1,   153,    -1,   160,    -1,    49,    -1,    52,    -1,     1,
      -1,    50,    -1,     1,    -1,    51,    -1,     1,    -1,   149,
     242,   151,    84,   126,   150,    84,    -1,   149,   242,   151,
      84,   126,   152,    84,   126,   150,    84,    -1,   149,   242,
     151,    84,   126,   153,   150,    84,    -1,   149,   242,   151,
      84,   126,   152,    84,   126,   153,   150,    84,    -1,   149,
     242,   151,    84,   126,   153,   152,    84,   126,   153,   150,
      84,    -1,   149,   242,   151,    84,   126,   152,   153,   150,
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
     239,   156,   105,   157,    -1,     1,    -1,    71,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,     1,
      -1,   219,   241,   219,    -1,   242,   247,   242,    -1,   156,
     242,   157,    -1,   105,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,   243,    -1,   244,    -1,   245,    -1,   246,
      -1
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
     679,   683,   687,   691,   695,   699,   700,   701,   702,   703,
     704,   708,   709,   713,   717,   721,   725,   729,   733,   737,
     741,   745,   746,   750,   754,   758,   759,   760,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     779,   780,   781,   782,   783,   784,   785,   789,   790,   791,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   807,
     811,   812,   813,   817,   821,   825,   826,   830,   834,   835,
     839,   843,   844,   847,   848,   849,   852,   853,   854,   855,
     856,   857,   858,   859,   863,   864,   868,   872,   876,   880,
     881,   885,   889,   890,   894,   895,   896,   897,   898,   899,
     900,   904,   905,   906,   907,   912,   916,   920,   924,   928,
     929,   930,   931
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
  "Leia", "CondicoesLogicas", "ExpressaoLogica", "LogicoAnd", "LogicoOr",
  "LogicoNot", "LogicoXor", "OperadoresLogicos", 0
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
     238,   239,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   242,   242,   243,   244,   245,   246,   247,
     247,   247,   247
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
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
     319,     0,    32,    31,     0,     0,    62,    61,     0,    38,
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
     314,   322,     0,     0,     0,     0,     0,    64,    63,    76,
      77,   156,     0,   277,     0,     0,     0,     0,    48,   234,
     233,   235,   269,   238,   239,   241,   236,     0,     0,   330,
     325,   326,   327,   328,   329,   324,     0,    97,   335,   336,
     337,   338,    96,     0,   339,   340,   341,   342,     0,   107,
     106,     0,     0,     0,   140,   139,     0,     0,     0,     0,
     194,     0,     0,    48,   294,   255,   109,     0,   268,   260,
     261,   262,   263,   264,   265,   267,   252,   304,   312,     0,
      35,     0,     0,    67,    72,    71,     0,    75,    37,    44,
       0,     0,     0,     0,   278,   156,   333,   331,     0,   332,
       0,   124,   123,     0,   128,   127,     0,     0,     0,   164,
     163,     0,     0,     0,    48,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    69,    68,     0,    73,
      48,   281,   283,   287,   285,     0,     0,   108,     0,    48,
       0,     0,   129,     0,   159,    48,   175,   174,    52,    53,
     176,   178,     0,   166,   165,   171,   152,   151,     0,     0,
       0,   208,   211,   210,     0,   195,   223,     0,    30,     0,
       0,    36,    66,    70,   100,    99,     0,    48,   120,   255,
     112,     0,   132,     0,   138,   141,   137,     0,     0,     0,
     180,     0,     0,   161,   217,     0,   212,     0,     0,   295,
       0,   101,   119,     0,   105,   104,     0,   333,   143,     6,
       0,     0,   138,     0,     0,     0,   167,     0,     0,     0,
     221,   220,     0,   311,    48,   259,   121,   255,   117,   125,
       0,   138,     0,   145,     0,   181,     0,   172,   218,     0,
     227,   138,     0,     0,   148,     0,     0,   169,     0,   144,
       0,   149,     0,   182,   201,   200,     0,     0,   146,     0,
      48,   203,     0,   206,   204,   196,   147,     0,     0,   202,
     190,   189,   197,     0,   198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    22,   107,     5,     6,    29,     7,   108,    11,
      42,    15,    76,   130,    16,    17,    94,    69,   242,   364,
     400,    70,    95,   246,   146,   147,   169,   170,   171,   390,
     172,   173,    98,   249,   244,   321,   322,   368,   412,   326,
     327,   174,   175,    73,   110,   111,   112,   113,   283,   114,
     416,   115,   116,   446,   291,   376,   304,   418,   466,   443,
     292,   343,   117,   118,   346,   380,   119,   120,   121,   427,
     296,   428,   122,   123,   398,   148,   308,   200,   297,   124,
     351,   395,   352,   476,   353,   432,   391,   392,   430,   455,
     486,    43,   149,    44,   512,   209,    45,    79,   358,   437,
     508,   513,   496,   503,   497,   133,   206,   404,   356,   357,
     399,   458,    46,   462,   136,   210,    47,    80,   211,   125,
      24,   187,   263,   264,   265,   127,   228,   229,   230,   231,
     232,   233,   150,   234,   151,   152,   153,   154,   192,   156,
     157,   257,    49,    50,    51,   307,    52,    53,    54,    55,
      56,   237,   161,    89,    57,    58,    59,    60,    61,    62,
     276,   193,   284,   285,   286,   287,   288
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -399
static const yytype_int16 yypact[] =
{
    -399,   134,  -399,  -399,  -399,   207,    83,   198,  -399,  -399,
    -399,   198,  -399,  -399,   198,   386,   198,  1690,    83,    34,
    -399,  -399,   782,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    1609,   158,   198,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,   224,  -399,  -399,  -399,  -399,  -399,    56,
    -399,    56,  -399,    56,  -399,    56,  -399,   250,  -399,   250,
    -399,    56,  -399,  -399,  1690,  -399,  -399,  -399,  -399,  -399,
      39,   156,   235,  -399,  1643,  -399,   994,  -399,  -399,    46,
     217,  -399,  -399,   283,   303,   303,  1474,  1333,  1353,  -399,
    -399,   303,  -399,  -399,   530,    49,  -399,  -399,   298,  -399,
     360,  -399,  -399,  -399,  -399,  -399,  -399,   623,   198,   401,
     198,  -399,   837,  -399,  1474,  -399,   303,  -399,   198,  -399,
    -399,  1474,  -399,   302,  -399,   892,    34,   198,   198,   198,
     994,   169,   354,   142,   124,   405,  -399,   143,   143,    49,
     143,  1799,  -399,  -399,  -399,  -399,  -399,  1770,  1474,  -399,
    1474,  -399,  -399,  -399,  -399,   219,  -399,  -399,  1799,  -399,
     741,   328,   143,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,    37,   198,  -399,  -399,  -399,  -399,
     252,   252,  -399,  -399,   304,  -399,   719,  1360,  -399,  -399,
     184,  1474,  1784,   239,    28,  1010,   123,   264,  -399,  -399,
     198,  -399,  -399,  -399,  -399,  -399,    56,  -399,  -399,   361,
      56,   198,  -399,  -399,  -399,  -399,  1554,  -399,   219,   501,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  1474,  1474,
    1474,  1474,  1474,  1474,  1474,  -399,    47,  -399,  1440,  1447,
    -399,  -399,   198,    47,    33,  1643,   303,  -399,  -399,  -399,
    -399,   580,   347,  -399,   392,   417,   443,   143,  1799,  -399,
    -399,  -399,   214,  -399,  -399,  -399,   501,  1691,   450,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  1474,  -399,  -399,  -399,
    -399,  -399,  -399,   198,  -399,  -399,  -399,  -399,  1474,   170,
    -399,  1554,    22,   137,  -399,  -399,   198,   303,    62,   336,
    -399,   336,   514,  1799,  -399,   218,   501,    49,  -399,   501,
     501,   501,   501,   501,   501,   501,  -399,  -399,  -399,  1879,
    -399,   252,    35,  -399,  -399,  -399,   361,  -399,  -399,  -399,
    1669,  1669,  1669,  1669,  -399,  1792,  -399,   501,  1053,   592,
     137,  -399,  -399,   198,  -399,  -399,  1561,   684,   143,   229,
    -399,   368,    55,    53,   274,   286,   328,   216,   198,   328,
     224,   514,    47,    47,  1643,  -399,  -399,  -399,    47,  -399,
    -399,  -399,  -399,  -399,  -399,    61,  1581,  -399,  1096,  1799,
     198,  1474,   592,   101,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,   287,   198,  -399,  -399,  -399,  -399,  -399,   198,    49,
     336,  -399,  -399,  -399,   361,  -399,  -399,  1112,  -399,   143,
     258,  -399,  -399,  -399,  -399,  -399,   198,  1799,   268,    21,
     501,    15,  -399,   450,   389,  -399,  -399,   198,   190,   135,
    -399,   947,   198,  -399,  -399,   506,  -399,   514,   153,  -399,
      47,  -399,  -399,  1588,  -399,  -399,   198,   260,  -399,  -399,
    1155,    43,  -399,   198,   198,    49,   289,  1202,   303,   224,
    -399,  -399,   198,  -399,  1799,    23,  -399,    25,   501,  -399,
      64,  -399,   198,  -399,  1261,  -399,    62,  -399,  -399,  1245,
    -399,   256,   198,    43,  -399,    26,   368,  -399,    31,  -399,
     198,  -399,    43,  -399,  -399,  -399,  1467,   198,  -399,   198,
     845,  -399,  1447,  -399,   501,  -399,  -399,   143,   132,  -399,
    -399,  -399,  -399,   198,  -399
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -399,  -399,  -399,    -7,  -399,  -399,  -399,  -399,    -2,  -399,
     -35,   313,  -399,  -399,  -399,    -8,  -306,   -69,  -399,  -399,
     -43,    94,  -399,  -399,   236,    98,  -337,  -331,  -399,  -399,
    -399,  -197,   172,  -170,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,   176,   247,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,    76,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,    60,  -399,  -399,  -399,  -399,  -398,
    -399,   -54,  -362,  -399,  -399,   -16,   348,  -399,  -399,  -399,
    -399,  -399,   -96,  -399,  -399,  -399,  -399,  -100,  -399,  -399,
    -399,  -399,   223,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -273,   -44,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,    40,
       0,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,   404,  -399,  -399,  -185,   310,   -15,
     140,   311,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,   364,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -104,  -399,  -399,  -399,  -399,  -399
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -335
static const yytype_int16 yytable[] =
{
      23,   254,    48,    10,    25,    99,    19,    26,    78,    30,
      64,   250,   300,   363,   388,    66,   444,   196,    19,    19,
     389,   429,  -113,   341,  -115,    75,  -116,   491,   359,   289,
      19,   453,   494,    83,   324,    84,   366,    85,    96,    86,
      92,    88,    14,    88,   471,    91,    18,   131,   316,    48,
     176,    97,   178,   472,   396,    68,   393,    81,    18,    65,
     177,   128,   414,   349,   367,   481,   451,    93,    82,   495,
      74,   142,   482,   445,    19,   104,   126,  -113,  -113,   342,
    -115,   137,  -116,   290,    12,   490,   159,   268,   325,    13,
     -27,    14,   128,   186,   499,   426,   216,   128,   191,   397,
     394,   183,   424,   188,   440,   191,   350,   199,   483,   415,
     128,   195,   126,   104,    74,   128,   426,   -27,   239,   -27,
     202,   203,   204,   492,   294,   126,    19,   435,    72,   369,
     126,   186,  -224,   510,     2,     3,   452,     4,   344,   278,
     279,   280,   281,   207,   212,   254,   254,   254,   254,   388,
     104,   365,   425,   426,   460,   389,   213,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,  -224,  -199,    65,   -42,   245,   511,
     208,   255,    72,   295,   109,   191,   328,   132,   135,   345,
     128,    72,    72,    72,   339,   261,   425,   426,   461,    72,
     299,   449,  -334,   298,   301,   126,    72,  -209,    14,    20,
    -334,  -334,  -334,  -334,   302,   109,    14,   436,     8,   330,
     109,   331,   332,   333,    72,  -237,   129,   402,   134,  -110,
     212,    72,  -237,   109,  -334,    77,    68,  -122,   109,  -110,
      21,    32,   213,     9,  -334,   320,    96,   318,    21,   104,
     277,  -334,   382,   -45,   403,    19,   -45,   129,   -45,    97,
     -45,    87,   129,   247,  -237,   278,   279,   280,   281,    92,
    -110,  -130,    82,   -45,   362,   129,    71,   248,  -130,  -309,
     129,  -309,   191,  -154,  -170,   -45,   338,   423,   220,   221,
     222,   223,   224,   225,    67,    74,    93,  -214,   189,   347,
     -45,   226,    68,   109,   360,   411,   282,  -216,  -179,   179,
    -130,   201,    19,   197,    67,   -62,   205,    68,  -149,     9,
      71,    68,    68,   -62,    82,   255,   255,   255,   255,   138,
     139,   140,   142,   128,   442,   407,   256,   162,   -62,   238,
     381,    63,   128,  -168,   180,   129,   378,   354,   126,   177,
     329,   213,   361,    72,    72,    68,   243,   126,   176,   386,
     190,   405,   194,   408,   182,    96,   434,   190,   177,   198,
    -280,    19,   163,   128,    19,   191,  -207,   340,    97,   385,
     -48,   293,   -48,   422,   -48,   454,  -173,    68,   126,  -173,
     487,   164,   165,   166,   167,   431,   493,    27,   164,   165,
      28,   433,   128,   176,     9,    72,   155,    72,   160,    72,
     377,   361,   184,   177,    74,  -282,    96,   126,  -173,   441,
     262,   185,   475,    82,   478,    97,   128,  -222,   176,    97,
     448,   450,   252,    90,   479,   457,     0,   190,   177,   459,
    -286,   126,     0,     0,     0,   128,   109,    19,  -142,   469,
    -149,  -149,   128,     0,   176,   109,   473,   474,     0,    72,
     126,   212,     0,     0,   177,   480,  -284,   126,   218,   128,
     219,     0,    72,   213,   128,   484,   278,   279,   280,   281,
     256,   256,   256,   256,   126,   489,   109,   361,   129,   126,
     502,    71,    71,   498,   386,   214,   215,   129,   217,     0,
     505,     0,   506,     0,   501,     0,     0,   266,    72,     0,
     507,   267,   181,   227,     0,   109,   514,   176,     0,   240,
     241,     0,     0,     0,   375,    12,     0,   177,   129,  -213,
      13,   -27,    14,   383,   190,     0,   306,     0,     0,   109,
       0,   163,     0,   348,   253,   355,     0,   355,   309,   310,
     311,   312,   313,   314,   315,     0,     0,   129,   109,   319,
     164,   165,   166,   167,   421,   109,    72,   168,     0,     0,
     220,   221,   222,   223,   224,   225,   252,   252,   252,   252,
       0,   129,   109,   226,     0,     0,     0,   109,     0,     0,
       0,   -48,   190,   438,    72,     0,   337,   387,     0,     0,
     129,   -48,   -48,   -48,   -48,     0,     0,   129,     0,     0,
      71,   306,     0,     0,     0,   334,     0,   456,   278,   279,
     280,   281,     0,     0,   129,     0,   336,   190,     0,   129,
     305,     0,     0,     0,   100,     0,   470,   -83,     0,     0,
       0,    14,    68,   477,     0,     0,   355,     0,     0,     0,
     317,   371,   372,   373,   374,     0,     0,   323,     0,     9,
     485,     0,     0,     0,     0,   488,     0,     0,   -83,     0,
       0,   -83,     0,    21,   101,   -83,   102,   -83,   -83,   -83,
     103,   -83,   104,     0,   -83,   -83,   105,   106,     0,   465,
       0,   -83,     0,     0,     0,   100,   420,     0,     0,     0,
       0,   267,    14,    68,   355,   305,   384,    35,    36,    37,
      38,    39,    40,    41,   401,     0,     0,   406,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,     0,   387,     0,    21,   101,     0,   102,    68,     0,
       0,   103,   213,   104,     0,   -83,   -83,   105,   106,     0,
       0,     0,   235,   142,   143,     0,     0,     0,     0,     0,
       0,     0,  -303,   468,  -303,     0,     0,   439,    35,    36,
      37,    38,    39,    40,    41,     0,   409,   410,     0,   236,
       0,   447,   413,     0,     0,     0,     0,     0,     0,     0,
     419,     0,    -7,    20,   145,    -7,    -7,     0,    -7,    -7,
      14,    -7,     0,    35,    36,    37,    38,    39,    40,    41,
     220,   221,   222,   223,   224,   225,   504,     0,    -7,     0,
       0,     0,   218,   226,     0,     0,    -7,    -7,    -7,    -7,
      -7,     0,    21,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,     0,   100,     0,
      -7,   -79,     0,     0,   463,    14,    68,   467,     0,     0,
       0,     0,     0,     0,  -154,   509,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     9,     0,     0,     0,     0,     0,  -154,
    -154,  -154,   -79,     0,     0,   -79,     0,    21,   101,   -79,
     102,   -79,   -79,   -79,   103,   -79,   104,     0,   -79,   -79,
     105,   106,     0,   100,     0,   -79,   -80,     0,     0,     0,
      14,    68,     0,     0,     0,     0,     0,     0,     0,     0,
    -154,    35,    36,    37,    38,    39,    40,    41,     9,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,     0,   -80,     0,     0,
     -80,     0,    21,   101,   -80,   102,   -80,   -80,   -80,   103,
     -80,   104,     0,   -80,   -80,   105,   106,     0,   100,     0,
     -80,     0,     0,     0,     0,    14,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,   101,     0,
     102,   -83,   -83,     0,   103,   100,   104,     0,   -83,     0,
     105,   106,    14,    68,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,    14,    68,
       9,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,    21,   101,     9,   102,     0,     0,
       0,   103,     0,   104,     0,     0,     0,   105,   106,     0,
      21,   101,   -83,   102,   100,     0,     0,   103,     0,   104,
       0,    14,    68,   105,   106,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     9,
       0,     0,     0,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,    21,   101,     0,   102,   100,     0,     0,
     103,   -83,   104,     0,    14,    68,   105,   106,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
      14,    68,     9,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,    21,   101,     9,   102,
       0,     0,     0,   103,     0,   104,     0,   -83,     0,   105,
     106,     0,    21,   101,   -83,   102,   100,     0,     0,   103,
       0,   104,     0,    14,    68,   105,   106,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     0,
       0,     9,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,    21,   101,     0,   102,     0,
       0,     0,   103,   100,   104,     0,     0,   -83,   105,   106,
      14,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,    21,   101,     0,   102,   100,     0,   -83,   103,
       0,   104,     0,    14,    68,   105,   106,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,    14,
      68,     9,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,   -83,     0,    21,   101,     9,   102,     0,
       0,     0,   103,     0,   104,     0,     0,     0,   105,   106,
       0,    21,   101,     0,   102,     0,     0,     0,   103,     0,
     104,     0,     0,     0,   105,   106,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,  -154,    35,    36,    37,    38,    39,
      40,    41,  -154,     0,  -154,  -154,  -154,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,  -154,  -154,  -154,
       0,   258,    68,     0,  -306,    82,  -306,     0,     0,    68,
       0,     0,    82,     0,     0,     0,     0,   142,   143,     9,
       0,     0,     0,     0,   142,   143,     9,     0,     0,     0,
       0,   259,   260,     0,  -154,     0,     0,     0,  -154,     0,
       0,     0,     0,     0,     0,     0,     0,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,   144,     0,     0,     0,   145,     0,
       0,   144,     0,     0,     0,   145,     0,    35,    36,    37,
      38,    39,    40,    41,    35,    36,    37,    38,    39,    40,
      41,   -40,     0,     0,     0,     0,     0,     0,   141,   -40,
       0,     0,   -40,     0,     0,     0,    68,     0,     0,    82,
       0,     0,     0,     0,   -40,   -40,   -40,     0,   500,     0,
       0,   142,   143,     9,     0,   141,    68,     0,     0,    82,
       0,     0,     0,    68,     0,     0,    82,     0,     0,     0,
       0,   142,   143,     9,     0,     0,     0,     0,   142,   143,
       0,   -40,     0,     0,     0,   -40,     0,     0,   144,     0,
       0,     0,   145,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,    35,    36,    37,    38,    39,    40,    41,   144,     0,
       0,     0,   145,     0,     0,   144,     0,     0,     0,   145,
       0,    35,    36,    37,    38,    39,    40,    41,    35,    36,
      37,    38,    39,    40,    41,   303,     0,     0,     0,     0,
       0,     0,   379,    68,     0,     0,    82,     0,     0,     0,
      68,     0,     0,    82,     0,     0,     0,     0,   142,   143,
       0,     0,   417,     0,     0,   142,   143,     0,     0,   464,
      68,     0,     0,    82,     0,     0,     0,    68,     0,     0,
      82,     0,     0,     0,     0,   142,   143,     0,     0,     0,
      67,     0,   142,   143,     0,   144,   -29,    14,    68,   145,
       0,     0,   144,     0,     0,     0,   145,     0,    35,    36,
      37,    38,    39,    40,    41,    35,    36,    37,    38,    39,
      40,    41,   144,   -29,    67,   -29,   145,     0,     0,   144,
     -33,    14,    68,   145,     0,    35,    36,    37,    38,    39,
      40,    41,    35,    36,    37,    38,    39,    40,    41,     0,
     370,     0,     0,     0,     0,     0,     0,   -33,    68,   -33,
       0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,    31,   335,   142,   143,     0,     0,    32,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,    33,     0,    34,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
     220,   221,   222,   223,   224,   225,     0,   270,   271,   272,
     273,   274,   275,   226,    35,    36,    37,    38,    39,    40,
      41,   184,     0,     0,     0,     0,     0,     0,   -45,     0,
       0,   -45,    82,   -45,    97,   269,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,     0,
       0,  -330,     0,     0,  -330,     0,     0,     0,  -154,     0,
     -45,     0,   -45,     0,     0,     0,  -330,  -330,     0,     0,
     -45,     0,     0,  -154,  -154,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   220,   221,   222,   223,   224,   225,     0,
     270,   271,   272,   273,   274,   275,   226,  -330,     0,     0,
       0,     0,     0,     0,  -154,     0,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -310,     0,  -310,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   221,
     222,   223,   224,   225,     0,     0,     0,     0,     0,     0,
       0,   226
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-399))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,   186,    17,     5,    11,    74,     6,    14,    43,    16,
      18,   181,   209,   319,   351,    22,     1,   121,    18,    19,
     351,   383,     1,     1,     1,    32,     1,     1,   301,     1,
      30,   429,     1,    49,     1,    51,     1,    53,     1,    55,
       1,    57,     8,    59,     1,    61,     6,     1,     1,    64,
       1,    14,    95,   451,     1,     9,     1,     1,    18,    19,
      11,    76,     1,     1,    29,     1,   428,    28,    12,    38,
      30,    24,   470,    58,    74,    49,    76,    56,    57,    57,
      57,    83,    57,    55,     1,   483,    88,   191,    55,     6,
       7,     8,   107,   109,   492,    52,   139,   112,   114,    46,
      45,   108,     1,   110,   410,   121,    44,   123,   470,    48,
     125,   118,   112,    49,    74,   130,    52,    34,   161,    36,
     127,   128,   129,   485,     1,   125,   126,   400,    30,   326,
     130,   147,     8,     1,     0,     1,     1,     3,     1,    16,
      17,    18,    19,     1,     1,   330,   331,   332,   333,   486,
      49,   321,    51,    52,     1,   486,    13,    74,    75,    76,
      77,    78,    79,    80,    40,     7,   126,    11,   175,    37,
      28,   186,    74,    50,    76,   191,   245,    79,    80,    42,
     195,    83,    84,    85,   288,   187,    51,    52,    35,    91,
     206,     1,     8,   200,   210,   195,    98,    28,     8,     1,
      16,    17,    18,    19,   211,   107,     8,   404,     1,   252,
     112,   254,   255,   256,   116,     1,    76,     1,     1,     1,
       1,   123,     8,   125,    40,     1,     9,    57,   130,    11,
      40,     7,    13,    26,    50,   242,     1,   239,    40,    49,
       1,    57,   346,     8,    28,   245,    11,   107,    13,    14,
      15,     1,   112,     1,    40,    16,    17,    18,    19,     1,
      42,     1,    12,    28,   307,   125,    30,    15,     8,    11,
     130,    13,   288,     9,    45,    40,   283,   381,    59,    60,
      61,    62,    63,    64,     1,   245,    28,    13,   112,   296,
      55,    72,     9,   195,   302,   364,    57,    11,    11,     1,
      40,   125,   302,     1,     1,     1,   130,     9,    52,    26,
      74,     9,     9,     9,    12,   330,   331,   332,   333,    83,
      84,    85,    24,   338,    56,   360,   186,    91,    24,     1,
     346,    18,   347,    44,    98,   195,   343,     1,   338,    11,
     246,    13,   302,   245,   246,     9,   174,   347,     1,   351,
     114,   358,   116,   361,   107,     1,   399,   121,    11,   123,
      13,   361,     1,   378,   364,   381,    12,   291,    14,     1,
      10,   195,    12,   380,    14,   429,     8,     9,   378,    11,
     476,    20,    21,    22,    23,   392,   486,     1,    20,    21,
       4,   398,   407,     1,    26,   297,    86,   299,    88,   301,
     340,   361,     1,    11,   364,    13,     1,   407,    40,   416,
     187,    10,   455,    12,   458,    14,   431,    12,     1,    14,
     427,   428,   186,    59,   459,   432,    -1,   191,    11,   437,
      13,   431,    -1,    -1,    -1,   450,   338,   437,    49,   446,
      51,    52,   457,    -1,     1,   347,   453,   454,    -1,   351,
     450,     1,    -1,    -1,    11,   462,    13,   457,   148,   474,
     150,    -1,   364,    13,   479,   472,    16,    17,    18,    19,
     330,   331,   332,   333,   474,   482,   378,   437,   338,   479,
     496,   245,   246,   490,   486,   137,   138,   347,   140,    -1,
     497,    -1,   499,    -1,   496,    -1,    -1,   187,   400,    -1,
     502,   191,    98,   155,    -1,   407,   513,     1,    -1,   161,
     162,    -1,    -1,    -1,   338,     1,    -1,    11,   378,    13,
       6,     7,     8,   347,   288,    -1,   216,    -1,    -1,   431,
      -1,     1,    -1,   297,   186,   299,    -1,   301,   228,   229,
     230,   231,   232,   233,   234,    -1,    -1,   407,   450,   239,
      20,    21,    22,    23,   378,   457,   458,    27,    -1,    -1,
      59,    60,    61,    62,    63,    64,   330,   331,   332,   333,
      -1,   431,   474,    72,    -1,    -1,    -1,   479,    -1,    -1,
      -1,     1,   346,   407,   486,    -1,   276,   351,    -1,    -1,
     450,    11,    12,    13,    14,    -1,    -1,   457,    -1,    -1,
     364,   291,    -1,    -1,    -1,   257,    -1,   431,    16,    17,
      18,    19,    -1,    -1,   474,    -1,   268,   381,    -1,   479,
     216,    -1,    -1,    -1,     1,    -1,   450,     4,    -1,    -1,
      -1,     8,     9,   457,    -1,    -1,   400,    -1,    -1,    -1,
     236,   330,   331,   332,   333,    -1,    -1,   243,    -1,    26,
     474,    -1,    -1,    -1,    -1,   479,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,   443,
      -1,    58,    -1,    -1,    -1,     1,   376,    -1,    -1,    -1,
      -1,   381,     8,     9,   458,   291,   348,    74,    75,    76,
      77,    78,    79,    80,   356,    -1,    -1,   359,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   486,    -1,    40,    41,    -1,    43,     9,    -1,
      -1,    47,    13,    49,    -1,    51,    52,    53,    54,    -1,
      -1,    -1,     1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,   443,    13,    -1,    -1,   409,    74,    75,
      76,    77,    78,    79,    80,    -1,   362,   363,    -1,    28,
      -1,   423,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     376,    -1,     0,     1,    65,     3,     4,    -1,     6,     7,
       8,     9,    -1,    74,    75,    76,    77,    78,    79,    80,
      59,    60,    61,    62,    63,    64,   496,    -1,    26,    -1,
      -1,    -1,   502,    72,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,     1,    -1,
      58,     4,    -1,    -1,   440,     8,     9,   443,    -1,    -1,
      -1,    -1,    -1,    -1,     9,   507,    74,    75,    76,    77,
      78,    79,    80,    26,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,     1,    -1,    58,     4,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    74,    75,    76,    77,    78,    79,    80,    26,    74,
      75,    76,    77,    78,    79,    80,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,     1,    -1,
      58,    -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    -1,    47,     1,    49,    -1,     4,    -1,
      53,    54,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      26,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    26,    43,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      40,    41,    42,    43,     1,    -1,    -1,    47,    -1,    49,
      -1,     8,     9,    53,    54,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    40,    41,    -1,    43,     1,    -1,    -1,
      47,    48,    49,    -1,     8,     9,    53,    54,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    26,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    40,    41,    26,    43,
      -1,    -1,    -1,    47,    -1,    49,    -1,    35,    -1,    53,
      54,    -1,    40,    41,    58,    43,     1,    -1,    -1,    47,
      -1,    49,    -1,     8,     9,    53,    54,    -1,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,     1,    49,    -1,    -1,    52,    53,    54,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,     1,    -1,    46,    47,
      -1,    49,    -1,     8,     9,    53,    54,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    26,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    38,    -1,    40,    41,    26,    43,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    40,    41,    -1,    43,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    74,    75,    76,    77,    78,
      79,    80,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    24,    25,    26,
      -1,     1,     9,    -1,    11,    12,    13,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    61,    -1,    -1,    -1,    65,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    74,    75,    76,
      77,    78,    79,    80,    74,    75,    76,    77,    78,    79,
      80,     1,    -1,    -1,    -1,    -1,    -1,    -1,     1,     9,
      -1,    -1,    12,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    24,    25,    26,    -1,     1,    -1,
      -1,    24,    25,    26,    -1,     1,     9,    -1,    -1,    12,
      -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,    24,    25,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    74,    75,    76,    77,    78,    79,
      80,    74,    75,    76,    77,    78,    79,    80,    61,    -1,
      -1,    -1,    65,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    74,    75,    76,    77,    78,    79,    80,    74,    75,
      76,    77,    78,    79,    80,     1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,     9,    -1,    -1,    12,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,     1,    -1,    -1,    24,    25,    -1,    -1,     1,
       9,    -1,    -1,    12,    -1,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
       1,    -1,    24,    25,    -1,    61,     7,     8,     9,    65,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    74,    75,
      76,    77,    78,    79,    80,    74,    75,    76,    77,    78,
      79,    80,    61,    34,     1,    36,    65,    -1,    -1,    61,
       7,     8,     9,    65,    -1,    74,    75,    76,    77,    78,
      79,    80,    74,    75,    76,    77,    78,    79,    80,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    34,     9,    36,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,     1,     1,    24,    25,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    74,    75,    76,    77,    78,    79,
      80,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    11,    12,    13,    14,     1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,     9,    -1,
      40,    -1,    42,    -1,    -1,    -1,    24,    25,    -1,    -1,
      50,    -1,    -1,    24,    25,    -1,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    71,    72,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    71,    72,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    74,    75,    76,    77,
      78,    79,    80,    74,    75,    76,    77,    78,    79,    80,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72
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
     219,   233,   105,     1,    20,    21,    22,    23,    27,   107,
     108,   109,   111,   112,   122,   123,     1,    11,   101,     1,
     105,   215,   127,    84,     1,    10,   156,   202,    84,   126,
     105,   156,   219,   242,   105,    84,   242,     1,   105,   156,
     158,   126,    84,    84,    84,   126,   187,     1,    28,   176,
     196,   199,     1,    13,   157,   157,   101,   157,   219,   219,
      59,    60,    61,    62,    63,    64,    72,   157,   207,   208,
     209,   210,   211,   212,   214,     1,    28,   232,     1,   101,
     157,   157,    99,   113,   115,    84,   104,     1,    15,   114,
     114,     1,   105,   157,   218,   220,   221,   222,     1,    31,
      32,    89,   173,   203,   204,   205,   219,   219,   242,     1,
      66,    67,    68,    69,    70,    71,   241,     1,    16,    17,
      18,    19,    57,   129,   243,   244,   245,   246,   247,     1,
      55,   135,   141,   126,     1,    50,   151,   159,    84,   156,
     112,   156,    84,     1,   137,   215,   219,   226,   157,   219,
     219,   219,   219,   219,   219,   219,     1,   215,    89,   219,
      84,   116,   117,   215,     1,    55,   120,   121,    98,   102,
     101,   101,   101,   101,   157,     1,   157,   219,    84,   242,
     137,     1,    57,   142,     1,    42,   145,    84,   105,     1,
      44,   161,   163,   165,     1,   105,   189,   190,   179,   189,
      96,   200,   101,    97,   100,   114,     1,    29,   118,   112,
       1,   222,   222,   222,   222,   126,   136,   145,    84,     1,
     146,   156,   242,   126,   157,     1,    89,   105,   107,   108,
     110,   167,   168,     1,    45,   162,     1,    46,   155,   191,
     101,   157,     1,    28,   188,    84,   157,    91,    96,   215,
     215,    98,   119,   215,     1,    48,   131,     1,   138,   215,
     219,   126,    84,   242,     1,    51,    52,   150,   152,   153,
     169,    84,   166,    84,   101,   189,   112,   180,   126,   157,
      97,    84,    56,   140,     1,    58,   134,   157,    84,     1,
      84,   153,     1,   150,   152,   170,   126,    84,   192,    96,
       1,    35,   194,   215,     1,   105,   139,   215,   219,    84,
     126,     1,   150,    84,    84,   101,   164,   126,   190,    91,
      84,     1,   150,   153,    84,   126,   171,   163,   126,    84,
     150,     1,   153,   168,     1,    38,   183,   185,    84,   150,
       1,    89,   156,   184,   219,    84,    84,    89,   181,   157,
       1,    37,   175,   182,    84
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
			fprintf(arquivo, "#include <stdio.h> \n#include <stdlib.h> \n#include <math.h> \n#include <string.h> \n ");			

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

  case 240:

/* Line 1806 of yacc.c  */
#line 704 "src/directg.y"
    {erros++;yyerror("Valor atribuido de forma errada");}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 709 "src/directg.y"
    {erros++;yyerror("Esperado \"<-\"");}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 746 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 791 "src/directg.y"
    {erros++;yyerror("Funcao inexistente");}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 803 "src/directg.y"
    {erros++;yyerror("Erro de assinatura de funcao");}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 813 "src/directg.y"
    {erros++;yyerror("Erro na funcao Compr()");}
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 826 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 835 "src/directg.y"
    {erros++;yyerror("Erro no funcao Maiusc");}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 844 "src/directg.y"
    {erros++;yyerror("Erro na funcao Raiz");}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 849 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 859 "src/directg.y"
    {erros++;yyerror("Parametro improprio para funcao escreva");}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 864 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 881 "src/directg.y"
    {erros++;yyerror("Erro na funcao escreval");}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 890 "src/directg.y"
    {erros++;yyerror("Erro na funcao leia (Antigo paçoca)");}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 900 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;



/* Line 1806 of yacc.c  */
#line 3286 "directg.tab.c"
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
#line 936 "src/directg.y"


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


