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
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "src/directg.y"


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha/PilhaDim.c"
#include "hash/hashDirectG.c"
#define YYSTYPE char*
int erros=0;
char escopo[30];
char variavel[30];
char tipo[30];
char* a;
 FILE *arquivo;

VetFuncao hashFuncao;
VetVariavel hashVariavel;


/* Line 268 of yacc.c  */
#line 92 "directg.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 213 "directg.tab.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   1932

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNRULES -- Number of states.  */
#define YYNSTATES  489

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
      21,    23,    27,    29,    31,    35,    37,    39,    41,    44,
      46,    50,    55,    58,    60,    62,    63,    67,    70,    73,
      75,    77,    78,    84,    90,    93,    95,    97,    99,   103,
     105,   107,   109,   111,   113,   115,   117,   119,   121,   123,
     125,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     147,   151,   153,   155,   157,   159,   161,   163,   166,   168,
     172,   177,   182,   184,   186,   188,   191,   194,   195,   198,
     201,   203,   205,   208,   211,   214,   217,   219,   221,   223,
     225,   227,   229,   231,   233,   235,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   284,   291,   293,   295,   297,
     306,   308,   310,   312,   314,   318,   320,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   355,   366,
     375,   387,   400,   410,   412,   414,   416,   418,   420,   422,
     424,   426,   428,   432,   434,   441,   443,   445,   447,   449,
     451,   456,   462,   464,   469,   470,   472,   474,   476,   478,
     480,   484,   486,   488,   490,   492,   494,   496,   498,   500,
     502,   504,   517,   519,   521,   523,   527,   529,   531,   533,
     536,   541,   543,   545,   547,   551,   555,   557,   559,   561,
     563,   568,   570,   579,   581,   583,   586,   589,   591,   593,
     595,   597,   599,   601,   603,   605,   607,   611,   613,   615,
     617,   619,   621,   623,   625,   627,   629,   631,   633,   635,
     637,   639,   641,   643,   645,   647,   651,   655,   659,   663,
     667,   671,   674,   678,   682,   684,   686,   688,   690,   692,
     694,   696,   698,   702,   707,   709,   711,   715,   717,   721,
     723,   727,   729,   733,   735,   737,   742,   747,   749,   751,
     753,   762,   764,   766,   771,   773,   775,   780,   782,   783,
     786,   788,   789,   791,   794,   800,   804,   812,   816,   818,
     822,   824,   826,   829,   831,   834,   836,   838,   843,   845,
     847,   849,   851,   853,   855,   857,   859,   863,   867,   871,
     873,   875,   877,   879,   881,   883,   885,   887
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    87,    83,    -1,    39,    -1,
     176,    -1,     1,    -1,    82,    -1,    82,    83,    -1,     3,
      -1,     1,    -1,    84,    89,    83,    -1,     4,    -1,     1,
      -1,    85,    91,    86,    -1,    25,    -1,    88,    -1,     1,
      -1,     6,    83,    -1,     1,    -1,    93,    90,   119,    -1,
      93,   159,    90,   119,    -1,   175,    91,    -1,     5,    -1,
       1,    -1,    -1,    92,    83,    95,    -1,    92,    83,    -1,
     175,    93,    -1,    27,    -1,     1,    -1,    -1,    97,    94,
     105,    83,    95,    -1,    97,    94,   116,    83,    95,    -1,
     175,    95,    -1,    10,    -1,     1,    -1,    98,    -1,    98,
      96,    97,    -1,    99,    -1,     8,    -1,   117,    -1,     1,
      -1,    19,    -1,    20,    -1,    21,    -1,   100,    -1,   101,
      -1,     1,    -1,    22,    -1,   100,    -1,   101,    -1,   102,
      -1,   104,    -1,     1,    -1,    13,    -1,     1,    -1,    14,
      -1,     1,    -1,   106,   109,   107,    -1,   110,   111,   112,
      -1,   190,    -1,    28,    -1,     1,    -1,   190,    -1,    54,
      -1,     1,    -1,   113,   105,    -1,    26,    -1,   115,   108,
     114,    -1,    99,   106,    98,   107,    -1,    99,   106,   190,
     107,    -1,    52,    -1,   120,    -1,   175,    -1,   175,   119,
      -1,   120,   119,    -1,    -1,    88,    83,    -1,   181,    83,
      -1,   121,    -1,   141,    -1,   118,    83,    -1,   195,    83,
      -1,   196,    83,    -1,    83,   120,    -1,     1,    -1,   136,
      -1,   125,    -1,   140,    -1,    56,    -1,     1,    -1,    46,
      -1,    47,    -1,     1,    -1,   123,   217,   122,    83,   119,
     124,    83,    -1,     1,    -1,    53,    -1,    57,    -1,     1,
      -1,    54,    -1,     1,    -1,   138,    -1,   194,    -1,   190,
      -1,     1,    -1,   194,    -1,   190,    -1,     1,    -1,    98,
      -1,   190,    -1,   194,    -1,     1,    -1,    55,    -1,   128,
     130,   129,   131,    -1,   128,   130,   129,   131,   133,   132,
      -1,     1,    -1,    56,    -1,     1,    -1,   126,    98,   134,
     135,    83,   119,   127,    83,    -1,    40,    -1,    41,    -1,
       1,    -1,   217,    -1,   149,   217,   150,    -1,     1,    -1,
     137,    83,   119,   138,   139,    83,    -1,     1,    -1,   146,
      -1,   152,    -1,    48,    -1,    51,    -1,     1,    -1,    49,
      -1,     1,    -1,    50,    -1,     1,    -1,   142,   217,   144,
      83,   119,   143,    83,    -1,   142,   217,   144,    83,   119,
     145,    83,   119,   143,    83,    -1,   142,   217,   144,    83,
     119,   146,   143,    83,    -1,   142,   217,   144,    83,   119,
     145,    83,   119,   146,   143,    83,    -1,   142,   217,   144,
      83,   119,   146,   145,    83,   119,   146,   143,    83,    -1,
     142,   217,   144,    83,   119,   145,   146,   143,    83,    -1,
       1,    -1,    42,    -1,    45,    -1,     1,    -1,    11,    -1,
       1,    -1,    12,    -1,     1,    -1,    98,    -1,   149,    98,
     150,    -1,     1,    -1,   147,   151,    83,   156,   148,    83,
      -1,     1,    -1,    43,    -1,     1,    -1,    44,    -1,     1,
      -1,   153,   158,    83,   119,    -1,   153,   158,    83,   119,
     155,    -1,     1,    -1,   155,   154,    83,   119,    -1,    -1,
      98,    -1,    88,    -1,   103,    -1,     1,    -1,   157,    -1,
     157,    96,   158,    -1,   164,    -1,   174,    -1,   195,    -1,
     196,    -1,   195,    -1,    35,    -1,    36,    -1,     1,    -1,
      27,    -1,     1,    -1,   161,   168,   163,   105,    83,    93,
      90,   119,   167,    83,   162,    83,    -1,     1,    -1,    37,
      -1,     1,    -1,   149,    88,   150,    -1,    88,    -1,   194,
      -1,     1,    -1,   165,   166,    -1,    99,   149,   170,   150,
      -1,     1,    -1,    27,    -1,     1,    -1,    97,   169,   105,
      -1,   170,    96,   170,    -1,     1,    -1,    33,    -1,    34,
      -1,     1,    -1,    99,   149,   170,   150,    -1,     1,    -1,
     171,   173,    83,    93,    90,   119,   172,    83,    -1,     1,
      -1,   176,    -1,   176,   175,    -1,     7,    83,    -1,     9,
      -1,    31,    -1,    30,    -1,    88,    -1,   194,    -1,   160,
      -1,   178,    -1,   179,    -1,     1,    -1,    99,   177,   180,
      -1,     1,    -1,    58,    -1,    60,    -1,    61,    -1,    59,
      -1,    71,    -1,    63,    -1,    60,    -1,    62,    -1,    23,
      -1,     1,    -1,    24,    -1,    64,    -1,   190,    -1,   191,
      -1,   192,    -1,   193,    -1,    98,    -1,   194,   182,   194,
      -1,   194,   183,   194,    -1,   194,   184,   194,    -1,   194,
     185,   194,    -1,   194,   186,   194,    -1,   194,   187,   194,
      -1,   188,   194,    -1,   194,   189,   194,    -1,   149,   194,
     150,    -1,   160,    -1,   199,    -1,   202,    -1,   204,    -1,
     206,    -1,   211,    -1,   213,    -1,   215,    -1,    99,   149,
     150,    -1,    99,   149,   197,   150,    -1,     1,    -1,    98,
      -1,    98,    96,   197,    -1,   193,    -1,   193,    96,   197,
      -1,   196,    -1,   196,    96,   197,    -1,   195,    -1,   195,
      96,   197,    -1,     1,    -1,    78,    -1,   198,   149,    98,
     150,    -1,   198,   149,    88,   150,    -1,     1,    -1,    77,
      -1,   130,    -1,   200,   149,    98,    96,   201,    96,   190,
     150,    -1,     1,    -1,    79,    -1,   203,   149,    98,   150,
      -1,     1,    -1,    76,    -1,   205,   149,   194,   150,    -1,
       1,    -1,    -1,    27,   190,    -1,     1,    -1,    -1,    88,
      -1,   194,   207,    -1,   208,    96,   194,    94,   190,    -1,
     208,    96,   194,    -1,   208,    96,   194,    94,   190,    94,
     190,    -1,   208,    96,    88,    -1,     1,    -1,   149,   208,
     150,    -1,     1,    -1,    74,    -1,   210,   209,    -1,    73,
      -1,   212,   209,    -1,     1,    -1,    75,    -1,   214,   149,
      98,   150,    -1,     1,    -1,    70,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,     1,    -1,   194,
     216,   194,    -1,   217,   222,   217,    -1,   149,   217,   150,
      -1,    98,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    67,    70,    71,    72,    76,    77,    81,
      82,    86,    90,    91,    95,    99,   103,   104,   108,   109,
     113,   114,   115,   120,   121,   124,   125,   126,   127,   132,
     133,   136,   137,   138,   139,   143,   144,   148,   149,   153,
     157,   158,   159,   163,   167,   171,   175,   176,   177,   181,
     185,   186,   187,   188,   189,   193,   194,   198,   199,   203,
     207,   211,   215,   216,   220,   224,   225,   229,   233,   237,
     241,   242,   249,   253,   254,   255,   256,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   274,   275,   276,
     281,   282,   286,   290,   291,   295,   296,   304,   308,   309,
     313,   314,   318,   322,   323,   324,   328,   329,   330,   334,
     335,   336,   337,   341,   345,   346,   347,   351,   352,   356,
     360,   364,   365,   369,   370,   371,   377,   378,   384,   385,
     389,   393,   394,   398,   399,   403,   404,   410,   411,   412,
     413,   414,   415,   416,   420,   424,   425,   429,   430,   434,
     435,   438,   439,   440,   446,   447,   451,   452,   456,   457,
     461,   462,   463,   469,   472,   473,   474,   475,   476,   480,
     481,   485,   486,   487,   491,   492,   496,   500,   501,   505,
     506,   510,   511,   515,   516,   520,   521,   522,   523,   527,
     531,   532,   536,   537,   541,   542,   543,   547,   551,   552,
     556,   557,   561,   562,   566,   567,   571,   575,   579,   583,
     587,   588,   589,   590,   591,   592,   596,   597,   601,   605,
     609,   613,   617,   621,   625,   629,   633,   634,   638,   642,
     646,   647,   648,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   667,   668,   669,   670,   671,
     672,   673,   677,   678,   679,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   695,   699,   700,   701,   705,   709,
     713,   714,   718,   722,   723,   727,   731,   732,   735,   736,
     737,   740,   741,   742,   743,   744,   745,   746,   747,   751,
     752,   756,   760,   764,   768,   769,   773,   777,   778,   782,
     783,   784,   785,   786,   787,   788,   792,   793,   794,   795,
     800,   804,   808,   812,   816,   817,   818,   819
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
  "CabecalhoAlgoritmo", "FimAlgoritmo", "BlocoAlgoritmo", "String",
  "NomeAlgoritmo", "InicioLogica", "BlocoCodigo", "InicioBlocoDeclaracao",
  "BlocoDeclaracao", "DefineTipo", "BlocoVariaveis", "Separador",
  "Variaveis", "Variavel", "Identificador", "TipoInteiro", "TipoReal",
  "TipoCaractere", "TipoNumerico", "TipoLogico", "Tipos", "AbreColchete",
  "FechaColchete", "ExprColcheteVetor", "ExprInternaColcheteVetor",
  "PosInicialVetor", "EntrePosVetor", "PosFinalVetor", "DefineTipoVetor",
  "TipoDoTipoVetor", "NomeVetor", "TipoVetor", "VariavelVetor",
  "Interromper", "BlocosLogicos", "BlocoLogico", "Lacos", "FacaEnquanto",
  "InicioEnquanto", "FimEnquanto", "BlocoEnquanto", "InicioPara",
  "FimPara", "AlcancePara", "AtePara", "InicioAlcancePara",
  "FimAlcancePara", "AlcancePasso", "PassoPara", "ExprCondicaoPara",
  "FacaPara", "BlocoPara", "InicioRepita", "RepitaAte", "ExprRepitaAte",
  "BlocoRepita", "Desvios", "InicioSe", "FimSe", "DesvioEntao",
  "DesvioSenao", "BlocosSe", "InicioEscolha", "FimEscolha",
  "AbreParenteses", "FechaParenteses", "ExprEscolha", "BlocosEscolha",
  "AbreCaso", "OutroCaso", "BlocosCaso", "BlocoCasos", "Selecao",
  "SelecaoCasos", "Funcoes", "FuncaoRetornavel", "IniciaFuncao",
  "FimFuncao", "DefinidorFuncao", "Funcao", "PalavraRetorno",
  "ExprRetorno", "Retorno", "NomeFuncao", "DefineVarAssinatura",
  "Assinatura", "InicioProcedimento", "FimProcedimento",
  "NomeProcedimento", "BlocoProcedimento", "Comentarios", "Comentario",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    83,    83,    84,
      84,    85,    86,    86,    87,    88,    89,    89,    90,    90,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    98,
      99,    99,    99,   100,   101,   102,   103,   103,   103,   104,
     105,   105,   105,   105,   105,   106,   106,   107,   107,   108,
     109,   110,   111,   111,   112,   113,   113,   114,   115,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   121,   121,   121,
     122,   122,   123,   124,   124,   125,   125,   126,   127,   127,
     128,   128,   129,   130,   130,   130,   131,   131,   131,   132,
     132,   132,   132,   133,   134,   134,   134,   135,   135,   136,
     137,   138,   138,   139,   139,   139,   140,   140,   141,   141,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   156,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   159,   160,   160,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   166,   166,   167,
     168,   168,   169,   169,   170,   170,   170,   171,   172,   172,
     173,   173,   174,   174,   175,   175,   176,   177,   178,   179,
     180,   180,   180,   180,   180,   180,   181,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   190,   191,   192,
     193,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   198,   199,   199,   199,   200,   201,
     202,   202,   203,   204,   204,   205,   206,   206,   207,   207,
     207,   208,   208,   208,   208,   208,   208,   208,   208,   209,
     209,   210,   211,   212,   213,   213,   214,   215,   215,   216,
     216,   216,   216,   216,   216,   216,   217,   217,   217,   217,
     218,   219,   220,   221,   222,   222,   222,   222
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     2,     1,
       3,     4,     2,     1,     1,     0,     3,     2,     2,     1,
       1,     0,     5,     5,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       4,     4,     1,     1,     1,     2,     2,     0,     2,     2,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     1,     1,     1,     8,
       1,     1,     1,     1,     3,     1,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,    10,     8,
      11,    12,     9,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     6,     1,     1,     1,     1,     1,
       4,     5,     1,     4,     0,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,    12,     1,     1,     1,     3,     1,     1,     1,     2,
       4,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       4,     1,     8,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     4,     4,     1,     1,     1,
       8,     1,     1,     4,     1,     1,     4,     1,     0,     2,
       1,     0,     1,     2,     5,     3,     7,     3,     1,     3,
       1,     1,     2,     1,     2,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,     0,     0,     0,    17,    15,
      16,     0,    24,    23,     0,     0,     0,     0,     0,   204,
       6,     4,     0,     3,     5,    11,   206,    13,    12,    14,
       0,    19,     0,   197,   176,   293,   291,   296,   275,   268,
     264,   272,     0,     0,     0,   171,     0,   172,   173,     0,
     245,     0,   246,     0,   247,     0,   248,     0,   249,     0,
     250,     0,   251,    22,     0,   205,     8,    42,    40,    26,
       0,     0,     0,    41,     0,    18,     6,   120,   144,    92,
     130,    72,    97,     0,     0,     0,     0,    20,     0,    80,
       0,    88,     0,    87,     0,    89,    81,     0,   128,     0,
     129,     0,     5,     0,     0,     0,    19,     0,    42,     0,
       0,    42,     0,     0,   148,   147,     0,     0,     0,     0,
     290,     0,   292,   294,     0,    30,    29,     0,    36,    35,
       0,    56,    55,     0,    34,    85,    78,   148,   207,     0,
       0,    82,    76,    42,   226,   228,   224,   229,   234,     0,
       0,   244,     0,   230,   231,   232,   233,     0,   175,   174,
       0,     0,     0,     0,    42,   151,     0,     0,    75,    79,
      83,    84,    21,     0,   180,   179,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,    42,   282,     0,     0,
       0,    54,    43,    44,    45,    49,    68,    50,    51,    52,
      53,     0,     0,     0,    38,    42,     0,     0,   150,   149,
       0,   252,     0,     0,     0,     0,    42,   209,   208,   210,
     244,   213,   214,   216,   211,     0,     0,   241,   305,   218,
     221,   219,   220,   225,   223,   300,   301,   302,   303,   304,
     299,   222,     0,     0,     0,     0,     0,     0,     0,     0,
      91,   310,   311,   312,   313,    90,     0,   314,   315,   316,
     317,     0,   101,   100,     0,     0,     0,   134,   133,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,   150,
     266,   265,     0,   273,     0,   276,   280,     0,   283,   150,
       0,   289,   297,     0,     0,     0,     0,    58,    57,    70,
      71,     0,     0,     0,     0,   253,   150,   243,   308,   235,
     236,   237,   238,   239,   240,   242,   306,     0,   307,    42,
       0,   230,   103,   118,   117,     0,   122,   121,     0,     0,
     152,   157,   156,     0,     0,     0,   193,   192,     0,     0,
     190,     0,   200,     0,    28,   269,     0,   227,   279,   287,
       0,    32,     0,     0,    61,    66,    65,     0,    69,    33,
      42,   256,   258,   262,   260,     0,     0,   102,     0,    42,
       0,     0,   123,     0,    42,   166,   165,    46,    47,   167,
       0,     0,   159,   158,     0,   146,   145,     0,   194,     0,
       0,     0,     0,     0,    59,    63,    62,     0,    67,    94,
      93,     0,    42,   114,   230,   106,     0,   126,     0,   132,
     135,   131,     0,     0,     0,     0,     0,     0,   154,     0,
     199,   198,     0,     0,     0,    60,    64,    95,   113,     0,
      99,    98,     0,   308,   137,     6,     0,     0,   132,     0,
       0,   170,     0,   163,     0,   202,   270,     0,    42,   234,
     115,   230,   111,   119,     0,   132,     0,   139,     0,   161,
     184,   183,     0,     0,   286,   132,     0,     0,   142,     0,
      42,   186,     0,   189,   187,     0,   138,     0,   143,     0,
       0,   178,   177,     0,   140,     0,   185,   181,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    22,    83,     5,     6,    29,     7,    84,    11,
      42,    15,    16,    17,   127,    69,   339,    70,   183,   149,
     197,   198,   199,   379,   200,   201,   133,   299,   295,   352,
     353,   397,   425,   357,   358,   202,   203,    73,    86,    87,
      88,    89,   256,    90,   401,    91,    92,   432,   264,   366,
     320,   403,   450,   429,   265,   325,    93,    94,   328,   370,
      95,    96,    97,   412,   269,   413,    98,    99,   387,   184,
     307,   167,   100,   333,   384,   334,   335,   380,   381,    43,
     151,    44,   483,   176,    45,   462,   473,   463,   110,   338,
     274,    46,   422,   113,    47,   101,    24,   140,   221,   222,
     223,   103,   242,   243,   244,   245,   246,   247,   152,   248,
     153,   154,   155,   156,   157,   158,   159,   215,    49,    50,
      51,   346,    52,    53,    54,    55,    56,   288,   189,   122,
      57,    58,    59,    60,    61,    62,   249,   160,   257,   258,
     259,   260,   261
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -350
static const yytype_int16 yypact[] =
{
    -350,   333,  -350,  -350,  -350,   127,    56,   217,  -350,  -350,
    -350,   217,  -350,  -350,   217,   280,   217,   605,    56,    43,
    -350,  -350,   719,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
     549,    61,   217,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  1056,   350,    34,  -350,   347,  -350,  -350,   230,
    -350,   230,  -350,   230,  -350,   230,  -350,   411,  -350,   411,
    -350,   230,  -350,  -350,   605,  -350,  -350,  -350,  -350,  -350,
      38,   144,   389,  -350,   655,  -350,   628,  -350,  -350,  -350,
    -350,  -350,  -350,   778,   217,   426,   217,  -350,   836,  -350,
    1531,  -350,   409,  -350,   217,  -350,  -350,  1531,  -350,   387,
    -350,   891,    43,   217,   217,   217,  -350,  1056,    14,   331,
     188,   205,   331,   217,  -350,  -350,   281,   409,   409,  1531,
    1415,  1423,  -350,  -350,   409,  -350,  -350,   462,  -350,  -350,
     409,  -350,  -350,   286,  -350,  -350,  -350,   384,  -350,   571,
    1443,  -350,  -350,   247,  -350,  -350,  -350,  -350,  1104,  1752,
    1531,  -350,  1531,  -350,  -350,  -350,  -350,  1784,  -350,  -350,
      30,    21,  1098,   351,    41,  -350,   409,   217,  -350,  -350,
    -350,  -350,  -350,   423,  -350,  -350,   650,   423,   534,   315,
     315,   215,   315,  -350,  1531,    22,   247,  -350,  1847,   361,
     315,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,   217,   291,   217,  -350,  -350,   226,   226,   564,  -350,
     377,  -350,   461,   536,   558,   315,   247,  -350,  -350,  -350,
     236,  -350,  -350,  -350,   633,  1770,   429,   633,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  1531,  1531,  1531,  1531,  1531,  1531,  1531,  1531,
    -350,  -350,  -350,  -350,  -350,  -350,   217,  -350,  -350,  -350,
    -350,  1531,    71,  -350,  1551,    51,   145,  -350,  -350,   217,
     315,   139,   130,   212,   361,   217,   361,   350,   534,  -350,
    -350,  -350,  1551,  -350,    22,  -350,  -350,   210,  -350,   992,
    1503,  -350,  -350,   655,   210,    59,   655,  -350,  -350,  -350,
    -350,   899,   899,   899,   899,  -350,  1656,  -350,  -350,   633,
     633,   633,   633,   633,   633,   633,   633,  1117,   649,   247,
     145,    28,   633,  -350,  -350,   217,  -350,  -350,  1611,   946,
    -350,   104,  -350,   524,   125,    27,  -350,  -350,   650,   423,
    -350,   534,  -350,  1177,  -350,  -350,   215,  -350,  -350,  -350,
    1861,  -350,   226,    42,  -350,  -350,  -350,   650,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,    26,  1631,  -350,  1219,   247,
     217,  1531,   649,   155,  -350,  -350,  -350,  -350,  -350,  -350,
     183,   217,  -350,  -350,   217,  -350,  -350,   217,  -350,   580,
     350,   124,   210,   210,  -350,  -350,  -350,   210,  -350,  -350,
    -350,   217,   247,    95,    39,   633,    35,  -350,   429,   464,
    -350,  -350,   217,   137,    65,   524,  1001,  1235,  -350,  1278,
    -350,  -350,   217,   315,   278,  -350,  -350,  -350,  -350,  1639,
    -350,  -350,   217,   296,  -350,  -350,  1320,    50,  -350,   217,
     217,  -350,   165,  -350,   140,  -350,  -350,   210,   247,    54,
    -350,    58,   633,  -350,    70,  -350,   217,  -350,  1336,  -350,
    -350,  -350,  1523,   217,  -350,   166,   217,    50,  -350,   122,
    1673,  -350,  1503,  -350,   633,    32,  -350,   217,  -350,    50,
     315,  -350,  -350,   217,  -350,   217,  -350,  -350,  -350
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,  -350,    -7,  -350,  -350,  -350,  -350,    -4,  -350,
     -41,   227,  -350,   -13,  -336,   -61,    40,  -119,   412,   184,
    -316,  -307,  -350,  -350,  -350,  -166,   -29,  -191,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,   150,
     163,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
     -23,  -350,  -350,  -350,  -350,  -350,  -350,  -350,   -60,  -350,
    -350,  -350,  -350,  -275,  -350,  -153,  -349,  -350,  -350,    98,
      84,  -350,  -350,  -350,  -350,  -135,  -350,  -350,  -100,  -350,
     173,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -165,  -350,  -350,  -350,  -350,     0,     2,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
     239,  -350,  -350,  -102,   370,    36,    80,   373,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,   271,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,   -94,  -350,  -350,
    -350,  -350,  -350
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -310
static const yytype_int16 yytable[] =
{
      23,    10,   107,   163,    25,    64,    18,    26,    19,    30,
     275,   204,   276,   134,   393,    66,   300,   377,    18,    65,
      19,    19,   262,   279,   414,    75,   378,   399,   385,  -104,
      74,   250,    19,   481,   209,   108,   430,   212,  -104,   125,
    -107,  -191,    68,   395,   102,   251,   252,   253,   254,  -148,
      14,   455,   323,    48,   273,  -109,   226,    12,   273,  -110,
     355,    13,   -25,    14,   437,   126,   438,  -182,   482,  -104,
     396,   465,   386,   400,    74,   263,    19,   136,   104,   141,
     229,   230,   231,   232,   233,   234,   255,   162,   447,   -25,
     102,   -25,   431,   241,  -107,  -107,   169,   170,   171,   377,
      48,   411,    65,   102,    19,   467,   178,   324,   378,   102,
    -109,   130,   179,   356,  -110,   410,   411,   187,    80,   104,
     479,   411,   105,   478,   104,   420,   382,  -116,     8,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   219,   104,   435,   439,
     331,   460,  -196,   104,    14,   128,   326,   116,  -162,   117,
     428,   118,     9,   119,   129,   121,   409,   121,   421,   124,
     271,   394,   456,   105,   102,   277,   331,   318,   105,   383,
      80,   -37,   388,   294,   389,   213,    21,   461,   278,   466,
      19,   105,   332,   139,   128,    80,   327,   105,   150,   174,
    -169,   398,   477,   129,   293,   150,   296,   166,   104,   212,
     212,   212,   212,    80,   485,   410,   411,   173,   332,  -160,
     177,   347,  -201,   336,    72,   175,   128,  -143,    20,   214,
     273,   282,  -169,   211,    14,   129,    85,   297,   109,   290,
     112,   114,   351,   144,   372,   359,   343,  -212,   142,   337,
     298,   115,   105,  -212,  -201,    63,   135,   139,   150,   317,
     301,   168,   302,   303,   304,  -148,    21,   172,    72,   345,
     367,   440,   329,   280,   281,   344,   283,    85,   341,   285,
    -148,  -148,    85,   291,   292,  -212,    72,   408,   278,   125,
      19,    27,    67,    72,    28,    85,   349,   205,  -284,    68,
    -284,    85,   131,    74,    68,    19,    74,  -124,    19,   305,
      72,    72,    72,  -124,   132,   126,     9,   459,    72,   144,
     308,  -148,   266,   220,    72,   441,   279,    72,   368,   102,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   209,   390,   375,
     123,   102,   137,     2,     3,  -124,     4,   213,   213,   213,
     213,   278,   115,    19,   132,   102,    85,     0,   111,   419,
      72,   106,   267,   104,   330,    68,    32,    72,   340,   150,
     342,    72,   289,   407,     0,   104,   251,   252,   253,   254,
     102,   129,   207,   209,   416,     0,     0,   417,   128,   104,
     418,   214,   214,   214,   214,   -56,   392,   129,   164,  -255,
     131,     0,   -56,     0,   427,    68,   -39,   105,   115,   -39,
     268,   -39,   132,   -39,   104,   434,   436,   -56,     0,   105,
      67,   375,   120,     0,     0,   445,   -39,    68,   102,   102,
     415,   102,   115,   105,   272,   453,   371,   137,   -39,     0,
     279,    68,   457,   458,     0,   138,     0,   115,   102,   132,
       0,   209,    71,   -39,   251,   252,   253,   254,   105,   468,
       0,     0,   104,   104,     0,   104,   475,     0,   471,   476,
     102,     0,   128,   191,     0,     0,     0,   365,   480,   150,
     484,   129,   104,  -257,     0,     0,   487,    72,   488,   373,
      72,   192,   193,   194,   195,     0,    71,     0,   196,   185,
       0,   188,   433,   391,   104,     0,   105,   105,     0,   105,
       0,    85,   148,   321,   161,     0,     0,   446,     0,   148,
     224,   165,  -136,    85,  -143,  -143,   105,    72,   406,     0,
     225,   321,   227,    72,     0,   374,   348,    85,   180,   181,
     182,  -164,    68,   354,  -164,    12,   190,   128,   105,    13,
     -25,    14,    71,   192,   193,   206,   129,     0,  -261,     9,
      67,   210,    85,     0,   284,   -27,    14,    68,     0,   128,
     472,     0,   148,  -164,   486,   -42,   442,   443,   129,   444,
    -259,     0,   208,     0,   -42,   -42,   -42,   -42,   270,    68,
       0,   128,   -27,   209,   -27,    71,   454,     0,     0,    71,
     129,     0,  -195,     0,   144,   145,     0,     0,     0,    72,
      85,    85,     0,    85,     0,   404,    31,     0,   469,     0,
       0,    32,   309,   310,   311,   312,   313,   314,   315,   316,
      85,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   423,   424,     0,   322,   147,   426,   -42,    33,   -42,
      34,   -42,    85,     0,    35,    36,    37,    38,    39,    40,
      41,   191,   322,     0,     0,     0,    67,     0,     0,     0,
     350,   -31,    14,    68,   251,   252,   253,   254,   451,   192,
     193,   194,   195,   148,   361,   362,   363,   364,    35,    36,
      37,    38,    39,    40,    41,     0,   464,     0,   -31,     0,
     -31,   229,   230,   231,   232,   233,   234,     0,     0,     0,
       0,     0,     0,     0,   241,    71,     0,     0,    71,     0,
       0,     0,     0,   210,   210,   210,   210,     0,     0,    -7,
      20,     0,    -7,    -7,    -7,    -7,    14,    -7,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   405,     0,     0,     0,
     148,   225,     0,     0,    -7,   376,     0,     0,     0,     0,
       0,    71,    -7,    -7,    -7,    -7,    -7,     0,    21,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,     0,     0,     0,    -7,     0,     0,    76,
       0,     0,   -77,   148,     0,    14,    68,     0,     0,     0,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   452,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,     0,   -77,     0,    21,    77,   -77,
      78,   -77,   -77,   -77,    79,   -77,    80,   376,   -77,   -77,
      81,    82,   474,     0,     0,   -77,     0,    76,     0,     0,
     -73,   449,   284,    14,    68,     0,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,   -73,     0,    21,    77,   -73,    78,   -73,
     -73,   -73,    79,   -73,    80,     0,   -73,   -73,    81,    82,
       0,     0,    76,   -73,     0,   -74,     0,     0,    14,    68,
     360,     0,     0,     0,     0,     0,     0,    68,     0,    35,
      36,    37,    38,    39,    40,    41,     9,     0,     0,     0,
       0,     0,   144,   145,     0,   -74,     0,     0,   -74,     0,
      21,    77,   -74,    78,   -74,   -74,   -74,    79,   -74,    80,
       0,   -74,   -74,    81,    82,     0,     0,    76,   -74,     0,
       0,     0,     0,    14,    68,     0,     0,     0,     0,     0,
       0,     0,     0,   147,    35,    36,    37,    38,    39,    40,
      41,     9,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,     0,    21,    77,     0,    78,     0,
       0,     0,    79,   -36,    80,     0,   -77,   -77,    81,    82,
     -36,     0,    76,   -36,     0,     0,     0,     0,    14,    68,
       0,     0,     0,     0,     0,   -36,   -36,   -36,     0,    35,
      36,    37,    38,    39,    40,    41,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    77,     0,    78,   -77,   -77,     0,    79,     0,    80,
       0,     0,   -36,    81,    82,     0,   -36,    76,     0,     0,
     -77,     0,     0,    14,    68,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,    35,    36,    37,    38,    39,    40,
      41,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    77,     0,    78,    76,
       0,     0,    79,     0,    80,    14,    68,     0,    81,    82,
       0,  -309,     0,     0,     0,     0,     0,     0,    76,  -309,
    -309,  -309,  -309,     9,    14,    68,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,     0,    21,    77,   -77,
      78,     0,     9,  -309,    79,     0,    80,     0,     0,     0,
      81,    82,     0,  -309,     0,     0,    21,    77,     0,    78,
    -309,     0,     0,    79,   -77,    80,     0,     0,     0,    81,
      82,    35,    36,    37,    38,    39,    40,    41,    76,     0,
       0,     0,     0,     0,    14,    68,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,    21,    77,     0,    78,
      76,     0,     0,    79,     0,    80,    14,    68,     0,    81,
      82,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,    14,    68,     9,     0,     0,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,     0,    21,    77,
       9,    78,     0,     0,     0,    79,     0,    80,     0,     0,
       0,    81,    82,     0,    21,    77,   -77,    78,     0,    76,
     -77,    79,     0,    80,     0,    14,    68,    81,    82,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     9,     0,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,   -77,     0,    21,    77,     0,
      78,    76,     0,     0,    79,     0,    80,    14,    68,     0,
      81,    82,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,    14,    68,     9,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    21,
      77,     9,    78,     0,     0,     0,    79,     0,    80,     0,
       0,   -77,    81,    82,     0,    21,    77,     0,    78,     0,
       0,     0,    79,     0,    80,     0,     0,     0,    81,    82,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,  -148,     0,     0,     0,
       0,     0,     0,  -148,   186,  -148,  -148,  -148,     0,     0,
       0,    68,     0,  -281,   115,  -281,     0,     0,  -148,  -148,
    -148,     0,     0,     0,   216,     0,   144,   145,     9,     0,
       0,    68,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     9,     0,
       0,     0,     0,   217,   218,  -148,     0,     0,     0,  -148,
       0,     0,     0,   146,     0,     0,     0,   147,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,     0,    35,    36,    37,    38,
      39,    40,    41,   146,   143,     0,     0,   147,     0,     0,
       0,    68,     0,     0,   115,     0,    35,    36,    37,    38,
      39,    40,    41,     0,   470,     0,   144,   145,     9,     0,
       0,    68,   143,     0,   115,     0,     0,     0,     0,    68,
       0,     0,   115,     0,     0,     0,   144,   145,     9,     0,
       0,     0,   319,     0,   144,   145,     0,     0,     0,    68,
       0,     0,   115,   146,     0,     0,     0,   147,     0,     0,
       0,     0,     0,     0,   144,   145,    35,    36,    37,    38,
      39,    40,    41,   146,     0,     0,     0,   147,     0,     0,
       0,   146,     0,     0,     0,   147,    35,    36,    37,    38,
      39,    40,    41,     0,    35,    36,    37,    38,    39,    40,
      41,   146,   369,     0,     0,   147,     0,     0,     0,    68,
       0,     0,   115,     0,    35,    36,    37,    38,    39,    40,
      41,     0,   402,     0,   144,   145,     0,     0,     0,    68,
     448,     0,   115,     0,     0,     0,     0,    68,     0,     0,
     115,     0,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,   144,   145,  -305,     0,     0,  -305,     0,     0,
       0,   146,     0,     0,     0,   147,     0,     0,     0,  -305,
    -305,  -148,     0,     0,    35,    36,    37,    38,    39,    40,
      41,   146,     0,     0,     0,   147,  -148,  -148,  -148,   146,
       0,     0,     0,   147,    35,    36,    37,    38,    39,    40,
      41,     0,    35,    36,    37,    38,    39,    40,    41,     0,
    -305,     0,     0,     0,     0,     0,     0,     0,     0,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,     0,  -148,     0,     0,
       0,     0,     0,     0,     0,     0,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,   137,     0,     0,     0,     0,     0,   -39,
       0,     0,   -39,   115,   -39,   132,     0,   -39,   -39,   -39,
     -39,   306,     0,     0,     0,     0,     0,     0,     0,   -39,
       0,     0,   209,     0,     0,   228,     0,     0,     0,     0,
       0,   -39,     0,   -39,     0,     0,     0,     0,     0,     0,
       0,   -39,     0,     0,     0,     0,     0,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   229,   230,
     231,   232,   233,   234,     0,   235,   236,   237,   238,   239,
     240,   241,   229,   230,   231,   232,   233,   234,   286,   235,
     236,   237,   238,   239,   240,   241,     0,  -278,     0,  -278,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,  -285,     0,  -285,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,   230,   231,   232,   233,
     234,     0,     0,     0,     0,     0,     0,     0,   241,   229,
     230,   231,   232,   233,   234,     0,     0,     0,     0,     0,
       0,     0,   241
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-350))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,     5,    43,    97,    11,    18,     6,    14,     6,    16,
     176,   130,   177,    74,   350,    22,   207,   333,    18,    19,
      18,    19,     1,     1,   373,    32,   333,     1,     1,     1,
      30,     1,    30,     1,    12,     1,     1,   139,    10,     1,
       1,    27,     8,     1,    42,    15,    16,    17,    18,     8,
       7,     1,     1,    17,   173,     1,   150,     1,   177,     1,
       1,     5,     6,     7,   413,    27,     1,     6,    36,    41,
      28,     1,    45,    47,    74,    54,    74,    84,    42,    86,
      58,    59,    60,    61,    62,    63,    56,    94,   424,    33,
      88,    35,    57,    71,    55,    56,   103,   104,   105,   415,
      64,    51,   102,   101,   102,   454,   113,    56,   415,   107,
      56,    71,   116,    54,    56,    50,    51,   121,    48,    83,
     469,    51,    42,     1,    88,     1,     1,    56,     1,    73,
      74,    75,    76,    77,    78,    79,   140,   101,     1,   414,
       1,     1,    12,   107,     7,     1,     1,    49,    44,    51,
      55,    53,    25,    55,    10,    57,     1,    59,    34,    61,
     167,   352,   437,    83,   162,   178,     1,   261,    88,    44,
      48,    27,   338,   202,   339,   139,    39,    37,   178,   454,
     178,   101,    43,    85,     1,    48,    41,   107,    90,     1,
       7,   357,   467,    10,   201,    97,   203,    99,   162,   301,
     302,   303,   304,    48,   479,    50,    51,   109,    43,    44,
     112,     1,     7,     1,    30,    27,     1,    51,     1,   139,
     339,   181,    39,   139,     7,    10,    42,     1,    44,   189,
      46,     1,   293,    23,   328,   296,   277,     1,    88,    27,
      14,    11,   162,     7,    39,    18,    83,   149,   150,   256,
     210,   101,   212,   213,   214,     8,    39,   107,    74,   282,
     320,   414,   269,   179,   180,   278,   182,    83,   275,   185,
      23,    24,    88,   189,   190,    39,    92,   371,   278,     1,
     278,     1,     1,    99,     4,   101,   290,     1,    10,     8,
      12,   107,     1,   293,     8,   293,   296,     1,   296,   215,
     116,   117,   118,     7,    13,    27,    25,   442,   124,    23,
     226,    64,   162,   140,   130,   415,     1,   133,   325,   317,
      73,    74,    75,    76,    77,    78,    79,    12,   341,   333,
      59,   329,     1,     0,     1,    39,     3,   301,   302,   303,
     304,   341,    11,   341,    13,   343,   162,    -1,     1,   390,
     166,     1,     1,   317,   270,     8,     6,   173,   274,   261,
     276,   177,     1,   370,    -1,   329,    15,    16,    17,    18,
     368,    10,   133,    12,   381,    -1,    -1,   384,     1,   343,
     387,   301,   302,   303,   304,     1,   346,    10,     1,    12,
       1,    -1,     8,    -1,   401,     8,     7,   317,    11,    10,
      49,    12,    13,    14,   368,   412,   413,    23,    -1,   329,
       1,   415,     1,    -1,    -1,   422,    27,     8,   416,   417,
     380,   419,    11,   343,     1,   432,   328,     1,    39,    -1,
       1,     8,   439,   440,    -1,     9,    -1,    11,   436,    13,
      -1,    12,    30,    54,    15,    16,    17,    18,   368,   456,
      -1,    -1,   416,   417,    -1,   419,   463,    -1,   462,   466,
     458,    -1,     1,     1,    -1,    -1,    -1,   317,   472,   371,
     477,    10,   436,    12,    -1,    -1,   483,   293,   485,   329,
     296,    19,    20,    21,    22,    -1,    74,    -1,    26,   119,
      -1,   121,   408,   343,   458,    -1,   416,   417,    -1,   419,
      -1,   317,    90,   264,    92,    -1,    -1,   423,    -1,    97,
     140,    99,    48,   329,    50,    51,   436,   333,   368,    -1,
     150,   282,   152,   339,    -1,     1,   287,   343,   116,   117,
     118,     7,     8,   294,    10,     1,   124,     1,   458,     5,
       6,     7,   130,    19,    20,   133,    10,    -1,    12,    25,
       1,   139,   368,    -1,   184,     6,     7,     8,    -1,     1,
     462,    -1,   150,    39,   480,     1,   416,   417,    10,   419,
      12,    -1,     1,    -1,    10,    11,    12,    13,   166,     8,
      -1,     1,    33,    12,    35,   173,   436,    -1,    -1,   177,
      10,    -1,    12,    -1,    23,    24,    -1,    -1,    -1,   415,
     416,   417,    -1,   419,    -1,   366,     1,    -1,   458,    -1,
      -1,     6,   242,   243,   244,   245,   246,   247,   248,   249,
     436,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,   392,   393,    -1,   264,    64,   397,     9,    33,    11,
      35,    13,   458,    -1,    73,    74,    75,    76,    77,    78,
      79,     1,   282,    -1,    -1,    -1,     1,    -1,    -1,    -1,
     290,     6,     7,     8,    15,    16,    17,    18,   429,    19,
      20,    21,    22,   261,   301,   302,   303,   304,    73,    74,
      75,    76,    77,    78,    79,    -1,   447,    -1,    33,    -1,
      35,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,   293,    -1,    -1,   296,    -1,
      -1,    -1,    -1,   301,   302,   303,   304,    -1,    -1,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,    73,    74,
      75,    76,    77,    78,    79,    -1,   366,    -1,    -1,    -1,
     328,   371,    -1,    -1,    25,   333,    -1,    -1,    -1,    -1,
      -1,   339,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    -1,    -1,    -1,    57,    -1,    -1,     1,
      -1,    -1,     4,   371,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,   429,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,   415,    50,    51,
      52,    53,   462,    -1,    -1,    57,    -1,     1,    -1,    -1,
       4,   429,   472,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      -1,    -1,     1,    57,    -1,     4,    -1,    -1,     7,     8,
       1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    73,
      74,    75,    76,    77,    78,    79,    25,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    -1,    -1,     1,    57,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    73,    74,    75,    76,    77,    78,
      79,    25,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,     1,    48,    -1,    50,    51,    52,    53,
       8,    -1,     1,    11,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    73,
      74,    75,    76,    77,    78,    79,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    42,    43,    44,    -1,    46,    -1,    48,
      -1,    -1,    60,    52,    53,    -1,    64,     1,    -1,    -1,
       4,    -1,    -1,     7,     8,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,     1,
      -1,    -1,    46,    -1,    48,     7,     8,    -1,    52,    53,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,     1,    15,
      16,    17,    18,    25,     7,     8,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    -1,    39,    40,    41,
      42,    -1,    25,    39,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    -1,    49,    -1,    -1,    39,    40,    -1,    42,
      56,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      53,    73,    74,    75,    76,    77,    78,    79,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,
       1,    -1,    -1,    46,    -1,    48,     7,     8,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    25,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    -1,    39,    40,
      25,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    -1,    39,    40,    57,    42,    -1,     1,
      45,    46,    -1,    48,    -1,     7,     8,    52,    53,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    37,    -1,    39,    40,    -1,
      42,     1,    -1,    -1,    46,    -1,    48,     7,     8,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    25,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    39,
      40,    25,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    51,    52,    53,    -1,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     1,    10,    11,    12,    -1,    -1,
      -1,     8,    -1,    10,    11,    12,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,     1,    -1,    23,    24,    25,    -1,
      -1,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    60,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    73,    74,
      75,    76,    77,    78,    79,    -1,    73,    74,    75,    76,
      77,    78,    79,    60,     1,    -1,    -1,    64,    -1,    -1,
      -1,     8,    -1,    -1,    11,    -1,    73,    74,    75,    76,
      77,    78,    79,    -1,     1,    -1,    23,    24,    25,    -1,
      -1,     8,     1,    -1,    11,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    11,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,     1,    -1,    23,    24,    -1,    -1,    -1,     8,
      -1,    -1,    11,    60,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    73,    74,    75,    76,
      77,    78,    79,    60,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    73,    74,    75,    76,
      77,    78,    79,    -1,    73,    74,    75,    76,    77,    78,
      79,    60,     1,    -1,    -1,    64,    -1,    -1,    -1,     8,
      -1,    -1,    11,    -1,    73,    74,    75,    76,    77,    78,
      79,    -1,     1,    -1,    23,    24,    -1,    -1,    -1,     8,
       1,    -1,    11,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      11,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,     8,    -1,    -1,    11,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    23,
      24,     8,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    60,    -1,    -1,    -1,    64,    23,    24,    25,    60,
      -1,    -1,    -1,    64,    73,    74,    75,    76,    77,    78,
      79,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    12,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    58,    59,    60,    61,    62,    63,     1,    65,
      66,    67,    68,    69,    70,    71,    -1,    10,    -1,    12,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    12,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,     1,     3,    84,    85,    87,     1,    25,
      88,    89,     1,     5,     7,    91,    92,    93,   175,   176,
       1,    39,    82,    83,   176,    83,    83,     1,     4,    86,
      83,     1,     6,    33,    35,    73,    74,    75,    76,    77,
      78,    79,    90,   159,   161,   164,   171,   174,   195,   198,
     199,   200,   202,   203,   204,   205,   206,   210,   211,   212,
     213,   214,   215,    91,    93,   175,    83,     1,     8,    95,
      97,    98,    99,   117,   175,    83,     1,    40,    42,    46,
      48,    52,    53,    83,    88,    99,   118,   119,   120,   121,
     123,   125,   126,   136,   137,   140,   141,   142,   146,   147,
     152,   175,   176,   181,   195,   196,     1,    90,     1,    99,
     168,     1,    99,   173,     1,    11,   149,   149,   149,   149,
       1,   149,   209,   209,   149,     1,    27,    94,     1,    10,
      96,     1,    13,   106,    95,   120,    83,     1,     9,   149,
     177,    83,   119,     1,    23,    24,    60,    64,    98,    99,
     149,   160,   188,   190,   191,   192,   193,   194,   195,   196,
     217,    98,    83,   217,     1,    98,   149,   151,   119,    83,
      83,    83,   119,   149,     1,    27,   163,   149,    83,    88,
      98,    98,    98,    98,   149,   194,     1,    88,   194,   208,
      98,     1,    19,    20,    21,    22,    26,   100,   101,   102,
     104,   105,   115,   116,    97,     1,    98,   190,     1,    12,
      98,   150,   193,   195,   196,   197,     1,    30,    31,    88,
     160,   178,   179,   180,   194,   194,   217,   194,     1,    58,
      59,    60,    61,    62,    63,    65,    66,    67,    68,    69,
      70,    71,   182,   183,   184,   185,   186,   187,   189,   216,
       1,    15,    16,    17,    18,    56,   122,   218,   219,   220,
     221,   222,     1,    54,   128,   134,   119,     1,    49,   144,
      98,    83,     1,    97,   170,   105,   170,    93,   175,     1,
     150,   150,    96,   150,   194,   150,     1,    27,   207,     1,
      96,   150,   150,    83,   106,   108,    83,     1,    14,   107,
     107,    96,    96,    96,    96,   150,     1,   150,   150,   194,
     194,   194,   194,   194,   194,   194,   194,    83,   217,     1,
     130,   190,   194,     1,    56,   135,     1,    41,   138,    83,
     150,     1,    43,   153,   155,   156,     1,    27,   169,    96,
     150,    83,   150,    90,    93,   130,   201,     1,   190,    88,
     194,    95,   109,   110,   190,     1,    54,   113,   114,    95,
       1,   197,   197,   197,   197,   119,   129,   138,    83,     1,
     139,   149,   217,   119,     1,    88,    98,   100,   101,   103,
     157,   158,     1,    44,   154,     1,    45,   148,   105,   170,
      93,   119,    96,    94,   107,     1,    28,   111,   105,     1,
      47,   124,     1,   131,   190,   194,   119,    83,   217,     1,
      50,    51,   143,   145,   146,    96,    83,    83,    83,    90,
       1,    34,   172,   190,   190,   112,   190,    83,    55,   133,
       1,    57,   127,   150,    83,     1,    83,   146,     1,   143,
     145,   158,   119,   119,   119,    83,   150,    94,     1,    98,
     132,   190,   194,    83,   119,     1,   143,    83,    83,   155,
       1,    37,   165,   167,   190,     1,   143,   146,    83,   119,
       1,    88,   149,   166,   194,    83,    83,   143,     1,   146,
      88,     1,    36,   162,    83,   143,   150,    83,    83
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1806 of yacc.c  */
#line 72 "src/directg.y"
    {erros++;yyerror("Erro do fim de linha");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 81 "src/directg.y"
    { printf("%d",yylineno ); arquivo = fopen("../Saida.C","w+"); fprintf(arquivo , "Algoritmo");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 82 "src/directg.y"
    {erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 91 "src/directg.y"
    {erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 104 "src/directg.y"
    {erros++;yyerror("Algoritmo sem nome");}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 109 "src/directg.y"
    {erros++;yyerror("Faltando \" INICIO \" ");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 121 "src/directg.y"
    {erros++;yyerror("Faltando \" VAR \" ");}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 133 "src/directg.y"
    {erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 144 "src/directg.y"
    {erros++;yyerror("Faltando \",\" para divisao de variaveis");}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 157 "src/directg.y"
    {/*sprintf(variavel,"%d",$1);*/}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 159 "src/directg.y"
    {erros++;yyerror("Identificador invalido");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 163 "src/directg.y"
    {/*tipo="$1";*/}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 177 "src/directg.y"
    {erros++;yyerror("Esperado um numero");}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 189 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 194 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 199 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 216 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 225 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 268 "src/directg.y"
    {erros++;yyerror("Erro no bloco logico");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 282 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 291 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 296 "src/directg.y"
    {erros++; yyerror("Erro no bloco ENQUANTO");}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 309 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 314 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 324 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 330 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 337 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 347 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 352 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 365 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 371 "src/directg.y"
    {erros++;yyerror("Erro na expressao do ATE");}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 378 "src/directg.y"
    {erros++;yyerror("Erro no bloco REPITA");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 394 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 399 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 404 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 416 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 425 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 430 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 435 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 440 "src/directg.y"
    {erros++;yyerror("Necessario uma variavel para ESCOLHA");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 447 "src/directg.y"
    {erros++;yyerror("Erro no Bloco de ESCOLHA");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 452 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 457 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 463 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 476 "src/directg.y"
    {erros++;yyerror("Variavel de escolha errada");}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 501 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 506 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 511 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 516 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 523 "src/directg.y"
    {erros++;yyerror("Parametro de retorno errado");}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 537 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 543 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 552 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 557 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 562 "src/directg.y"
    {erros++;yyerror("Erro no BlocoProcedimento");}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 592 "src/directg.y"
    {erros++;yyerror("Valor atribuido de forma errada");}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 597 "src/directg.y"
    {erros++;yyerror("Esperado \"<-\"");}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 634 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 679 "src/directg.y"
    {erros++;yyerror("Funcao inexistente");}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 691 "src/directg.y"
    {erros++;yyerror("Erro de assinatura de funcao");}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 701 "src/directg.y"
    {erros++;yyerror("Erro na funcao Compr()");}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 714 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 723 "src/directg.y"
    {erros++;yyerror("Erro no funcao Maiusc");}
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 732 "src/directg.y"
    {erros++;yyerror("Erro na funcao Raiz");}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 737 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 747 "src/directg.y"
    {erros++;yyerror("Parametro improprio para funcao escreva");}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 752 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 769 "src/directg.y"
    {erros++;yyerror("Erro na funcao escreval");}
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 778 "src/directg.y"
    {erros++;yyerror("Erro na funcao leia (Antigo paçoca)");}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 788 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;



/* Line 1806 of yacc.c  */
#line 2751 "directg.tab.c"
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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 824 "src/directg.y"


extern int 	yylineno;
extern char 	*yytext;

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
				//printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:%s\n", minhaPilha.Topo->Item.errMsg,
                                //         minhaPilha.Topo->Item.lineNo, minhaPilha.Topo->Item.errNo);
				
				printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:\n", minhaPilha.Topo->Item.errMsg,
                                         minhaPilha.Topo->Item.lineNo);
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


