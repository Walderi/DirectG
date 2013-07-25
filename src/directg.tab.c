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

yyerrork; //stack error correction


int erros=0;
char escopo[30];
char nome[30];
char  *variavel;
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

void existeVariavel( char *nome){
int existe;
        existe = hashvariavel_existenaHash(nome, &hashVariavel);
        if (existe == 1) {
       		fprintf(arquivo, " %s " , nome);
        } else {
       		 erros++;
       		 yyerror("Essa variavel não existe ");
        }

}




/* Line 268 of yacc.c  */
#line 146 "directg.tab.c"

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
     T_VAR = 260,
     T_INICIO = 261,
     T_COMENTARIO = 262,
     T_IDENTIFICADOR = 263,
     T_ATRIBUI = 264,
     T_SEPARADOR = 265,
     T_ABRE_PARENT = 266,
     T_FECHA_PARENT = 267,
     T_ABRECOLCHETE = 268,
     T_FECHACOLCHETE = 269,
     T_AND = 270,
     T_OR = 271,
     T_NOT = 272,
     T_XOR = 273,
     T_INTEIRO = 274,
     T_REAL = 275,
     T_CARACTERE = 276,
     T_LOGICO = 277,
     T_NUMINTEIRO = 278,
     T_NUMREAL = 279,
     T_STRING = 280,
     T_VETOR = 281,
     T_DECLARAVAR = 282,
     T_PONTOPONTO = 283,
     T_ESPACO = 284,
     T_LOGICO_VERDADEIRO = 285,
     T_LOGICO_FALSO = 286,
     T_VARIAVEL = 287,
     T_PROCEDIMENTO = 288,
     T_FIMPROCEDIMENTO = 289,
     T_FUNCAO = 290,
     T_FIMFUNCAO = 291,
     T_RETORNE = 292,
     T_INVALIDO = 293,
     T_QUEBRA = 294,
     T_REPITA = 295,
     T_ATE = 296,
     T_ESCOLHA = 297,
     T_CASO = 298,
     T_OUTROCASO = 299,
     T_FIMESCOLHA = 300,
     T_ENQUANTO = 301,
     T_FIMENQUANTO = 302,
     T_SE = 303,
     T_ENTAO = 304,
     T_SENAO = 305,
     T_FIMSE = 306,
     T_INTERROMPA = 307,
     T_PARA = 308,
     T_DE = 309,
     T_PASSO = 310,
     T_FACA = 311,
     T_FIMPARA = 312,
     T_SOMA = 313,
     T_DIVISAO = 314,
     T_SUBTRACAO = 315,
     T_MULT = 316,
     T_POTENCIA = 317,
     T_MOD = 318,
     T_PI = 319,
     T_DIFERENTE = 320,
     T_MENORQUE = 321,
     T_MENORIGUALQUE = 322,
     T_MAIORQUE = 323,
     T_MAIORIGUALQUE = 324,
     T_IGUAL = 325,
     T_DIVISAOINTEIRA = 326,
     T_RESTO = 327,
     T_ESCREVAL = 328,
     T_ESCREVA = 329,
     T_LEIA = 330,
     T_RAIZQ = 331,
     T_COPIA = 332,
     T_COMPR = 333,
     T_MAIUSC = 334
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
#line 280 "directg.tab.c"

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
#define YYLAST   1913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  173
/* YYNRULES -- Number of rules.  */
#define YYNRULES  348
/* YYNRULES -- Number of states.  */
#define YYNSTATES  521

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    12,    14,    16,    19,
      21,    23,    24,    25,    31,    33,    35,    39,    41,    43,
      45,    48,    50,    51,    56,    57,    63,    66,    68,    70,
      71,    75,    78,    81,    83,    85,    86,    87,    88,    96,
     102,   105,   107,   109,   111,   112,   113,   119,   121,   123,
     125,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   159,   163,   167,
     169,   171,   173,   175,   177,   179,   182,   184,   188,   193,
     198,   200,   202,   204,   207,   210,   211,   214,   215,   219,
     221,   223,   226,   227,   231,   234,   237,   239,   241,   243,
     245,   247,   249,   251,   253,   255,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   304,   311,   313,   315,   317,
     326,   328,   330,   332,   334,   338,   340,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   365,   367,   375,   386,
     395,   407,   420,   430,   432,   434,   436,   438,   440,   442,
     444,   446,   448,   449,   454,   456,   463,   465,   467,   469,
     471,   473,   478,   479,   486,   488,   489,   495,   496,   498,
     500,   502,   504,   506,   507,   508,   509,   516,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   537,   538,
     539,   540,   541,   559,   561,   563,   565,   569,   571,   573,
     575,   578,   579,   585,   587,   589,   591,   595,   599,   601,
     603,   604,   605,   611,   613,   615,   617,   618,   624,   626,
     627,   628,   639,   641,   643,   646,   649,   651,   653,   655,
     657,   659,   661,   663,   665,   667,   668,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   693,   695,   697,
     699,   701,   703,   705,   707,   709,   713,   717,   721,   725,
     729,   733,   736,   740,   744,   746,   748,   750,   752,   754,
     756,   758,   760,   764,   769,   771,   773,   777,   779,   783,
     785,   789,   791,   795,   797,   799,   804,   809,   811,   813,
     815,   824,   826,   828,   833,   835,   837,   842,   844,   845,
     848,   850,   851,   853,   856,   862,   866,   874,   878,   880,
     884,   886,   888,   891,   893,   896,   898,   900,   901,   907,
     909,   911,   913,   915,   917,   919,   921,   923,   927,   931,
     935,   937,   939,   941,   943,   945,   947,   949,   951
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    89,    83,    -1,    39,    -1,
     204,    -1,     1,    -1,    82,    -1,    82,    83,    -1,     3,
      -1,     1,    -1,    -1,    -1,    84,    86,    91,    87,    83,
      -1,     4,    -1,     1,    -1,    85,    93,    88,    -1,    25,
      -1,    90,    -1,     1,    -1,     6,    83,    -1,     1,    -1,
      -1,    97,    92,    94,   127,    -1,    -1,    97,   175,    92,
      95,   127,    -1,   203,    93,    -1,     5,    -1,     1,    -1,
      -1,    96,    83,    99,    -1,    96,    83,    -1,   203,    97,
      -1,    27,    -1,     1,    -1,    -1,    -1,    -1,   103,    98,
     113,   100,    83,   101,    99,    -1,   103,    98,   124,    83,
      99,    -1,   203,    99,    -1,    10,    -1,     1,    -1,   106,
      -1,    -1,    -1,   106,   104,   102,   105,   103,    -1,   107,
      -1,     8,    -1,   125,    -1,     1,    -1,    19,    -1,    20,
      -1,    21,    -1,   108,    -1,   109,    -1,     1,    -1,    22,
      -1,   108,    -1,   109,    -1,   110,    -1,   112,    -1,     1,
      -1,    13,    -1,     1,    -1,    14,    -1,     1,    -1,   114,
     117,   115,    -1,   118,   119,   120,    -1,   219,    -1,    28,
      -1,     1,    -1,   219,    -1,    54,    -1,     1,    -1,   121,
     113,    -1,    26,    -1,   123,   116,   122,    -1,   107,   114,
     106,   115,    -1,   107,   114,   219,   115,    -1,    52,    -1,
     128,    -1,   203,    -1,   203,   127,    -1,   128,   127,    -1,
      -1,    90,    83,    -1,    -1,   209,   129,    83,    -1,   131,
      -1,   151,    -1,   126,    83,    -1,    -1,   224,   130,    83,
      -1,   225,    83,    -1,    83,   128,    -1,     1,    -1,   146,
      -1,   135,    -1,   150,    -1,    56,    -1,     1,    -1,    46,
      -1,    47,    -1,     1,    -1,   133,   247,   132,    83,   127,
     134,    83,    -1,     1,    -1,    53,    -1,    57,    -1,     1,
      -1,    54,    -1,     1,    -1,   148,    -1,   223,    -1,   219,
      -1,     1,    -1,   223,    -1,   219,    -1,     1,    -1,   106,
      -1,   219,    -1,   223,    -1,     1,    -1,    55,    -1,   138,
     140,   139,   141,    -1,   138,   140,   139,   141,   143,   142,
      -1,     1,    -1,    56,    -1,     1,    -1,   136,   106,   144,
     145,    83,   127,   137,    83,    -1,    40,    -1,    41,    -1,
       1,    -1,   247,    -1,   159,   247,   160,    -1,     1,    -1,
     147,    83,   127,   148,   149,    83,    -1,     1,    -1,   156,
      -1,   163,    -1,    48,    -1,    51,    -1,     1,    -1,    49,
      -1,     1,    -1,    50,    -1,     1,    -1,   152,   247,   154,
      83,   127,   153,    83,    -1,   152,   247,   154,    83,   127,
     155,    83,   127,   153,    83,    -1,   152,   247,   154,    83,
     127,   156,   153,    83,    -1,   152,   247,   154,    83,   127,
     155,    83,   127,   156,   153,    83,    -1,   152,   247,   154,
      83,   127,   156,   155,    83,   127,   156,   153,    83,    -1,
     152,   247,   154,    83,   127,   155,   156,   153,    83,    -1,
       1,    -1,    42,    -1,    45,    -1,     1,    -1,    11,    -1,
       1,    -1,    12,    -1,     1,    -1,   106,    -1,    -1,   159,
     162,   106,   160,    -1,     1,    -1,   157,   161,    83,   168,
     158,    83,    -1,     1,    -1,    43,    -1,     1,    -1,    44,
      -1,     1,    -1,   164,   171,    83,   127,    -1,    -1,   164,
     171,    83,   127,   167,   166,    -1,     1,    -1,    -1,   166,
     165,   169,    83,   127,    -1,    -1,   106,    -1,    90,    -1,
     111,    -1,     1,    -1,   170,    -1,    -1,    -1,    -1,   170,
     172,   173,   102,   174,   171,    -1,   180,    -1,   200,    -1,
     224,    -1,   225,    -1,   224,    -1,    35,    -1,    36,    -1,
       1,    -1,    27,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   181,   189,   179,   113,   182,    83,   183,    97,
      92,   127,   188,    83,   184,   178,   185,    83,    -1,     1,
      -1,    37,    -1,     1,    -1,   159,    90,   160,    -1,    90,
      -1,   223,    -1,     1,    -1,   186,   187,    -1,    -1,   107,
     190,   159,   192,   160,    -1,     1,    -1,    27,    -1,     1,
      -1,   193,   191,   113,    -1,   192,   102,   192,    -1,     1,
      -1,   106,    -1,    -1,    -1,   106,   194,   102,   195,   193,
      -1,    33,    -1,    34,    -1,     1,    -1,    -1,   107,   199,
     159,   192,   160,    -1,     1,    -1,    -1,    -1,   196,   201,
     198,   202,    83,    97,    92,   127,   197,    83,    -1,     1,
      -1,   204,    -1,   204,   203,    -1,     7,    83,    -1,     9,
      -1,    31,    -1,    30,    -1,    90,    -1,   223,    -1,   176,
      -1,   206,    -1,   207,    -1,     1,    -1,    -1,   107,   210,
     205,   208,    -1,     1,    -1,    58,    -1,    60,    -1,    61,
      -1,    59,    -1,    71,    -1,    63,    -1,    60,    -1,    62,
      -1,    23,    -1,     1,    -1,    24,    -1,    64,    -1,   219,
      -1,   220,    -1,   221,    -1,   222,    -1,   106,    -1,   223,
     211,   223,    -1,   223,   212,   223,    -1,   223,   213,   223,
      -1,   223,   214,   223,    -1,   223,   215,   223,    -1,   223,
     216,   223,    -1,   217,   223,    -1,   223,   218,   223,    -1,
     159,   223,   160,    -1,   176,    -1,   228,    -1,   231,    -1,
     233,    -1,   235,    -1,   240,    -1,   242,    -1,   244,    -1,
     107,   159,   160,    -1,   107,   159,   226,   160,    -1,     1,
      -1,   106,    -1,   106,   102,   226,    -1,   222,    -1,   222,
     102,   226,    -1,   225,    -1,   225,   102,   226,    -1,   224,
      -1,   224,   102,   226,    -1,     1,    -1,    78,    -1,   227,
     159,   106,   160,    -1,   227,   159,    90,   160,    -1,     1,
      -1,    77,    -1,   140,    -1,   229,   159,   106,   102,   230,
     102,   219,   160,    -1,     1,    -1,    79,    -1,   232,   159,
     106,   160,    -1,     1,    -1,    76,    -1,   234,   159,   223,
     160,    -1,     1,    -1,    -1,    27,   219,    -1,     1,    -1,
      -1,    90,    -1,   223,   236,    -1,   237,   102,   223,    98,
     219,    -1,   237,   102,   223,    -1,   237,   102,   223,    98,
     219,    98,   219,    -1,   237,   102,    90,    -1,     1,    -1,
     159,   237,   160,    -1,     1,    -1,    74,    -1,   239,   238,
      -1,    73,    -1,   241,   238,    -1,     1,    -1,    75,    -1,
      -1,   243,   159,   245,   106,   160,    -1,     1,    -1,    70,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,     1,    -1,   223,   246,   223,    -1,   247,   252,   247,
      -1,   159,   247,   160,    -1,   106,    -1,    15,    -1,    16,
      -1,    17,    -1,    18,    -1,   248,    -1,   249,    -1,   250,
      -1,   251,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   126,   129,   130,   131,   135,   136,   140,
     145,   149,   149,   149,   153,   154,   158,   162,   167,   168,
     172,   173,   177,   177,   178,   178,   179,   184,   185,   188,
     189,   190,   191,   196,   197,   200,   201,   206,   201,   207,
     208,   212,   213,   217,   225,   231,   225,   239,   243,   244,
     245,   249,   253,   258,   263,   265,   266,   270,   275,   276,
     277,   278,   279,   287,   288,   292,   293,   297,   301,   305,
     309,   310,   314,   318,   319,   323,   327,   331,   335,   336,
     343,   347,   348,   349,   350,   353,   354,   355,   355,   356,
     357,   358,   359,   359,   360,   361,   362,   368,   369,   370,
     375,   376,   380,   384,   385,   389,   391,   399,   403,   404,
     408,   409,   413,   417,   418,   419,   423,   424,   425,   429,
     430,   431,   432,   436,   440,   441,   442,   446,   447,   451,
     456,   461,   462,   466,   467,   468,   474,   475,   481,   482,
     486,   490,   491,   495,   496,   500,   501,   507,   508,   509,
     510,   511,   512,   513,   518,   522,   523,   527,   528,   532,
     533,   536,   537,   537,   538,   544,   545,   549,   550,   554,
     555,   559,   560,   560,   561,   567,   567,   570,   571,   572,
     573,   574,   578,   579,   579,   579,   579,   583,   584,   585,
     589,   590,   594,   598,   599,   603,   604,   608,   608,   614,
     615,   615,   608,   616,   620,   621,   625,   626,   627,   628,
     632,   636,   636,   637,   641,   642,   646,   647,   648,   652,
     659,   665,   659,   669,   673,   674,   678,   678,   679,   683,
     683,   683,   687,   691,   692,   696,   700,   704,   709,   714,
     715,   716,   717,   718,   719,   723,   723,   724,   728,   733,
     738,   742,   747,   752,   756,   760,   765,   766,   770,   774,
     778,   779,   780,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   799,   800,   801,   802,   803,
     804,   805,   809,   810,   811,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   827,   831,   832,   833,   837,   841,
     845,   846,   850,   854,   855,   859,   863,   864,   867,   868,
     869,   872,   873,   874,   875,   876,   877,   878,   879,   883,
     884,   888,   892,   896,   901,   902,   906,   910,   910,   911,
     915,   916,   917,   918,   919,   920,   921,   925,   926,   927,
     928,   933,   937,   941,   945,   949,   950,   951,   952
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALGORITMO", "T_FIMALGORITMO", "T_VAR",
  "T_INICIO", "T_COMENTARIO", "T_IDENTIFICADOR", "T_ATRIBUI",
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
  "CabecalhoAlgoritmo", "$@1", "$@2", "FimAlgoritmo", "BlocoAlgoritmo",
  "String", "NomeAlgoritmo", "InicioLogica", "BlocoCodigo", "$@3", "$@4",
  "InicioBlocoDeclaracao", "BlocoDeclaracao", "DefineTipo",
  "BlocoVariaveis", "$@5", "$@6", "Separador", "Variaveis", "$@7", "$@8",
  "Variavel", "Identificador", "TipoInteiro", "TipoReal", "TipoCaractere",
  "TipoNumerico", "TipoLogico", "Tipos", "AbreColchete", "FechaColchete",
  "ExprColcheteVetor", "ExprInternaColcheteVetor", "PosInicialVetor",
  "EntrePosVetor", "PosFinalVetor", "DefineTipoVetor", "TipoDoTipoVetor",
  "NomeVetor", "TipoVetor", "VariavelVetor", "Interromper",
  "BlocosLogicos", "BlocoLogico", "$@9", "$@10", "Lacos", "FacaEnquanto",
  "InicioEnquanto", "FimEnquanto", "BlocoEnquanto", "InicioPara",
  "FimPara", "AlcancePara", "AtePara", "InicioAlcancePara",
  "FimAlcancePara", "AlcancePasso", "PassoPara", "ExprCondicaoPara",
  "FacaPara", "BlocoPara", "InicioRepita", "RepitaAte", "ExprRepitaAte",
  "BlocoRepita", "Desvios", "InicioSe", "FimSe", "DesvioEntao",
  "DesvioSenao", "BlocosSe", "InicioEscolha", "FimEscolha",
  "AbreParenteses", "FechaParenteses", "ExprEscolha", "$@11",
  "BlocosEscolha", "AbreCaso", "OutroCaso", "BlocosCaso", "$@12",
  "BlocoCasos", "$@13", "Selecao", "SelecaoCasos", "$@14", "$@15", "$@16",
  "Funcoes", "FuncaoRetornavel", "IniciaFuncao", "FimFuncao",
  "DefinidorFuncao", "Funcao", "$@17", "$@18", "$@19", "$@20", "$@21",
  "PalavraRetorno", "ExprRetorno", "Retorno", "NomeFuncao", "$@22",
  "DefineVarAssinatura", "Assinatura", "Variaveisfuncao", "$@23", "$@24",
  "InicioProcedimento", "FimProcedimento", "NomeProcedimento", "$@25",
  "BlocoProcedimento", "$@26", "$@27", "Comentarios", "Comentario",
  "Atribuidor", "LogicoFalso", "LogicoVerdadeiro", "Atribuido",
  "Atribuicao", "@28", "ExprSoma", "ExprSub", "ExprMult", "ExprDiv",
  "ExprDivInt", "ExprMod", "Negativo", "ExprPot", "NumeroInteiro",
  "NumeroReal", "Pi", "Numero", "ArtmExpr", "FuncaoNativa",
  "FuncaoNaoNativa", "AssinaturaExistente", "InicioComprimento",
  "Comprimento", "InicioCopia", "SegundoTermoCopia", "Copia",
  "InicioMaiusc", "Maiusc", "InicioRaiz", "Raiz", "CasasDecimais",
  "ExprEscreva", "ParametrosEscreva", "InicioEscreva", "Escreva",
  "InicioEscreval", "Escreval", "InicioLeia", "Leia", "$@29",
  "CondicoesLogicas", "ExpressaoLogica", "LogicoAnd", "LogicoOr",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    83,    83,    84,
      84,    86,    87,    85,    88,    88,    89,    90,    91,    91,
      92,    92,    94,    93,    95,    93,    93,    96,    96,    97,
      97,    97,    97,    98,    98,    99,   100,   101,    99,    99,
      99,   102,   102,   103,   104,   105,   103,   106,   107,   107,
     107,   108,   109,   110,   111,   111,   111,   112,   113,   113,
     113,   113,   113,   114,   114,   115,   115,   116,   117,   118,
     119,   119,   120,   121,   121,   122,   123,   124,   125,   125,
     126,   127,   127,   127,   127,   128,   128,   129,   128,   128,
     128,   128,   130,   128,   128,   128,   128,   131,   131,   131,
     132,   132,   133,   134,   134,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   143,   144,   144,   144,   145,   145,   146,
     147,   148,   148,   149,   149,   149,   150,   150,   151,   151,
     152,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   156,   156,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   162,   161,   161,   163,   163,   164,   164,   165,
     165,   166,   167,   166,   166,   169,   168,   170,   170,   170,
     170,   170,   171,   172,   173,   174,   171,   175,   175,   175,
     176,   176,   177,   178,   178,   179,   179,   181,   182,   183,
     184,   185,   180,   180,   186,   186,   187,   187,   187,   187,
     188,   190,   189,   189,   191,   191,   192,   192,   192,   193,
     194,   195,   193,   196,   197,   197,   199,   198,   198,   201,
     202,   200,   200,   203,   203,   204,   205,   206,   207,   208,
     208,   208,   208,   208,   208,   210,   209,   209,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   219,   220,   221,
     222,   222,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   224,   224,   224,   224,   224,
     224,   224,   225,   225,   225,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   227,   228,   228,   228,   229,   230,
     231,   231,   232,   233,   233,   234,   235,   235,   236,   236,
     236,   237,   237,   237,   237,   237,   237,   237,   237,   238,
     238,   239,   240,   241,   242,   242,   243,   245,   244,   244,
     246,   246,   246,   246,   246,   246,   246,   247,   247,   247,
     247,   248,   249,   250,   251,   252,   252,   252,   252
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     2,     1,
       1,     0,     0,     5,     1,     1,     3,     1,     1,     1,
       2,     1,     0,     4,     0,     5,     2,     1,     1,     0,
       3,     2,     2,     1,     1,     0,     0,     0,     7,     5,
       2,     1,     1,     1,     0,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     4,     4,
       1,     1,     1,     2,     2,     0,     2,     0,     3,     1,
       1,     2,     0,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     1,     1,     1,     8,
       1,     1,     1,     1,     3,     1,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,    10,     8,
      11,    12,     9,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     6,     1,     1,     1,     1,
       1,     4,     0,     6,     1,     0,     5,     0,     1,     1,
       1,     1,     1,     0,     0,     0,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     0,
       0,     0,    17,     1,     1,     1,     3,     1,     1,     1,
       2,     0,     5,     1,     1,     1,     3,     3,     1,     1,
       0,     0,     5,     1,     1,     1,     0,     5,     1,     0,
       0,    10,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     4,     4,     1,     1,     1,
       8,     1,     1,     4,     1,     1,     4,     1,     0,     2,
       1,     0,     1,     2,     5,     3,     7,     3,     1,     3,
       1,     1,     2,     1,     2,     1,     1,     0,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,    11,     0,     0,     0,    28,
      27,     0,     0,     0,     0,     0,   233,     6,     4,     0,
       3,     5,    19,    17,    18,    12,   235,    15,    14,    16,
       0,    21,     0,   223,   192,   323,   321,   326,   305,   298,
     294,   302,    22,     0,   197,   187,   229,   188,   189,     0,
     275,     0,   276,     0,   277,     0,   278,     0,   279,     0,
     280,     0,   281,    26,     0,   234,     8,     0,    50,    48,
      30,     0,    43,     0,    49,     0,    20,     0,    21,    24,
       0,     0,   158,   157,     0,     0,     0,     0,   320,     0,
     322,   324,   327,    13,    34,    33,     0,     0,    64,    63,
       0,    40,     6,   130,   154,   102,   140,    80,   107,     0,
       0,     0,     0,    23,     0,    89,     0,    98,     0,    97,
       0,    99,    90,     0,   138,     0,   139,     0,     5,    87,
      92,     0,     0,    50,     0,     0,    50,     0,   230,     0,
       0,     0,     0,    50,   256,   258,   254,   259,   264,     0,
       0,   274,     0,   260,   261,   262,   263,     0,   191,   190,
      50,   312,     0,     0,     0,    62,    51,    52,    53,    57,
      76,    58,    59,    60,    61,    36,     0,     0,    42,    41,
      45,    50,     0,     0,    95,    86,   158,     0,     0,    91,
      84,   264,     0,     0,     0,     0,     0,     0,    50,   161,
     162,     0,    83,     0,     0,    94,    25,     0,   196,   195,
       0,     0,     0,   160,   159,   296,   295,     0,   303,     0,
     271,   248,   251,   249,   250,   255,   253,   252,   306,     0,
       0,     0,     0,     0,     0,     0,   310,     0,   313,   160,
       0,   319,     0,     0,     0,     0,     0,     0,    66,    65,
      78,    79,   160,     0,   282,     0,     0,     0,     0,   236,
       0,     0,     0,   336,   331,   332,   333,   334,   335,   330,
       0,   101,   341,   342,   343,   344,   100,     0,   345,   346,
     347,   348,     0,   111,   110,     0,     0,     0,   144,   143,
       0,     0,     0,    88,    93,     0,   198,     0,     0,    50,
     299,   260,   113,     0,   273,   265,   266,   267,   268,   269,
     270,   272,   257,   309,   317,     0,   328,    37,     0,     0,
      69,    74,    73,     0,    77,    39,    46,     0,     0,     0,
       0,   283,    50,   238,   237,   239,   274,   242,   243,   246,
     240,   160,   339,   337,     0,   338,     0,   128,   127,     0,
     132,   131,     0,     0,     0,   168,   167,     0,     0,     0,
      50,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    71,    70,     0,    75,    50,   286,   288,   292,
     290,     0,     0,   112,     0,    50,     0,     0,   133,     0,
     163,    50,   179,   178,    54,    55,   180,   182,     0,   170,
     169,   175,   156,   155,     0,     0,     0,   212,   215,   214,
       0,   199,   227,     0,    32,     0,     0,    38,    68,    72,
     104,   103,     0,    50,   124,   260,   116,     0,   136,     0,
     142,   145,   141,     0,     0,     0,   184,     0,     0,   165,
     221,     0,   216,     0,     0,   300,     0,   105,   123,     0,
     109,   108,     0,   339,   147,     6,     0,     0,   142,     0,
       0,     0,   171,     0,     0,     0,   225,   224,     0,   316,
      50,   264,   125,   260,   121,   129,     0,   142,     0,   149,
       0,   185,     0,   176,   222,     0,   231,   142,     0,     0,
     152,     0,     0,   173,     0,   148,     0,   153,     0,   186,
     205,   204,     0,     0,   150,     0,    50,   207,     0,   210,
     208,   200,   151,     0,     0,   206,   194,   193,   201,     0,
     202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,   109,     5,     6,     8,    67,    29,     7,
     110,    25,    42,    12,    77,   132,    13,    14,    96,    70,
     243,   370,   406,    71,    97,   247,   148,   149,   171,   172,
     173,   396,   174,   175,   100,   250,   245,   318,   319,   374,
     418,   323,   324,   176,   177,    74,   112,   113,   114,   203,
     204,   115,   277,   116,   422,   117,   118,   452,   285,   382,
     300,   424,   472,   449,   286,   349,   119,   120,   352,   386,
     121,   122,   123,   433,   290,   434,   124,   125,   404,   150,
     304,   201,   291,   126,   357,   401,   358,   482,   359,   438,
     397,   398,   436,   461,   492,    43,   151,    44,   518,   210,
      45,    80,   364,   443,   514,   519,   502,   509,   503,   135,
     207,   410,   362,   363,   405,   464,    46,   468,   138,   211,
      47,    81,   212,   127,    21,   260,   337,   338,   339,   129,
     188,   229,   230,   231,   232,   233,   234,   152,   235,   153,
     154,   155,   156,   193,   158,   159,   258,    49,    50,    51,
     303,    52,    53,    54,    55,    56,   238,   163,    90,    57,
      58,    59,    60,    61,    62,   164,   270,   194,   278,   279,
     280,   281,   282
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -370
static const yytype_int16 yypact[] =
{
    -370,   455,  -370,  -370,  -370,  -370,   542,   111,   208,  -370,
    -370,   111,   213,   111,   842,   542,   164,  -370,  -370,   794,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     967,    46,   111,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,   318,  -370,  -370,  -370,  -370,  -370,   211,
    -370,   211,  -370,   211,  -370,   211,  -370,   258,  -370,   258,
    -370,   211,  -370,  -370,   842,  -370,  -370,   111,  -370,  -370,
    -370,   154,   230,   336,  -370,  1656,  -370,  1014,  -370,  -370,
     337,   343,  -370,  -370,   237,   364,   364,   200,  1361,  1394,
    -370,  -370,  -370,  -370,  -370,  -370,   485,   298,  -370,  -370,
      39,  -370,   481,  -370,  -370,  -370,  -370,  -370,  -370,   678,
     111,   321,   111,  -370,   849,  -370,   200,  -370,   364,  -370,
     111,  -370,  -370,   200,  -370,   243,  -370,   904,   164,  -370,
    -370,   111,  1014,   225,    45,   163,   179,   281,  -370,   218,
     218,   298,   218,  1682,  -370,  -370,  -370,  -370,  -370,  1761,
     200,  -370,   200,  -370,  -370,  -370,  -370,  1316,  -370,  -370,
    1682,  -370,  1824,   354,   364,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   214,   111,  -370,  -370,
    -370,  -370,    41,    41,  -370,  -370,   240,  1664,   244,  -370,
    -370,   589,   200,  1779,    53,    28,  1056,   126,    40,  -370,
    -370,   111,  -370,   111,   111,  -370,  -370,   211,  -370,  -370,
     285,   211,   111,  -370,  -370,  -370,  -370,  1527,  -370,  1316,
     359,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   200,
     200,   200,   200,   200,   200,   200,  -370,   103,  -370,  1440,
    1498,  -370,   218,   111,   103,    48,  1656,   364,  -370,  -370,
    -370,  -370,   255,   383,  -370,   384,   402,   424,   218,  -370,
    1419,  1724,   311,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     200,  -370,  -370,  -370,  -370,  -370,  -370,   111,  -370,  -370,
    -370,  -370,   200,   228,  -370,  1527,    38,   119,  -370,  -370,
     111,   364,    49,  -370,  -370,   381,  -370,   381,   494,  1682,
    -370,   122,   359,   298,  -370,   359,   359,   359,   359,   359,
     359,   359,  -370,  -370,  -370,  1842,  -370,  -370,    41,    29,
    -370,  -370,  -370,   285,  -370,  -370,  -370,   686,   686,   686,
     686,  -370,  1682,  -370,  -370,  -370,   127,  -370,  -370,  -370,
     359,  1644,  -370,   359,  1075,   506,   119,  -370,  -370,   111,
    -370,  -370,  1558,   959,   218,   247,  -370,  1545,    62,    21,
     269,   310,   354,   199,   111,   354,   318,   494,   103,   103,
    1656,  -370,  -370,  -370,   103,  -370,  -370,  -370,  -370,  -370,
    -370,    43,  1606,  -370,  1117,  1682,   111,   200,   506,    60,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   326,   111,  -370,
    -370,  -370,  -370,  -370,   111,   298,   381,  -370,  -370,  -370,
     285,  -370,  -370,  1172,  -370,   218,   219,  -370,  -370,  -370,
    -370,  -370,   111,  1682,   266,    20,   359,    31,  -370,   311,
     434,  -370,  -370,   111,   150,    22,  -370,   623,   111,  -370,
    -370,   468,  -370,   494,   135,  -370,   103,  -370,  -370,  1637,
    -370,  -370,   111,   203,  -370,  -370,  1214,    23,  -370,   111,
     111,   298,   252,  1230,   364,   318,  -370,  -370,   111,  -370,
    1682,    42,  -370,    44,   359,  -370,   155,  -370,   111,  -370,
    1315,  -370,    49,  -370,  -370,  1273,  -370,   288,   111,    23,
    -370,    33,  1545,  -370,    30,  -370,   111,  -370,    23,  -370,
    -370,  -370,  1519,   111,  -370,   111,  1335,  -370,  1498,  -370,
     359,  -370,  -370,   218,   132,  -370,  -370,  -370,  -370,   111,
    -370
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,    -7,  -370,  -370,  -370,  -370,  -370,  -370,
      -5,  -370,   -33,   345,  -370,  -370,  -370,    -8,  -300,   -70,
    -370,  -370,    32,    94,  -370,  -370,   283,   107,  -346,  -344,
    -370,  -370,  -370,  -208,   185,  -169,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   166,   267,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
      95,  -370,  -370,  -370,  -370,  -370,  -370,  -370,    59,  -370,
    -370,  -370,  -370,  -336,  -370,   -49,  -369,  -370,  -370,    36,
    -104,  -370,  -370,  -370,  -370,  -370,   -90,  -370,  -370,  -370,
    -370,   -82,  -370,  -370,  -370,  -370,   168,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -281,   -35,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,    11,     3,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   -72,
    -370,  -370,  -150,   324,   -13,   330,   204,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   374,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -115,  -370,  -370,
    -370,  -370,  -370
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -341
static const yytype_int16 yytable[] =
{
      20,    48,   296,    24,    26,   101,    30,    64,   197,    16,
      79,   394,    66,   395,   251,   369,   365,    15,    16,    16,
     435,  -117,   402,   458,   477,    76,    15,    65,   183,   283,
     372,   500,   450,    16,   497,   215,   216,   255,   218,   347,
     181,    75,   248,  -119,   420,  -120,    98,    69,  -158,   321,
     355,    48,  -203,   228,   271,   249,  -211,   373,    99,   241,
      93,   430,   144,   399,   130,   457,   403,   501,   272,   273,
     274,   275,   431,   432,   432,  -117,  -117,   262,    16,   139,
     128,   106,   284,   254,   161,    84,    75,    85,   451,    86,
     421,    87,   356,    89,   348,    89,   130,    92,  -119,   459,
    -120,   130,   322,   185,   312,   189,   400,   489,   106,   276,
     431,   432,    17,   196,   130,   375,   446,   128,    11,   130,
     350,   478,   498,  -114,   205,   441,   144,   288,  -241,   180,
     128,    16,  -114,   516,  -241,   128,   466,    73,   316,    65,
     488,   272,   273,   274,   275,   301,   394,   187,   395,   371,
      18,   455,   192,   496,   331,    94,   487,    11,   342,   192,
     351,   200,   505,  -114,   208,   313,  -241,   345,   517,   467,
     246,    11,   320,   217,   256,   289,   325,   255,   255,   255,
     255,    95,    73,   130,   111,   187,  -228,   134,   137,    18,
     209,    73,    73,    73,   292,   240,   293,   294,   106,   128,
     408,   143,   442,   106,  -134,   298,   432,    73,    69,    22,
    -134,    83,    82,   301,    27,    98,   111,    28,  -228,   213,
      94,   111,    83,   144,   145,    73,   409,    99,   192,  -314,
     214,  -314,    73,    23,   111,   314,   317,   388,    68,   111,
     -44,   -64,  -134,   295,   198,    69,    95,   297,   -64,    16,
     390,    69,  -213,   259,    83,   335,   -50,    75,   407,    88,
     146,   412,    23,   -64,   147,   -50,   -50,   -50,   -50,    83,
     344,    73,   429,    35,    36,    37,    38,    39,    40,    41,
     190,  -218,    98,   353,  -126,   327,   165,   328,   329,   330,
     366,  -174,  -226,   202,    99,  -172,   415,   416,   206,   178,
     417,    16,   419,   111,   166,   167,   168,   169,   179,   367,
     425,   445,   213,    72,   256,   256,   256,   256,   192,    78,
    -220,   448,   186,   214,    32,   453,   272,   273,   274,   275,
    -245,   130,    83,   413,    99,   368,  -183,    98,   133,  -153,
     130,   326,   384,   -47,   136,    69,   -47,   128,   -47,    99,
     -47,    69,   392,    73,    73,   239,   128,   411,    72,   414,
      63,   244,   287,   -47,   179,    68,   214,   140,   141,   142,
      16,   130,    69,    16,   469,   -47,   184,   473,   367,   428,
     346,    75,   360,   182,   178,   178,   460,   128,   387,    69,
     -47,   437,   493,   179,   179,  -285,  -287,   439,    73,   191,
     130,   195,    73,   178,    73,   383,   191,   131,   199,   515,
     499,   157,   179,   162,  -291,   447,   128,   221,   222,   223,
     224,   225,   226,   192,   130,   178,   454,   456,   336,   484,
     227,   463,   485,    91,   179,   465,  -289,   440,     0,   131,
     128,     0,     0,   130,   131,   475,    16,   242,     0,     0,
     130,   111,   479,   480,   367,     2,     3,   131,     4,   128,
     111,   486,   131,     0,    73,     0,   128,   130,     0,   178,
     253,   490,   130,     0,   219,   191,   220,    73,   179,     0,
    -217,   495,  -146,   128,  -153,  -153,   165,   392,   128,   504,
     -50,   111,   -50,   481,   -50,     9,   511,   507,   512,    10,
     -29,    11,     0,   513,   166,   167,   168,   169,     0,     0,
     381,   170,   520,    73,     0,     0,   261,   257,     0,   389,
     111,   272,   273,   274,   275,     0,   131,     0,     0,    72,
      72,   377,   378,   379,   380,     0,     0,     0,   508,     0,
       0,   302,     0,     9,   111,     0,     0,    10,   -29,    11,
     427,     0,     0,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,   111,   315,   191,     0,     0,     0,     0,
     111,    73,     0,     0,   354,   -29,     0,   -29,   361,   444,
     361,     0,     0,     0,   340,     0,     0,   111,     0,     0,
       0,     0,   111,     0,   343,     0,  -340,     0,     0,    73,
       0,     0,     0,   462,  -340,  -340,  -340,  -340,     0,   302,
     253,   253,   253,   253,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   476,     0,   102,     0,     0,     0,  -340,   483,
      11,    69,     0,     0,     0,   191,     0,     0,  -340,     0,
     393,     0,     0,     0,     0,  -340,   491,     0,    23,     0,
       0,   494,     0,    72,     0,     0,     0,   257,   257,   257,
     257,     0,    18,   103,     0,   104,   -85,   -85,     0,   105,
     191,   106,     0,     0,   131,   107,   108,     0,     0,   102,
       0,     0,   -85,   131,     0,    11,    69,   376,     0,   361,
       0,     0,     0,     0,    69,     0,    35,    36,    37,    38,
      39,    40,    41,    23,     0,     0,   426,     0,     0,   144,
     145,   261,   -85,     0,   131,   -85,     0,    18,   103,   -85,
     104,   -85,   -85,   -85,   105,   -85,   106,     0,   -85,   -85,
     107,   108,   471,     0,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,   361,     0,     0,
     147,    35,    36,    37,    38,    39,    40,    41,     0,    35,
      36,    37,    38,    39,    40,    41,     0,   131,     0,     0,
       0,     0,     0,   474,     0,   393,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,     0,   131,    -7,    17,     0,    -7,    -7,    -7,
      -7,    11,    -7,     0,     0,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,   131,     0,     0,     0,    -7,
       0,     0,     0,     0,     0,     0,   510,    -7,    -7,    -7,
      -7,    -7,   219,    18,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    31,    -7,    -7,    -7,    -7,    32,     0,
     102,    -7,     0,   -81,     0,     0,    11,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    23,    33,     0,    34,     0,     0,
       0,     0,     0,   -81,     0,     0,   -81,     0,    18,   103,
     -81,   104,   -81,   -81,   -81,   105,   -81,   106,     0,   -81,
     -81,   107,   108,     0,     0,   102,   -81,     0,   -82,     0,
       0,    11,    69,     0,     0,    35,    36,    37,    38,    39,
      40,    41,    35,    36,    37,    38,    39,    40,    41,    23,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,   -82,     0,    18,   103,   -82,   104,   -82,   -82,   -82,
     105,   -82,   106,     0,   -82,   -82,   107,   108,     0,     0,
     102,   -82,     0,     0,     0,     0,    11,    69,    68,     0,
       0,     0,     0,   -31,    11,    69,     0,    35,    36,    37,
      38,    39,    40,    41,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,   103,
     -31,   104,   -31,     0,     0,   105,     0,   106,     0,   -85,
     -85,   107,   108,     0,     0,   102,     0,     0,   -85,     0,
       0,    11,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,    23,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,    18,   103,     0,   104,   102,     0,     0,
     105,     0,   106,    11,    69,     0,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,    23,    11,    69,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,     0,    18,   103,   -85,   104,     0,
      23,     0,   105,     0,   106,     0,     0,     0,   107,   108,
       0,     0,     0,     0,    18,   103,     0,   104,   102,     0,
       0,   105,   -85,   106,    11,    69,     0,   107,   108,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,     0,    18,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,     0,     0,   107,
     108,     0,     0,   102,   -85,     0,     0,     0,     0,    11,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,    23,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,    18,   103,     0,   104,   102,     0,     0,   105,     0,
     106,    11,    69,     0,   107,   108,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,    11,    69,    23,
       0,     0,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,     0,    18,   103,    23,   104,     0,     0,     0,
     105,     0,   106,     0,     0,   -85,   107,   108,     0,    18,
     103,     0,   104,     0,   102,   -85,   105,     0,   106,     0,
      11,    69,   107,   108,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     0,    23,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
     -85,     0,    18,   103,     0,   104,   102,   213,     0,   105,
       0,   106,    11,    69,     0,   107,   108,     0,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,  -158,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,    18,   103,     0,   104,  -158,  -158,
    -158,   105,  -158,   106,     0,     0,     0,   107,   108,  -158,
       0,  -158,  -158,  -158,   221,   222,   223,   224,   225,   226,
       0,     0,     0,     0,  -158,  -158,  -158,   227,    35,    36,
      37,    38,    39,    40,    41,   160,     0,     0,     0,  -158,
       0,     0,    69,     0,  -311,    83,  -311,     0,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,     0,     0,   144,   145,    23,
     332,  -158,     0,     0,     0,  -158,     0,    69,     0,     0,
      83,     0,     0,     0,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,   -42,   144,   145,    23,     0,     0,     0,   -42,   333,
     334,   -42,     0,     0,   146,     0,     0,     0,   147,     0,
       0,     0,     0,   -42,   -42,   -42,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     0,   146,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,   143,
     -42,     0,     0,     0,   -42,     0,    69,     0,     0,    83,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     506,   144,   145,    23,     0,     0,     0,    69,   299,     0,
      83,     0,     0,     0,     0,    69,     0,     0,    83,     0,
       0,     0,   144,   145,    23,     0,   391,     0,     0,     0,
     144,   145,  -177,    69,     0,  -177,     0,     0,   146,   385,
       0,     0,   147,     0,   166,   167,    69,     0,     0,    83,
      23,    35,    36,    37,    38,    39,    40,    41,     0,   146,
       0,   144,   145,   147,  -177,     0,     0,   146,     0,     0,
       0,   147,    35,    36,    37,    38,    39,    40,    41,     0,
      35,    36,    37,    38,    39,    40,    41,   423,     0,     0,
       0,     0,     0,     0,    69,     0,     0,    83,   146,     0,
       0,     0,   147,     0,     0,     0,     0,     0,     0,   144,
     145,    35,    36,    37,    38,    39,    40,    41,   470,     0,
       0,     0,     0,     0,     0,    69,     0,     0,    83,     0,
       0,     0,  -336,     0,     0,  -336,     0,    68,     0,     0,
     144,   145,   -35,    11,    69,   252,   146,  -336,  -336,     0,
     147,     0,    69,     0,     0,     0,   214,     0,     0,    35,
      36,    37,    38,    39,    40,    41,     0,   144,   145,   -35,
    -158,   -35,     0,     0,     0,     0,     0,   146,     0,     0,
       0,   147,     0,     0,     0,  -158,  -158,     0,  -336,     0,
      35,    36,    37,    38,    39,    40,    41,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,     0,   341,     0,     0,   147,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   214,    35,    36,    37,
      38,    39,    40,    41,     0,     0,  -158,     0,     0,     0,
       0,     0,     0,     0,     0,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,   186,     0,     0,     0,     0,     0,   -47,     0,
       0,   -47,    83,   -47,    99,     0,   -47,   -47,   -47,   -47,
     263,     0,   221,   222,   223,   224,   225,   226,   -47,   264,
     265,   266,   267,   268,   269,   227,     0,     0,     0,     0,
     -47,     0,   -47,     0,     0,     0,     0,     0,     0,     0,
     -47,     0,     0,     0,     0,     0,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   236,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,  -308,     0,  -308,   221,   222,   223,
     224,   225,   226,    94,   264,   265,   266,   267,   268,   269,
     227,   237,  -315,     0,  -315,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,   222,   223,   224,   225,   226,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
     221,   222,   223,   224,   225,   226,     0,     0,     0,     0,
       0,     0,     0,   227
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-370))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    14,   210,     8,    11,    75,    13,    15,   123,     6,
      43,   357,    19,   357,   183,   315,   297,     6,    15,    16,
     389,     1,     1,     1,     1,    32,    15,    16,   100,     1,
       1,     1,     1,    30,     1,   139,   140,   187,   142,     1,
       1,    30,     1,     1,     1,     1,     1,     8,     8,     1,
       1,    64,     6,   157,     1,    14,    11,    28,    13,   163,
      67,     1,    23,     1,    77,   434,    45,    37,    15,    16,
      17,    18,    50,    51,    51,    55,    56,   192,    75,    84,
      77,    48,    54,   187,    89,    49,    75,    51,    57,    53,
      47,    55,    43,    57,    56,    59,   109,    61,    56,   435,
      56,   114,    54,   110,     1,   112,    44,   476,    48,    56,
      50,    51,     1,   120,   127,   323,   416,   114,     7,   132,
       1,   457,   491,     1,   131,   406,    23,     1,     1,    97,
     127,   128,    10,     1,     7,   132,     1,    30,   242,   128,
     476,    15,    16,    17,    18,   217,   492,   111,   492,   318,
      39,     1,   116,   489,   258,     1,     1,     7,   262,   123,
      41,   125,   498,    41,     1,   237,    39,   282,    36,    34,
     177,     7,   244,   141,   187,    49,   246,   327,   328,   329,
     330,    27,    75,   196,    77,   149,     7,    80,    81,    39,
      27,    84,    85,    86,   201,   163,   203,   204,    48,   196,
       1,     1,   410,    48,     1,   212,    51,   100,     8,     1,
       7,    11,     1,   285,     1,     1,   109,     4,    39,     1,
       1,   114,    11,    23,    24,   118,    27,    13,   192,    10,
      12,    12,   125,    25,   127,   240,   243,   352,     1,   132,
      10,     1,    39,   207,     1,     8,    27,   211,     8,   246,
     354,     8,    27,     9,    11,   260,     1,   246,   362,     1,
      60,   365,    25,    23,    64,    10,    11,    12,    13,    11,
     277,   164,   387,    73,    74,    75,    76,    77,    78,    79,
     114,    12,     1,   290,    56,   253,     1,   255,   256,   257,
     298,    44,    11,   127,    13,    43,   368,   369,   132,     1,
     370,   298,   374,   196,    19,    20,    21,    22,    10,   298,
     382,   415,     1,    30,   327,   328,   329,   330,   282,     1,
      10,    55,     1,    12,     6,   429,    15,    16,    17,    18,
       9,   344,    11,   366,    13,   303,    10,     1,     1,    51,
     353,   247,   349,     7,     1,     8,    10,   344,    12,    13,
      14,     8,   357,   246,   247,     1,   353,   364,    75,   367,
      15,   176,   196,    27,    10,     1,    12,    84,    85,    86,
     367,   384,     8,   370,   446,    39,   109,   449,   367,   386,
     285,   370,     1,   100,     1,     1,   435,   384,   352,     8,
      54,   398,   482,    10,    10,    12,    12,   404,   291,   116,
     413,   118,   295,     1,   297,   346,   123,    77,   125,   513,
     492,    87,    10,    89,    12,   422,   413,    58,    59,    60,
      61,    62,    63,   387,   437,     1,   433,   434,   260,   464,
      71,   438,   465,    59,    10,   443,    12,   405,    -1,   109,
     437,    -1,    -1,   456,   114,   452,   443,   164,    -1,    -1,
     463,   344,   459,   460,   443,     0,     1,   127,     3,   456,
     353,   468,   132,    -1,   357,    -1,   463,   480,    -1,     1,
     187,   478,   485,    -1,   150,   192,   152,   370,    10,    -1,
      12,   488,    48,   480,    50,    51,     1,   492,   485,   496,
       9,   384,    11,   461,    13,     1,   503,   502,   505,     5,
       6,     7,    -1,   508,    19,    20,    21,    22,    -1,    -1,
     344,    26,   519,   406,    -1,    -1,   192,   187,    -1,   353,
     413,    15,    16,    17,    18,    -1,   196,    -1,    -1,   246,
     247,   327,   328,   329,   330,    -1,    -1,    -1,   502,    -1,
      -1,   217,    -1,     1,   437,    -1,    -1,     5,     6,     7,
     384,    -1,    -1,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,    -1,   456,   240,   282,    -1,    -1,    -1,    -1,
     463,   464,    -1,    -1,   291,    33,    -1,    35,   295,   413,
     297,    -1,    -1,    -1,   260,    -1,    -1,   480,    -1,    -1,
      -1,    -1,   485,    -1,   270,    -1,     7,    -1,    -1,   492,
      -1,    -1,    -1,   437,    15,    16,    17,    18,    -1,   285,
     327,   328,   329,   330,    -1,    73,    74,    75,    76,    77,
      78,    79,   456,    -1,     1,    -1,    -1,    -1,    39,   463,
       7,     8,    -1,    -1,    -1,   352,    -1,    -1,    49,    -1,
     357,    -1,    -1,    -1,    -1,    56,   480,    -1,    25,    -1,
      -1,   485,    -1,   370,    -1,    -1,    -1,   327,   328,   329,
     330,    -1,    39,    40,    -1,    42,    43,    44,    -1,    46,
     387,    48,    -1,    -1,   344,    52,    53,    -1,    -1,     1,
      -1,    -1,     4,   353,    -1,     7,     8,     1,    -1,   406,
      -1,    -1,    -1,    -1,     8,    -1,    73,    74,    75,    76,
      77,    78,    79,    25,    -1,    -1,   382,    -1,    -1,    23,
      24,   387,    34,    -1,   384,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,   449,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,   464,    -1,    -1,
      64,    73,    74,    75,    76,    77,    78,    79,    -1,    73,
      74,    75,    76,    77,    78,    79,    -1,   437,    -1,    -1,
      -1,    -1,    -1,   449,    -1,   492,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,    -1,    -1,   463,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    33,    34,    35,
      36,    37,   508,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     1,    50,    51,    52,    53,     6,    -1,
       1,    57,    -1,     4,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    25,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    -1,    -1,     1,    57,    -1,     4,    -1,
      -1,     7,     8,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    73,    74,    75,    76,    77,    78,    79,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    -1,    -1,
       1,    57,    -1,    -1,    -1,    -1,     7,     8,     1,    -1,
      -1,    -1,    -1,     6,     7,     8,    -1,    73,    74,    75,
      76,    77,    78,    79,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      33,    42,    35,    -1,    -1,    46,    -1,    48,    -1,    50,
      51,    52,    53,    -1,    -1,     1,    -1,    -1,     4,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    25,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,     1,    -1,    -1,
      46,    -1,    48,     7,     8,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    25,     7,     8,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    -1,    39,    40,    41,    42,    -1,
      25,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,     1,    -1,
      -1,    46,    47,    48,     7,     8,    -1,    52,    53,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    39,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    -1,    -1,     1,    57,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    -1,    42,     1,    -1,    -1,    46,    -1,
      48,     7,     8,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    25,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    -1,    39,    40,    25,    42,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,    52,    53,    -1,    39,
      40,    -1,    42,    -1,     1,    45,    46,    -1,    48,    -1,
       7,     8,    52,    53,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      37,    -1,    39,    40,    -1,    42,     1,     1,    -1,    46,
      -1,    48,     7,     8,    -1,    52,    53,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,     8,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    -1,    39,    40,    -1,    42,    23,    24,
      25,    46,     1,    48,    -1,    -1,    -1,    52,    53,     8,
      -1,    10,    11,    12,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    23,    24,    25,    71,    73,    74,
      75,    76,    77,    78,    79,     1,    -1,    -1,    -1,    64,
      -1,    -1,     8,    -1,    10,    11,    12,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    23,    24,    25,
       1,    60,    -1,    -1,    -1,    64,    -1,     8,    -1,    -1,
      11,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,     1,    23,    24,    25,    -1,    -1,    -1,     8,    30,
      31,    11,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,     1,
      60,    -1,    -1,    -1,    64,    -1,     8,    -1,    -1,    11,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
       1,    23,    24,    25,    -1,    -1,    -1,     8,     1,    -1,
      11,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,
      -1,    -1,    23,    24,    25,    -1,     1,    -1,    -1,    -1,
      23,    24,     7,     8,    -1,    10,    -1,    -1,    60,     1,
      -1,    -1,    64,    -1,    19,    20,     8,    -1,    -1,    11,
      25,    73,    74,    75,    76,    77,    78,    79,    -1,    60,
      -1,    23,    24,    64,    39,    -1,    -1,    60,    -1,    -1,
      -1,    64,    73,    74,    75,    76,    77,    78,    79,    -1,
      73,    74,    75,    76,    77,    78,    79,     1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    60,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    73,    74,    75,    76,    77,    78,    79,     1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,
      -1,    -1,     8,    -1,    -1,    11,    -1,     1,    -1,    -1,
      23,    24,     6,     7,     8,     1,    60,    23,    24,    -1,
      64,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    -1,    23,    24,    33,
       8,    35,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    23,    24,    -1,    64,    -1,
      73,    74,    75,    76,    77,    78,    79,    73,    74,    75,
      76,    77,    78,    79,    -1,     1,    -1,    -1,    64,    73,
      74,    75,    76,    77,    78,    79,    12,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
       1,    -1,    58,    59,    60,    61,    62,    63,    27,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,     1,    65,    66,    67,    68,
      69,    70,    71,    -1,    10,    -1,    12,    58,    59,    60,
      61,    62,    63,     1,    65,    66,    67,    68,    69,    70,
      71,    27,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,     1,     3,    84,    85,    89,    86,     1,
       5,     7,    93,    96,    97,   203,   204,     1,    39,    82,
      83,   204,     1,    25,    90,    91,    83,     1,     4,    88,
      83,     1,     6,    33,    35,    73,    74,    75,    76,    77,
      78,    79,    92,   175,   177,   180,   196,   200,   224,   227,
     228,   229,   231,   232,   233,   234,   235,   239,   240,   241,
     242,   243,   244,    93,    97,   203,    83,    87,     1,     8,
      99,   103,   106,   107,   125,   203,    83,    94,     1,    92,
     181,   201,     1,    11,   159,   159,   159,   159,     1,   159,
     238,   238,   159,    83,     1,    27,    98,   104,     1,    13,
     114,    99,     1,    40,    42,    46,    48,    52,    53,    83,
      90,   107,   126,   127,   128,   131,   133,   135,   136,   146,
     147,   150,   151,   152,   156,   157,   163,   203,   204,   209,
     224,   225,    95,     1,   107,   189,     1,   107,   198,    90,
     106,   106,   106,     1,    23,    24,    60,    64,   106,   107,
     159,   176,   217,   219,   220,   221,   222,   223,   224,   225,
       1,    90,   223,   237,   245,     1,    19,    20,    21,    22,
      26,   108,   109,   110,   112,   113,   123,   124,     1,    10,
     102,     1,   106,   219,   128,    83,     1,   159,   210,    83,
     127,   106,   159,   223,   247,   106,    83,   247,     1,   106,
     159,   161,   127,   129,   130,    83,   127,   190,     1,    27,
     179,   199,   202,     1,    12,   160,   160,   102,   160,   223,
     223,    58,    59,    60,    61,    62,    63,    71,   160,   211,
     212,   213,   214,   215,   216,   218,     1,    27,   236,     1,
     102,   160,   106,   100,   114,   116,    83,   105,     1,    14,
     115,   115,     1,   106,   160,   222,   224,   225,   226,     9,
     205,   223,   247,     1,    65,    66,    67,    68,    69,    70,
     246,     1,    15,    16,    17,    18,    56,   132,   248,   249,
     250,   251,   252,     1,    54,   138,   144,   127,     1,    49,
     154,   162,    83,    83,    83,   159,   113,   159,    83,     1,
     140,   219,   223,   230,   160,   223,   223,   223,   223,   223,
     223,   223,     1,   219,    90,   223,   160,    83,   117,   118,
     219,     1,    54,   121,   122,    99,   103,   102,   102,   102,
     102,   160,     1,    30,    31,    90,   176,   206,   207,   208,
     223,     1,   160,   223,    83,   247,   140,     1,    56,   145,
       1,    41,   148,    83,   106,     1,    43,   164,   166,   168,
       1,   106,   192,   193,   182,   192,    97,   203,   102,    98,
     101,   115,     1,    28,   119,   113,     1,   226,   226,   226,
     226,   127,   139,   148,    83,     1,   149,   159,   247,   127,
     160,     1,    90,   106,   108,   109,   111,   170,   171,     1,
      44,   165,     1,    45,   158,   194,   102,   160,     1,    27,
     191,    83,   160,    92,    97,   219,   219,    99,   120,   219,
       1,    47,   134,     1,   141,   219,   223,   127,    83,   247,
       1,    50,    51,   153,   155,   156,   172,    83,   169,    83,
     102,   192,   113,   183,   127,   160,    98,    83,    55,   143,
       1,    57,   137,   160,    83,     1,    83,   156,     1,   153,
     155,   173,   127,    83,   195,    97,     1,    34,   197,   219,
       1,   106,   142,   219,   223,    83,   127,     1,   153,    83,
      83,   102,   167,   127,   193,    92,    83,     1,   153,   156,
      83,   127,   174,   166,   127,    83,   153,     1,   156,   171,
       1,    37,   186,   188,    83,   153,     1,    90,   159,   187,
     223,    83,    83,    90,   184,   160,     1,    36,   178,   185,
      83
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
#line 129 "src/directg.y"
    {fprintf(arquivo, "\n");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 131 "src/directg.y"
    {erros++;yyerror("Erro do fim de linha");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 140 "src/directg.y"
    {arquivo = fopen("../Saida.C","w+"); 
		     	strcpy(escopo,"global");
			fprintf(arquivo, "#include <stdio.h> \n#include <stdlib.h> \n#include <math.h> \n#include <string.h> \n#define false 0\n#define true 1  ");			

				}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 145 "src/directg.y"
    {erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 149 "src/directg.y"
    {fprintf(arquivo,"// "); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 149 "src/directg.y"
    {fprintf(arquivo,"\n"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 153 "src/directg.y"
    {fprintf(arquivo, "return 0; \n } ");}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 154 "src/directg.y"
    {erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 162 "src/directg.y"
    { (yyval)=strdup(yytext);
	fprintf(arquivo," %s ", (yyval));}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 168 "src/directg.y"
    {erros++;yyerror("Algoritmo sem nome");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 173 "src/directg.y"
    {erros++;yyerror("Faltando \" INICIO \" ");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 177 "src/directg.y"
    {fprintf(arquivo, "int main() {\n");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 178 "src/directg.y"
    {fprintf(arquivo, "int main() {\n");}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 185 "src/directg.y"
    {erros++;yyerror("Faltando \" VAR \" ");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 197 "src/directg.y"
    {erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 201 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo);
					id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
				//	fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,hashVariavel.variaveis[id].nome); }
									
					fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,param); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 206 "src/directg.y"
    {strcpy(param,"");}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 213 "src/directg.y"
    {erros++;yyerror("Faltando \",\" para divisao de variaveis");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 217 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 225 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 231 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 239 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 243 "src/directg.y"
    {(yyval)=strdup(yytext); strcpy(nome, (yyval)); variavel =(yyval);}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 245 "src/directg.y"
    {erros++;yyerror("Identificador invalido");}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 249 "src/directg.y"
    {strcpy(tipo,"int"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 253 "src/directg.y"
    {strcpy(tipo,"float"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 258 "src/directg.y"
    {strcpy(tipo,"char"); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 266 "src/directg.y"
    {erros++;yyerror("Esperado um numero");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 270 "src/directg.y"
    {strcpy(tipo,"short"); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 279 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 288 "src/directg.y"
    {erros++;yyerror("Esperado \"[\"");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 293 "src/directg.y"
    {erros++;yyerror("Esperado \"]\"");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 310 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 319 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 343 "src/directg.y"
    {fprintf(arquivo,"break;\n");}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 355 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 359 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 362 "src/directg.y"
    {erros++;yyerror("Erro no bloco logico");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 375 "src/directg.y"
    {fprintf(arquivo,"{ \n ");}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 376 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 380 "src/directg.y"
    {fprintf(arquivo, "While " );}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 384 "src/directg.y"
    {fprintf(arquivo,"\n  } ");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 385 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 391 "src/directg.y"
    {erros++; yyerror("Erro no bloco ENQUANTO");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 399 "src/directg.y"
    {fprintf(arquivo, "for");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 403 "src/directg.y"
    {fprintf(arquivo, "\n }");}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 404 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 408 "src/directg.y"
    {fprintf(arquivo, "; ");}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 409 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 419 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 425 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 432 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 442 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 447 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 456 "src/directg.y"
    {fprintf(arquivo, "do {");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 461 "src/directg.y"
    {fprintf(arquivo, "} while ");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 462 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 468 "src/directg.y"
    {erros++;yyerror("Erro na expressao do ATE");}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 475 "src/directg.y"
    {erros++;yyerror("Erro no bloco REPITA");}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 486 "src/directg.y"
    {fprintf(arquivo, " if ");}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 490 "src/directg.y"
    {fprintf(arquivo, " } ");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 491 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 495 "src/directg.y"
    {fprintf(arquivo, " {\n");}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 496 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 500 "src/directg.y"
    {fprintf(arquivo, " } else {  ");}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 501 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 513 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 518 "src/directg.y"
    {fprintf(arquivo, " switch ");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 522 "src/directg.y"
    {fprintf(arquivo, " } \n");}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 523 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 527 "src/directg.y"
    {/*fprintf(arquivo, "( ");*/}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 528 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {/*fprintf(arquivo, " ) ");*/}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 533 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 537 "src/directg.y"
    {fprintf(arquivo, " ( ");}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 537 "src/directg.y"
    {fprintf(arquivo, " )  { ");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 538 "src/directg.y"
    {erros++;yyerror("Necessario uma variavel para ESCOLHA");}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 545 "src/directg.y"
    {erros++;yyerror("Erro no Bloco de ESCOLHA");}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 549 "src/directg.y"
    {fprintf(arquivo, "\n case ");}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 550 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 554 "src/directg.y"
    {fprintf(arquivo, "\n default : ");}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 555 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 559 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 560 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 561 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 567 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 574 "src/directg.y"
    {erros++;yyerror("Variavel de escolha errada");}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 578 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 579 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 579 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 579 "src/directg.y"
    {fprintf(arquivo, " \n  case ");}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 599 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 604 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    { inserirfuncao(nomefuncao, tipo);   
	         id = hashfuncao_busca(nomefuncao, tipo, &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
	 }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 614 "src/directg.y"
    {fprintf(arquivo, "{ \n"); strcpy(param, "");   }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 615 "src/directg.y"
    {strcpy(escopo,"global");}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 615 "src/directg.y"
    {fprintf(arquivo, "} \n");}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 616 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 621 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 628 "src/directg.y"
    {erros++;yyerror("Parametro de retorno errado");}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 636 "src/directg.y"
    {strcpy (nomefuncao, nome);   }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 637 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 642 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 648 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 652 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
                 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 659 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
		 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
          
}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 665 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 674 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 678 "src/directg.y"
    {strcpy (nomefuncao, nome); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 679 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 683 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 683 "src/directg.y"
    { inserirfuncao(nomefuncao, "void");
                 id = hashfuncao_busca(nomefuncao, "void", &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
         }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 687 "src/directg.y"
    {erros++;yyerror("Erro no BlocoProcedimento");}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 700 "src/directg.y"
    {fprintf(arquivo, "=");}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 704 "src/directg.y"
    {fprintf(arquivo, "false");}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 709 "src/directg.y"
    {fprintf(arquivo, "true");}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 719 "src/directg.y"
    {erros++;yyerror("Valor atribuido de forma errada");}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 723 "src/directg.y"
    {(yyval)=strdup((yyvsp[(1) - (1)])); strcpy(nome,(yyval)); existeVariavel(nome); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 724 "src/directg.y"
    {erros++;yyerror("Esperado \"<-\"");}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 728 "src/directg.y"
    {fprintf(arquivo, " + ");}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 733 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 738 "src/directg.y"
    {fprintf(arquivo, " * ");}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 742 "src/directg.y"
    {fprintf(arquivo, " \\ ");}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 747 "src/directg.y"
    {fprintf(arquivo, " / ");}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 752 "src/directg.y"
    {fprintf(arquivo, " %% ");}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 756 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 760 "src/directg.y"
    {fprintf(arquivo, " pow  ");}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 766 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 811 "src/directg.y"
    {erros++;yyerror("Funcao inexistente");}
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 823 "src/directg.y"
    {erros++;yyerror("Erro de assinatura de funcao");}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 833 "src/directg.y"
    {erros++;yyerror("Erro na funcao Compr()");}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 846 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 855 "src/directg.y"
    {erros++;yyerror("Erro no funcao Maiusc");}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 864 "src/directg.y"
    {erros++;yyerror("Erro na funcao Raiz");}
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 869 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 879 "src/directg.y"
    {erros++;yyerror("Parametro improprio para funcao escreva");}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 884 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 888 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 896 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 901 "src/directg.y"
    {fprintf(arquivo, " printf(\"\\n\") ");}
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 902 "src/directg.y"
    {erros++;yyerror("Erro na funcao escreval");}
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 906 "src/directg.y"
    {fprintf(arquivo, " scanf ");}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 910 "src/directg.y"
    {fprintf(arquivo, " (");}
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 910 "src/directg.y"
    {fprintf(arquivo, " )");}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 911 "src/directg.y"
    {erros++;yyerror("Erro na funcao leia (Antigo paçoca)");}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 915 "src/directg.y"
    {fprintf(arquivo, " == ");}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 916 "src/directg.y"
    {fprintf(arquivo, " != ");}
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 917 "src/directg.y"
    {fprintf(arquivo, " < ");}
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 918 "src/directg.y"
    {fprintf(arquivo, " <= ");}
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 919 "src/directg.y"
    {fprintf(arquivo, " > ");}
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 920 "src/directg.y"
    {fprintf(arquivo, " >= ");}
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 921 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 933 "src/directg.y"
    {fprintf(arquivo, " && ");}
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 937 "src/directg.y"
    {fprintf(arquivo, " ||  ");}
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 941 "src/directg.y"
    {fprintf(arquivo, " ! ");}
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 945 "src/directg.y"
    {fprintf(arquivo, " ^ ");}
    break;



/* Line 1806 of yacc.c  */
#line 3541 "directg.tab.c"
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
#line 957 "src/directg.y"


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
extern int hashvariavel_existenaHash( char nome[], VetVariavel *hashVariavel );



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
	yyerrork;
	yyclearin;

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


