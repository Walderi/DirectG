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
int erros=0;
char escopo[30];
char variavel[30];
char tipo[30];
char* a;
VetFuncao hashFuncao;
VetVariavel hashVariavel;


/* Line 268 of yacc.c  */
#line 88 "directg.tab.c"

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
#line 209 "directg.tab.c"

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
#define YYLAST   1813

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNRULES -- Number of states.  */
#define YYNSTATES  487

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
      21,    23,    24,    29,    31,    33,    37,    39,    41,    43,
      46,    48,    52,    55,    57,    59,    60,    64,    67,    70,
      72,    78,    80,    82,    83,    84,    91,    97,   100,   102,
     104,   106,   110,   112,   114,   116,   118,   120,   122,   124,
     126,   128,   130,   132,   134,   136,   138,   140,   142,   144,
     146,   148,   150,   154,   158,   160,   162,   164,   166,   168,
     170,   173,   175,   179,   184,   189,   191,   193,   195,   198,
     201,   202,   205,   208,   210,   212,   215,   218,   221,   224,
     226,   228,   230,   232,   234,   236,   238,   240,   242,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   291,   298,
     300,   302,   304,   313,   315,   317,   319,   321,   325,   327,
     334,   336,   338,   340,   342,   344,   346,   348,   350,   352,
     354,   362,   373,   382,   394,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   429,   431,   438,   440,   442,
     444,   446,   448,   453,   459,   461,   466,   467,   469,   471,
     473,   475,   477,   481,   483,   485,   487,   489,   491,   493,
     495,   497,   499,   501,   514,   516,   518,   520,   524,   526,
     528,   530,   533,   538,   540,   542,   544,   548,   552,   554,
     556,   558,   560,   565,   567,   576,   578,   580,   583,   586,
     588,   590,   592,   594,   596,   598,   600,   602,   604,   608,
     610,   612,   614,   616,   618,   620,   622,   624,   626,   628,
     630,   632,   634,   636,   638,   640,   642,   644,   648,   652,
     656,   660,   664,   668,   671,   675,   679,   681,   683,   685,
     687,   689,   691,   693,   695,   699,   704,   706,   708,   712,
     714,   718,   720,   724,   726,   730,   732,   734,   739,   744,
     746,   748,   750,   759,   761,   763,   768,   770,   772,   777,
     779,   780,   783,   785,   786,   788,   791,   797,   801,   809,
     813,   815,   819,   821,   823,   826,   828,   831,   833,   835,
     840,   842,   844,   846,   848,   850,   852,   854,   856,   860,
     864,   868,   870,   872,   874,   876,   878,   880,   882,   884
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    88,    83,    -1,    39,    -1,
     178,    -1,     1,    -1,    82,    -1,    82,    83,    -1,     3,
      -1,     1,    -1,    -1,    84,    90,    86,    82,    -1,     4,
      -1,     1,    -1,    85,    92,    87,    -1,    25,    -1,    89,
      -1,     1,    -1,     6,    83,    -1,     1,    -1,    94,    91,
     121,    -1,   177,    92,    -1,     5,    -1,     1,    -1,    -1,
      93,    83,    96,    -1,    93,    83,    -1,   177,    94,    -1,
     161,    -1,    93,    83,    96,    83,   161,    -1,    27,    -1,
       1,    -1,    -1,    -1,    99,    95,   107,    83,    97,    96,
      -1,    99,    95,   118,    83,    96,    -1,   177,    96,    -1,
      10,    -1,     1,    -1,   100,    -1,   100,    98,    99,    -1,
     101,    -1,     8,    -1,   119,    -1,     1,    -1,    19,    -1,
      20,    -1,    21,    -1,   102,    -1,   103,    -1,     1,    -1,
      22,    -1,   102,    -1,   103,    -1,   104,    -1,   106,    -1,
       1,    -1,    13,    -1,     1,    -1,    14,    -1,     1,    -1,
     108,   111,   109,    -1,   112,   113,   114,    -1,   192,    -1,
      28,    -1,     1,    -1,   192,    -1,    54,    -1,     1,    -1,
     115,   107,    -1,    26,    -1,   117,   110,   116,    -1,   101,
     108,   100,   109,    -1,   101,   108,   192,   109,    -1,    52,
      -1,   122,    -1,   177,    -1,   177,   121,    -1,   122,   121,
      -1,    -1,    89,    83,    -1,   183,    83,    -1,   123,    -1,
     143,    -1,   120,    83,    -1,   197,    83,    -1,   198,    83,
      -1,    83,   122,    -1,     1,    -1,   138,    -1,   127,    -1,
     142,    -1,    56,    -1,     1,    -1,    46,    -1,    47,    -1,
       1,    -1,   125,   219,   124,    83,   121,   126,    83,    -1,
       1,    -1,    53,    -1,    57,    -1,     1,    -1,    54,    -1,
       1,    -1,   140,    -1,   100,    -1,   192,    -1,     1,    -1,
     100,    -1,   192,    -1,     1,    -1,   100,    -1,   192,    -1,
     196,    -1,     1,    -1,    55,    -1,   130,   132,   131,   133,
      -1,   130,   132,   131,   133,   135,   134,    -1,     1,    -1,
      56,    -1,     1,    -1,   128,   100,   136,   137,    83,   121,
     129,    83,    -1,    40,    -1,    41,    -1,     1,    -1,   219,
      -1,   151,   219,   152,    -1,     1,    -1,   139,    83,   121,
     140,   141,    83,    -1,     1,    -1,   148,    -1,   154,    -1,
      48,    -1,    51,    -1,     1,    -1,    49,    -1,     1,    -1,
      50,    -1,     1,    -1,   144,   219,   146,    83,   121,   145,
      83,    -1,   144,   219,   146,    83,   121,   147,    83,   121,
     145,    83,    -1,   144,   219,   146,    83,   121,   148,   145,
      83,    -1,   144,   219,   146,    83,   121,   147,    83,   121,
     148,   145,    83,    -1,   144,   219,   146,    83,   121,   148,
     147,    83,   121,   148,   145,    83,    -1,     1,    -1,    42,
      -1,    45,    -1,     1,    -1,    11,    -1,     1,    -1,    12,
      -1,     1,    -1,   100,    -1,   151,   100,   152,    -1,     1,
      -1,   149,   153,    83,   158,   150,    83,    -1,     1,    -1,
      43,    -1,     1,    -1,    44,    -1,     1,    -1,   155,   160,
      83,   121,    -1,   155,   160,    83,   121,   157,    -1,     1,
      -1,   157,   156,    83,   121,    -1,    -1,   100,    -1,    89,
      -1,   105,    -1,     1,    -1,   159,    -1,   159,    98,   160,
      -1,   166,    -1,   176,    -1,   197,    -1,   198,    -1,   197,
      -1,    35,    -1,    36,    -1,     1,    -1,    27,    -1,     1,
      -1,   163,   170,   165,   107,    83,    94,    91,   121,   169,
      83,   164,    83,    -1,     1,    -1,    37,    -1,     1,    -1,
     151,    89,   152,    -1,    89,    -1,   196,    -1,     1,    -1,
     167,   168,    -1,   101,   151,   172,   152,    -1,     1,    -1,
      27,    -1,     1,    -1,    99,   171,   107,    -1,   172,    98,
     172,    -1,     1,    -1,    33,    -1,    34,    -1,     1,    -1,
     101,   151,   172,   152,    -1,     1,    -1,   173,   175,    83,
      94,    91,   121,   174,    83,    -1,     1,    -1,   178,    -1,
     178,   177,    -1,     7,    83,    -1,     9,    -1,    31,    -1,
      30,    -1,    89,    -1,   196,    -1,   162,    -1,   180,    -1,
     181,    -1,     1,    -1,   101,   179,   182,    -1,     1,    -1,
      58,    -1,    60,    -1,    61,    -1,    59,    -1,    71,    -1,
      63,    -1,    60,    -1,    62,    -1,    23,    -1,     1,    -1,
      24,    -1,    64,    -1,   192,    -1,   193,    -1,   194,    -1,
     195,    -1,   100,    -1,   196,   184,   196,    -1,   196,   185,
     196,    -1,   196,   186,   196,    -1,   196,   187,   196,    -1,
     196,   188,   196,    -1,   196,   189,   196,    -1,   190,   196,
      -1,   196,   191,   196,    -1,   151,   196,   152,    -1,   162,
      -1,   201,    -1,   204,    -1,   206,    -1,   208,    -1,   213,
      -1,   215,    -1,   217,    -1,   101,   151,   152,    -1,   101,
     151,   199,   152,    -1,     1,    -1,   100,    -1,   100,    98,
     199,    -1,   195,    -1,   195,    98,   199,    -1,   198,    -1,
     198,    98,   199,    -1,   197,    -1,   197,    98,   199,    -1,
       1,    -1,    78,    -1,   200,   151,   100,   152,    -1,   200,
     151,    89,   152,    -1,     1,    -1,    77,    -1,   132,    -1,
     202,   151,   100,    98,   203,    98,   192,   152,    -1,     1,
      -1,    79,    -1,   205,   151,   100,   152,    -1,     1,    -1,
      76,    -1,   207,   151,   196,   152,    -1,     1,    -1,    -1,
      27,   192,    -1,     1,    -1,    -1,    89,    -1,   196,   209,
      -1,   210,    98,   196,    95,   192,    -1,   210,    98,   196,
      -1,   210,    98,   196,    95,   192,    95,   192,    -1,   210,
      98,    89,    -1,     1,    -1,   151,   210,   152,    -1,     1,
      -1,    74,    -1,   212,   211,    -1,    73,    -1,   214,   211,
      -1,     1,    -1,    75,    -1,   216,   151,   100,   152,    -1,
       1,    -1,    70,    -1,    65,    -1,    66,    -1,    67,    -1,
      68,    -1,    69,    -1,     1,    -1,   196,   218,   196,    -1,
     219,   224,   219,    -1,   151,   219,   152,    -1,   100,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,   220,    -1,
     221,    -1,   222,    -1,   223,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    63,    66,    67,    68,    72,    73,    77,
      78,    82,    82,    86,    87,    91,    95,    99,   100,   104,
     105,   109,   110,   115,   116,   119,   120,   121,   122,   123,
     124,   128,   129,   132,   133,   133,   134,   135,   139,   140,
     144,   145,   149,   153,   154,   155,   159,   163,   167,   171,
     172,   173,   177,   181,   182,   183,   184,   185,   189,   190,
     194,   195,   199,   203,   207,   211,   212,   216,   220,   221,
     225,   229,   233,   237,   238,   245,   249,   250,   251,   252,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     270,   271,   272,   277,   278,   282,   286,   287,   291,   292,
     300,   304,   305,   309,   310,   314,   318,   319,   320,   324,
     325,   326,   330,   331,   332,   333,   337,   341,   342,   343,
     347,   348,   352,   356,   360,   361,   365,   366,   367,   373,
     374,   380,   381,   385,   389,   390,   394,   395,   399,   400,
     406,   407,   408,   409,   410,   411,   415,   419,   420,   424,
     425,   429,   430,   433,   434,   435,   441,   442,   446,   447,
     451,   452,   456,   457,   458,   464,   467,   468,   469,   470,
     471,   475,   476,   480,   481,   482,   486,   487,   491,   495,
     496,   500,   501,   505,   506,   510,   511,   515,   516,   517,
     518,   522,   526,   527,   531,   532,   536,   537,   538,   542,
     546,   547,   551,   552,   556,   557,   561,   562,   566,   570,
     574,   578,   582,   583,   584,   585,   586,   587,   591,   592,
     596,   600,   604,   608,   612,   616,   620,   624,   628,   629,
     633,   637,   641,   642,   643,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   662,   663,   664,
     665,   666,   667,   668,   672,   673,   674,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   690,   694,   695,   696,
     700,   704,   708,   709,   713,   717,   718,   722,   726,   727,
     730,   731,   732,   735,   736,   737,   738,   739,   740,   741,
     742,   746,   747,   751,   755,   759,   763,   764,   768,   772,
     773,   777,   778,   779,   780,   781,   782,   783,   787,   788,
     789,   790,   795,   799,   803,   807,   811,   812,   813,   814
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
  "CabecalhoAlgoritmo", "$@1", "FimAlgoritmo", "BlocoAlgoritmo", "String",
  "NomeAlgoritmo", "InicioLogica", "BlocoCodigo", "InicioBlocoDeclaracao",
  "BlocoDeclaracao", "DefineTipo", "BlocoVariaveis", "$@2", "Separador",
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
      84,    86,    85,    87,    87,    88,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    95,    95,    96,    97,    96,    96,    96,    98,    98,
      99,    99,   100,   101,   101,   101,   102,   103,   104,   105,
     105,   105,   106,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   111,   112,   113,   113,   114,   115,   115,
     116,   117,   118,   119,   119,   120,   121,   121,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   123,   124,   124,   125,   126,   126,   127,   127,
     128,   129,   129,   130,   130,   131,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   134,   135,   136,   136,   136,
     137,   137,   138,   139,   140,   140,   141,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   158,   159,   159,   159,   159,
     159,   160,   160,   161,   161,   161,   162,   162,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   168,
     168,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   179,
     180,   181,   182,   182,   182,   182,   182,   182,   183,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   192,
     193,   194,   195,   195,   195,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   200,   201,   201,   201,
     202,   203,   204,   204,   205,   206,   206,   207,   208,   208,
     209,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     210,   211,   211,   212,   213,   214,   215,   215,   216,   217,
     217,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   219,   220,   221,   222,   223,   224,   224,   224,   224
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     2,     1,
       1,     0,     4,     1,     1,     3,     1,     1,     1,     2,
       1,     3,     2,     1,     1,     0,     3,     2,     2,     1,
       5,     1,     1,     0,     0,     6,     5,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     4,     4,     1,     1,     1,     2,     2,
       0,     2,     2,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     6,     1,
       1,     1,     8,     1,     1,     1,     1,     3,     1,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,    10,     8,    11,    12,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     6,     1,     1,     1,
       1,     1,     4,     5,     1,     4,     0,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    12,     1,     1,     1,     3,     1,     1,
       1,     2,     4,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     4,     1,     8,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     4,     4,     1,
       1,     1,     8,     1,     1,     4,     1,     1,     4,     1,
       0,     2,     1,     0,     1,     2,     5,     3,     7,     3,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,     0,     0,     0,    18,    16,
      17,    11,    24,    23,     0,   199,   178,   295,   293,   298,
     277,   270,   266,   274,     0,     0,     0,    29,     0,   173,
       0,   174,     0,   206,   175,     0,   247,     0,   248,     0,
     249,     0,   250,     0,   251,     0,   252,     0,   253,     6,
       4,     0,     3,     5,     0,   208,    14,    13,    15,     0,
      20,     0,     0,    45,    43,     0,    44,     0,    45,     0,
       0,    22,     0,   207,   150,   149,     0,     0,     0,     0,
     292,     0,   294,   296,     0,     8,    12,    45,     0,     0,
       0,     0,     0,    19,     6,   123,   146,    95,   133,    75,
     100,     0,     0,     0,     0,    21,     0,    83,     0,    91,
       0,    90,     0,    92,    84,     0,   131,     0,   132,     0,
       5,     0,     0,     0,   150,    58,     0,     0,   182,   181,
       0,     0,     0,     0,     0,     0,     0,    45,   228,   230,
     226,   231,   236,     0,     0,   246,     0,   232,   233,   234,
     235,     0,   177,   176,    45,   284,     0,     0,     0,     0,
      32,    31,     0,    39,    38,     0,    59,    37,    88,    81,
     209,     0,     0,    85,    79,   236,     0,     0,     0,     0,
       0,     0,    45,   153,     0,     0,    78,    82,    86,    87,
      45,     0,     0,    45,     0,     0,    57,    46,    47,    48,
      52,    53,    54,    55,    56,     0,     0,     0,     0,   152,
     151,   268,   267,     0,   275,     0,   243,   220,   223,   221,
     222,   227,   225,   224,   278,     0,     0,     0,     0,     0,
       0,     0,   282,     0,   285,   152,     0,   291,   299,   184,
      30,    71,     0,     0,     0,    41,   152,     0,   254,     0,
       0,     0,     0,    45,   211,   210,   212,   246,   215,   216,
     218,   213,     0,     0,   307,   302,   303,   304,   305,   306,
     301,     0,    94,   312,   313,   314,   315,    93,     0,   316,
     317,   318,   319,     0,   104,   103,     0,     0,     0,   137,
     136,     0,     0,     0,    61,    60,    73,    74,   195,   194,
       0,     0,   192,     0,   202,     0,    28,    45,   106,   271,
     107,     0,   245,   237,   238,   239,   240,   241,   242,   244,
     229,   281,   289,     0,    34,     0,     0,     0,     0,     0,
       0,     0,   255,   152,   310,   308,     0,   309,     0,   121,
     120,     0,   125,   124,     0,     0,   154,   159,   158,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    69,    68,     0,    72,    36,    45,   258,   260,
     264,   262,     0,     0,   105,     0,    45,     0,     0,   126,
       0,    45,   168,   167,    49,    50,   169,     0,     0,   161,
     160,     0,   148,   147,     0,     0,   201,   200,     0,     0,
       0,    35,    62,    66,    65,     0,    70,    97,    96,     0,
      45,   109,   117,   110,     0,   129,     0,   135,   138,   134,
       0,     0,     0,     0,     0,     0,   156,     0,   204,   272,
       0,    63,    67,    98,   116,     0,   102,   101,     0,   310,
     140,     0,   135,     0,     0,   172,     0,   165,   186,   185,
       0,     0,   288,    45,   236,   118,   232,   114,   122,     0,
     142,     0,   163,    45,   188,     0,   191,   189,     0,   135,
       0,     0,     0,     0,   180,   179,     0,   141,   135,     0,
     145,     0,   187,   183,   143,     0,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,   101,     5,     6,    54,    58,     7,   102,
      11,    62,    24,    25,    26,   162,    88,   358,   301,    89,
     142,   143,   201,   202,   203,   386,   204,   205,   126,   296,
     326,   359,   360,   405,   431,   364,   365,   243,   244,    66,
     104,   105,   106,   107,   278,   108,   409,   109,   110,   438,
     286,   373,   309,   412,   455,   435,   287,   341,   111,   112,
     344,   377,   113,   114,   115,   420,   291,   421,   116,   117,
     394,   144,   312,   185,   118,   349,   391,   350,   351,   387,
     388,    27,   145,    28,   476,   130,    29,   450,   466,   451,
      67,   300,   195,    30,   398,    70,    31,   119,    53,   172,
     258,   259,   260,   121,   225,   226,   227,   228,   229,   230,
     146,   231,   147,   148,   149,   150,   177,   152,   153,   252,
      35,    36,    37,   311,    38,    39,    40,    41,    42,   234,
     157,    82,    43,    44,    45,    46,    47,    48,   271,   178,
     279,   280,   281,   282,   283
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -402
static const yytype_int16 yypact[] =
{
    -402,   439,  -402,  -402,  -402,   139,  1036,   179,  -402,  -402,
    -402,  -402,    29,  -402,   179,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,   424,   179,   315,  -402,   332,  -402,
     381,  -402,  1036,    17,  -402,   140,  -402,   140,  -402,   140,
    -402,   140,  -402,   232,  -402,   232,  -402,   140,  -402,  -402,
    -402,   706,  -402,  -402,   179,  -402,  -402,  -402,  -402,   189,
    -402,   179,  1138,    86,  -402,   361,  -402,    24,   113,   361,
     179,  -402,   315,  -402,  -402,  -402,   251,   392,   392,   589,
     799,  1487,  -402,  -402,   392,  -402,  -402,  -402,   130,   122,
     138,   634,   219,  -402,   354,  -402,  -402,  -402,  -402,  -402,
    -402,   863,   179,   318,   179,  -402,   918,  -402,   589,  -402,
     392,  -402,   179,  -402,  -402,   589,  -402,   365,  -402,   973,
      17,   179,   179,   179,   228,  -402,   281,   416,  -402,  -402,
     433,   416,  1036,   180,   180,   301,   180,   752,  -402,  -402,
    -402,  -402,  -402,  1703,   589,  -402,   589,  -402,  -402,  -402,
    -402,   522,  -402,  -402,   752,  -402,   659,   269,   180,   137,
    -402,  -402,   322,  -402,  -402,   392,  -402,  -402,  -402,  -402,
    -402,  1624,  1171,  -402,  -402,  1656,   589,  1666,   239,    30,
    1180,   297,    35,  -402,   392,   179,  -402,  -402,  -402,  -402,
    -402,    45,    45,    33,   126,   269,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,   179,   269,   315,  1036,  -402,
    -402,  -402,  -402,   286,  -402,   522,   707,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,   589,   589,   589,   589,   589,
     589,   589,  -402,   186,  -402,  1074,  1520,  -402,  -402,  -402,
    -402,  -402,   179,   175,   179,  -402,   520,   295,  -402,   348,
     385,   393,   180,   752,  -402,  -402,  -402,   223,  -402,  -402,
    -402,   707,  1591,   450,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,   589,  -402,  -402,  -402,  -402,  -402,  -402,   179,  -402,
    -402,  -402,  -402,   589,   100,  -402,   286,    12,   109,  -402,
    -402,   179,   180,    49,  -402,  -402,  -402,  -402,  -402,  -402,
     433,   416,  -402,  1036,  -402,  1235,  -402,  -402,  -402,  -402,
    -402,   301,  -402,   707,   707,   707,   707,   707,   707,   707,
    -402,  -402,  -402,   786,  -402,   186,    32,   219,   981,   981,
     981,   981,  -402,  1216,  -402,   707,  1277,   526,   109,  -402,
    -402,   179,  -402,  -402,  1566,  1028,  -402,     5,  -402,  1774,
      38,    26,  -402,   410,   315,   111,   186,   186,   219,    45,
      36,  -402,  -402,  -402,   433,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,    18,   324,  -402,  1319,   752,   179,   589,   526,
      82,  -402,  -402,  -402,  -402,  -402,  -402,   118,   179,  -402,
    -402,   179,  -402,  -402,   179,  1338,  -402,  -402,   179,   180,
     237,  -402,  -402,  -402,  -402,   186,  -402,  -402,  -402,   179,
    -402,  -402,   105,  -402,    16,  -402,   450,   124,  -402,  -402,
     179,   179,    51,  1774,  1083,  1380,  -402,    61,  -402,  -402,
     186,  -402,  -402,  -402,  -402,  1605,  -402,  -402,   179,   238,
    -402,  1399,  -402,   179,   179,  -402,    78,  -402,  -402,  -402,
    1545,   179,  -402,   752,    19,  -402,    22,   707,  -402,    56,
    -402,  1441,  -402,  1461,  -402,  1520,  -402,   707,   110,   142,
     179,    52,    40,   180,  -402,  -402,   179,  -402,  -402,   179,
    -402,    52,  -402,  -402,  -402,   179,  -402
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,   135,    -7,  -402,  -402,  -402,  -402,  -402,    -4,
    -402,  -196,   174,  -402,   -23,  -311,   -86,  -402,   -88,  -117,
     511,   191,  -333,  -327,  -402,  -402,  -402,  -157,   -35,  -188,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,   -45,   121,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,   -52,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
     -90,  -402,  -402,  -402,  -402,  -401,  -402,  -161,  -372,  -402,
    -402,    -9,   299,  -402,  -402,  -402,  -402,  -183,  -402,  -402,
    -150,   129,   134,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -128,  -402,  -402,  -402,  -402,    34,    85,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,    53,  -402,  -402,  -129,   327,    23,   184,   243,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,   275,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -100,
    -402,  -402,  -402,  -402,  -402
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -312
static const yytype_int16 yytable[] =
{
      52,    10,   165,   206,   297,   242,   167,    55,   422,    72,
     194,   305,   357,   339,   194,   181,   384,   436,    59,   407,
    -112,   443,   385,  -113,    14,   128,    76,   392,    77,    34,
      78,   284,    79,   362,    81,  -184,    81,   403,    84,   389,
      32,   480,   249,  -150,    85,  -198,   294,   213,   245,  -164,
     347,   129,   442,   478,    93,    34,   127,   469,   470,   295,
     131,   174,   448,   132,   404,   408,    32,    73,   340,   236,
     479,   393,   133,   437,   186,  -112,   263,   155,  -113,   347,
     485,   159,   390,   417,   285,   122,   363,   471,    98,   430,
     384,    33,   348,    92,   171,   169,   385,   173,   449,   176,
     481,   418,   419,   419,    98,   180,   176,   419,   184,   207,
     342,   474,   396,  -193,   187,   188,   189,    33,    33,   163,
    -203,   348,  -162,   160,   122,  -171,    92,   298,   164,   122,
      98,    49,   418,   419,   171,   288,   -26,    14,   239,   163,
       8,    74,   122,   352,    33,   397,   475,   120,   164,   161,
     343,    75,  -203,   299,    73,    34,  -119,  -171,   395,   328,
     434,   329,   330,   331,     9,   -40,   208,   176,   256,    50,
      15,   402,    16,   353,  -145,  -145,   166,    33,   293,   192,
      49,   209,    34,   337,   194,   306,    14,   320,   125,    86,
      87,   120,   210,  -145,   250,   -27,    14,    64,   303,   249,
     249,   249,   249,   122,   120,    33,    71,   406,   325,   138,
      17,    18,    19,    20,    21,    22,    23,    33,    50,    65,
      87,    69,   168,   356,  -214,   -33,    14,    64,   -33,   -59,
    -214,    34,   322,    80,   338,   324,   -59,   327,   160,  -127,
     272,   366,   208,    75,   379,  -127,   123,  -286,   374,  -286,
      91,   -59,    87,   103,   273,   274,   275,   276,   -33,    64,
     355,   444,  -214,   462,   161,   120,   310,    91,    91,    91,
     235,   336,   401,   445,   176,    91,     9,  -127,   416,   164,
     354,   210,   190,    91,   345,   123,   321,   307,   240,    64,
     123,   372,   103,    33,    64,   277,   163,   103,   289,   423,
     380,    91,   163,   123,   138,   164,   257,  -257,    91,   138,
     103,   164,   273,   274,   275,   276,    60,    91,    91,   124,
      83,    61,    91,   196,     0,   410,    34,   170,   122,    75,
     414,   125,    64,    63,   375,   378,     0,   208,     0,   310,
      64,   197,   198,   199,   200,   382,   290,   138,   241,   163,
     427,   250,   250,   250,   250,   251,    91,     0,   164,   122,
    -259,    92,   124,   -45,   123,   -45,   182,   -45,   122,   176,
     415,   103,    75,    64,   125,    91,    75,     0,   361,   446,
     447,   424,    68,     0,   425,     0,   163,   426,    33,    64,
     120,   428,    92,    87,   163,   164,   459,  -263,   122,     0,
      64,     0,   433,   164,    91,  -261,   151,     0,   156,   399,
     400,   163,    33,   440,   441,     0,   472,   193,   122,   382,
     164,   120,  -197,     0,    64,    56,   413,     0,    57,     0,
     120,   458,   211,   212,   196,   214,   460,   461,     0,     2,
       3,   465,     4,    33,   468,     0,   464,   122,   122,     0,
     224,   209,   197,   198,   199,   200,   237,   238,   432,     0,
     120,   473,   210,   477,   122,   273,   274,   275,   276,   483,
     248,   215,   484,   216,     0,     0,     0,    91,   486,     0,
     120,     0,     0,   452,   122,     0,     0,     0,   456,   123,
       0,     0,    91,     0,   302,     0,   103,     0,     0,   261,
       0,     0,     0,   262,     0,   304,     0,     0,     0,   120,
     120,     0,   251,   251,   251,   251,     0,     0,    91,     0,
     123,   -45,     0,   209,     0,     0,   120,   103,     0,   123,
     -45,   -45,   -45,   -45,   210,     0,   103,     0,     0,     0,
      91,   273,   274,   275,   276,     0,   120,     0,     0,    91,
       0,   332,   313,   314,   315,   316,   317,   318,   319,   123,
       0,     0,   334,   323,    91,     0,   103,     0,     0,     0,
      90,   368,   369,   370,   371,     0,     0,     0,     0,   123,
     217,   218,   219,   220,   221,   222,   103,   134,   135,   136,
     137,   346,     0,   223,     0,   158,     0,    64,   335,     0,
      75,     0,     0,    90,     0,     0,     0,     0,   123,   123,
       0,     0,   138,   139,    91,   103,   103,     0,     0,   175,
       0,   179,     0,     0,     0,   123,   175,     0,   183,     0,
       0,     0,   103,     0,     0,   166,     0,   191,    90,     0,
       0,   -42,    90,     0,   -42,   123,   -42,   125,   -42,   140,
       0,     0,   103,   141,     0,     0,     0,     0,     0,     0,
     232,   -42,    17,    18,    19,    20,    21,    22,    23,  -280,
       0,  -280,     0,   -42,     0,   -42,    90,     0,     0,     0,
       0,     0,   247,     0,     0,     0,   233,   175,   -42,   -42,
     -42,     0,     0,     0,     0,   292,     0,     0,   429,     0,
       0,     0,     0,     0,     0,   262,    -7,    49,     0,    -7,
      -7,    -7,    -7,    14,    -7,   439,     0,   217,   218,   219,
     220,   221,   222,     0,   308,     0,     0,     0,     0,     0,
     223,    -7,     0,     0,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,     0,    50,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
    -150,     0,   457,    -7,     0,   217,   218,   219,   220,   221,
     222,     0,   482,     0,     0,  -150,  -150,   467,   223,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,   160,     0,     0,
       0,     0,   215,     0,   175,     0,  -287,   308,  -287,     0,
    -150,     0,     0,     0,     0,     0,     0,  -150,     0,  -150,
    -150,  -150,    90,   161,     0,     0,  -150,     0,     0,     0,
       0,     0,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,     0,     0,     0,     0,     0,     0,    90,   247,
     247,   247,   247,     0,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,     0,   175,     0,   223,     0,  -150,
     383,     0,     0,  -150,    94,     0,     0,   -80,     0,    90,
      14,    64,  -150,  -150,  -150,  -150,  -150,  -150,  -150,     0,
       0,     0,     0,     0,   411,     0,     0,     0,     9,   175,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
     -80,     0,    50,    95,   -80,    96,   -80,   -80,   -80,    97,
     -80,    98,     0,   -80,   -80,    99,   100,     0,     0,    94,
     -80,     0,   -76,     0,     0,    14,    64,     0,     0,     0,
       0,     0,     0,     0,   383,     0,    17,    18,    19,    20,
      21,    22,    23,     9,     0,     0,   454,     0,     0,     0,
       0,     0,   -76,     0,     0,   -76,     0,    50,    95,   -76,
      96,   -76,   -76,   -76,    97,   -76,    98,     0,   -76,   -76,
      99,   100,     0,     0,    94,   -76,     0,   -77,     0,     0,
      14,    64,   367,     0,     0,     0,     0,     0,     0,    64,
       0,    17,    18,    19,    20,    21,    22,    23,     9,     0,
       0,     0,     0,     0,   138,   139,     0,   -77,     0,     0,
     -77,     0,    50,    95,   -77,    96,   -77,   -77,   -77,    97,
     -77,    98,     0,   -77,   -77,    99,   100,     0,     0,    94,
     -77,     0,     0,     0,     0,    14,    64,    12,     0,     0,
       0,    13,   -25,    14,     0,   141,    17,    18,    19,    20,
      21,    22,    23,     9,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    50,    95,    15,
      96,    16,     0,     0,    97,   -39,    98,     0,   -80,   -80,
      99,   100,   -39,     0,    94,   -39,     0,     0,     0,     0,
      14,    64,     0,     0,     0,     0,     0,   -39,   -39,   -39,
       0,    17,    18,    19,    20,    21,    22,    23,     9,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,    50,    95,     0,    96,   -80,   -80,     0,    97,
       0,    98,     0,     0,   -39,    99,   100,     0,   -39,    94,
       0,     0,   -80,     0,     0,    14,    64,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     9,     0,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     0,     0,     0,    50,    95,    64,
      96,    94,    75,     0,    97,     0,    98,    14,    64,     0,
      99,   100,     0,     0,   138,   139,     9,     0,     0,     0,
       0,   254,   255,     0,     0,     9,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,    23,     0,    50,
      95,   -80,    96,     0,  -307,     0,    97,  -307,    98,     0,
       0,   140,    99,   100,     0,   141,    94,     0,     0,  -307,
    -307,     0,    14,    64,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    17,    18,    19,    20,    21,    22,    23,
       9,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,     0,    50,    95,     0,    96,    94,     0,
    -307,    97,     0,    98,    14,    64,     0,    99,   100,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,    50,    95,     0,    96,
      94,     0,     0,    97,   -80,    98,    14,    64,     0,    99,
     100,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     9,    14,    64,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     0,    50,    95,
       0,    96,     0,     9,     0,    97,     0,    98,     0,     0,
       0,    99,   100,     0,     0,   -80,   -80,    50,    95,     0,
      96,    94,     0,     0,    97,     0,    98,    14,    64,     0,
      99,   100,    17,    18,    19,    20,    21,    22,    23,     0,
      94,     0,     0,     0,     0,     9,    14,    64,     0,     0,
       0,    17,    18,    19,    20,    21,    22,    23,     0,    50,
      95,     0,    96,     0,     9,   -80,    97,     0,    98,     0,
       0,     0,    99,   100,     0,     0,     0,     0,    50,    95,
       0,    96,    94,     0,     0,    97,     0,    98,    14,    64,
     -80,    99,   100,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     9,     0,     0,  -150,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
      50,    95,     0,    96,  -150,  -150,  -150,    97,   154,    98,
       0,     0,     0,    99,   100,    64,     0,  -283,    75,  -283,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,     9,     0,    17,    18,    19,    20,    21,    22,
      23,   137,     0,     0,     0,  -150,     0,     0,    64,     0,
       0,    75,     0,     0,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,     0,     0,   138,   139,     9,   463,   140,     0,     0,
       0,   141,     0,    64,     0,     0,    75,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,   376,   138,   139,
       9,     0,     0,     0,    64,     0,     0,    75,     0,     0,
     140,     0,     0,     0,   141,     0,     0,     0,     0,   138,
     139,     0,   333,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,   210,     0,   140,   453,     0,     0,   141,
       0,     0,     0,    64,     0,     0,    75,     0,    17,    18,
      19,    20,    21,    22,    23,   246,   140,     0,   138,   139,
     141,     0,    64,     0,     0,     0,   210,     0,     0,    17,
      18,    19,    20,    21,    22,    23,     0,   138,   139,   217,
     218,   219,   220,   221,   222,     0,   265,   266,   267,   268,
     269,   270,   223,  -311,     0,   140,     0,   264,     0,   141,
       0,  -311,  -311,  -311,  -311,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,  -311,     0,    17,    18,    19,
      20,    21,    22,    23,   124,  -311,     0,     0,     0,     0,
     -42,     0,  -311,   -42,    75,   -42,   125,     0,   -42,   -42,
     -42,   -42,     0,     0,   217,   218,   219,   220,   221,   222,
     -42,   265,   266,   267,   268,   269,   270,   223,     0,     0,
       0,     0,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,     0,     0,     0,     0,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   381,     0,     0,     0,     0,
       0,  -166,    64,     0,  -166,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   198,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -166
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-402))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,     5,    90,   131,   192,   162,    92,    14,   380,    32,
     127,   207,   323,     1,   131,   115,   349,     1,    25,     1,
       1,   422,   349,     1,     7,     1,    35,     1,    37,     6,
      39,     1,    41,     1,    43,     6,    45,     1,    47,     1,
       6,     1,   171,     8,    51,    12,     1,   135,   165,    44,
       1,    27,     1,     1,    61,    32,    65,     1,   459,    14,
      69,   106,     1,    70,    28,    47,    32,    33,    56,   157,
     471,    45,    76,    57,   119,    56,   176,    81,    56,     1,
     481,    88,    44,     1,    54,    62,    54,   459,    48,   400,
     423,     6,    43,    59,   103,   102,   423,   104,    37,   108,
     472,    50,    51,    51,    48,   112,   115,    51,   117,   132,
       1,     1,     1,    27,   121,   122,   123,    32,    33,     1,
       7,    43,    44,     1,   101,     7,    92,     1,    10,   106,
      48,     1,    50,    51,   143,   180,     6,     7,     1,     1,
       1,     1,   119,   300,    59,    34,    36,    62,    10,    27,
      41,    11,    39,    27,   120,   132,    56,    39,   354,   247,
      55,   249,   250,   251,    25,    27,   132,   176,   172,    39,
      33,   359,    35,   301,    50,    51,     1,    92,   185,   126,
       1,     1,   159,   283,   301,   208,     7,     1,    13,    54,
       1,   106,    12,    51,   171,     6,     7,     8,   205,   328,
     329,   330,   331,   180,   119,   120,    32,   364,   243,    23,
      73,    74,    75,    76,    77,    78,    79,   132,    39,    28,
       1,    30,   101,   311,     1,     6,     7,     8,    39,     1,
       7,   208,   236,     1,   286,   242,     8,   244,     1,     1,
       1,   327,   208,    11,   344,     7,    62,    10,   338,    12,
      59,    23,     1,    62,    15,    16,    17,    18,    39,     8,
     305,   422,    39,   446,    27,   180,   213,    76,    77,    78,
       1,   278,   358,   423,   283,    84,    25,    39,   378,    10,
     303,    12,     1,    92,   291,   101,   233,     1,   159,     8,
     106,   336,   101,   208,     8,    56,     1,   106,     1,   387,
     345,   110,     1,   119,    23,    10,   172,    12,   117,    23,
     119,    10,    15,    16,    17,    18,     1,   126,   127,     1,
      45,     6,   131,     1,    -1,     1,   303,     9,   305,    11,
     375,    13,     8,     1,   341,   344,    -1,   303,    -1,   286,
       8,    19,    20,    21,    22,   349,    49,    23,    26,     1,
     395,   328,   329,   330,   331,   171,   165,    -1,    10,   336,
      12,   327,     1,     9,   180,    11,     1,    13,   345,   378,
     377,   180,    11,     8,    13,   184,    11,    -1,   325,   424,
     425,   388,     1,    -1,   391,    -1,     1,   394,   303,     8,
     305,   398,   358,     1,     1,    10,   441,    12,   375,    -1,
       8,    -1,   409,    10,   213,    12,    79,    -1,    81,   356,
     357,     1,   327,   420,   421,    -1,   461,     1,   395,   423,
      10,   336,    12,    -1,     8,     1,   373,    -1,     4,    -1,
     345,   438,   133,   134,     1,   136,   443,   444,    -1,     0,
       1,   450,     3,   358,   451,    -1,   450,   424,   425,    -1,
     151,     1,    19,    20,    21,    22,   157,   158,   405,    -1,
     375,   465,    12,   470,   441,    15,    16,    17,    18,   476,
     171,   144,   479,   146,    -1,    -1,    -1,   286,   485,    -1,
     395,    -1,    -1,   430,   461,    -1,    -1,    -1,   435,   305,
      -1,    -1,   301,    -1,   195,    -1,   305,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,   206,    -1,    -1,    -1,   424,
     425,    -1,   328,   329,   330,   331,    -1,    -1,   327,    -1,
     336,     1,    -1,     1,    -1,    -1,   441,   336,    -1,   345,
      10,    11,    12,    13,    12,    -1,   345,    -1,    -1,    -1,
     349,    15,    16,    17,    18,    -1,   461,    -1,    -1,   358,
      -1,   252,   225,   226,   227,   228,   229,   230,   231,   375,
      -1,    -1,   263,   236,   373,    -1,   375,    -1,    -1,    -1,
      59,   328,   329,   330,   331,    -1,    -1,    -1,    -1,   395,
      58,    59,    60,    61,    62,    63,   395,    76,    77,    78,
       1,   292,    -1,    71,    -1,    84,    -1,     8,   271,    -1,
      11,    -1,    -1,    92,    -1,    -1,    -1,    -1,   424,   425,
      -1,    -1,    23,    24,   423,   424,   425,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,   441,   115,    -1,   117,    -1,
      -1,    -1,   441,    -1,    -1,     1,    -1,   126,   127,    -1,
      -1,     7,   131,    -1,    10,   461,    12,    13,    14,    60,
      -1,    -1,   461,    64,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    27,    73,    74,    75,    76,    77,    78,    79,    10,
      -1,    12,    -1,    39,    -1,    41,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    27,   176,    54,    55,
      56,    -1,    -1,    -1,    -1,   184,    -1,    -1,   399,    -1,
      -1,    -1,    -1,    -1,    -1,   378,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,   416,    -1,    58,    59,    60,
      61,    62,    63,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      71,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
       8,    -1,   435,    57,    -1,    58,    59,    60,    61,    62,
      63,    -1,   473,    -1,    -1,    23,    24,   450,    71,    73,
      74,    75,    76,    77,    78,    79,    -1,     1,    -1,    -1,
      -1,    -1,   465,    -1,   283,    -1,    10,   286,    12,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    10,
      11,    12,   301,    27,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,   327,   328,
     329,   330,   331,    -1,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    71,    -1,    60,
     349,    -1,    -1,    64,     1,    -1,    -1,     4,    -1,   358,
       7,     8,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,    25,   378,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    -1,    -1,     1,
      57,    -1,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    73,    74,    75,    76,
      77,    78,    79,    25,    -1,    -1,   435,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    -1,    -1,     1,    57,    -1,     4,    -1,    -1,
       7,     8,     1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    73,    74,    75,    76,    77,    78,    79,    25,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    -1,    -1,     1,
      57,    -1,    -1,    -1,    -1,     7,     8,     1,    -1,    -1,
      -1,     5,     6,     7,    -1,    64,    73,    74,    75,    76,
      77,    78,    79,    25,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    33,
      42,    35,    -1,    -1,    46,     1,    48,    -1,    50,    51,
      52,    53,     8,    -1,     1,    11,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    73,    74,    75,    76,    77,    78,    79,    25,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    42,    43,    44,    -1,    46,
      -1,    48,    -1,    -1,    60,    52,    53,    -1,    64,     1,
      -1,    -1,     4,    -1,    -1,     7,     8,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    39,    40,     8,
      42,     1,    11,    -1,    46,    -1,    48,     7,     8,    -1,
      52,    53,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    39,
      40,    41,    42,    -1,     8,    -1,    46,    11,    48,    -1,
      -1,    60,    52,    53,    -1,    64,     1,    -1,    -1,    23,
      24,    -1,     7,     8,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,     1,    -1,
      64,    46,    -1,    48,     7,     8,    -1,    52,    53,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    39,    40,    -1,    42,
       1,    -1,    -1,    46,    47,    48,     7,     8,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    25,     7,     8,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    -1,    39,    40,
      -1,    42,    -1,    25,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    -1,    -1,    37,    57,    39,    40,    -1,
      42,     1,    -1,    -1,    46,    -1,    48,     7,     8,    -1,
      52,    53,    73,    74,    75,    76,    77,    78,    79,    -1,
       1,    -1,    -1,    -1,    -1,    25,     7,     8,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    39,
      40,    -1,    42,    -1,    25,    45,    46,    -1,    48,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,     1,    -1,    -1,    46,    -1,    48,     7,     8,
      51,    52,    53,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,     8,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      39,    40,    -1,    42,    23,    24,    25,    46,     1,    48,
      -1,    -1,    -1,    52,    53,     8,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    73,    74,    75,    76,    77,    78,
      79,     1,    -1,    -1,    -1,    64,    -1,    -1,     8,    -1,
      -1,    11,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    23,    24,    25,     1,    60,    -1,    -1,
      -1,    64,    -1,     8,    -1,    -1,    11,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,     1,    23,    24,
      25,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    23,
      24,    -1,     1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    12,    -1,    60,     1,    -1,    -1,    64,
      -1,    -1,    -1,     8,    -1,    -1,    11,    -1,    73,    74,
      75,    76,    77,    78,    79,     1,    60,    -1,    23,    24,
      64,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    -1,    23,    24,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,     7,    -1,    60,    -1,     1,    -1,    64,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    73,    74,    75,
      76,    77,    78,    79,     1,    49,    -1,    -1,    -1,    -1,
       7,    -1,    56,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    -1,    -1,    58,    59,    60,    61,    62,    63,
      27,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,     1,     3,    84,    85,    88,     1,    25,
      89,    90,     1,     5,     7,    33,    35,    73,    74,    75,
      76,    77,    78,    79,    92,    93,    94,   161,   163,   166,
     173,   176,   177,   178,   197,   200,   201,   202,   204,   205,
     206,   207,   208,   212,   213,   214,   215,   216,   217,     1,
      39,    82,    83,   178,    86,    83,     1,     4,    87,    83,
       1,     6,    91,     1,     8,   101,   119,   170,     1,   101,
     175,    92,    94,   177,     1,    11,   151,   151,   151,   151,
       1,   151,   211,   211,   151,    83,    82,     1,    96,    99,
     100,   101,   177,    83,     1,    40,    42,    46,    48,    52,
      53,    83,    89,   101,   120,   121,   122,   123,   125,   127,
     128,   138,   139,   142,   143,   144,   148,   149,   154,   177,
     178,   183,   197,   198,     1,    13,   108,   151,     1,    27,
     165,   151,    83,    89,   100,   100,   100,     1,    23,    24,
      60,    64,   100,   101,   151,   162,   190,   192,   193,   194,
     195,   196,   197,   198,     1,    89,   196,   210,   100,    83,
       1,    27,    95,     1,    10,    98,     1,    96,   122,    83,
       9,   151,   179,    83,   121,   100,   151,   196,   219,   100,
      83,   219,     1,   100,   151,   153,   121,    83,    83,    83,
       1,   100,   192,     1,    99,   172,     1,    19,    20,    21,
      22,   102,   103,   104,   106,   107,   172,    94,   177,     1,
      12,   152,   152,    98,   152,   196,   196,    58,    59,    60,
      61,    62,    63,    71,   152,   184,   185,   186,   187,   188,
     189,   191,     1,    27,   209,     1,    98,   152,   152,     1,
     161,    26,   107,   117,   118,    99,     1,   100,   152,   195,
     197,   198,   199,     1,    30,    31,    89,   162,   180,   181,
     182,   196,   196,   219,     1,    65,    66,    67,    68,    69,
      70,   218,     1,    15,    16,    17,    18,    56,   124,   220,
     221,   222,   223,   224,     1,    54,   130,   136,   121,     1,
      49,   146,   100,    83,     1,    14,   109,   109,     1,    27,
     171,    98,   152,    83,   152,    91,    94,     1,   100,   132,
     192,   203,   152,   196,   196,   196,   196,   196,   196,   196,
       1,   192,    89,   196,    83,   108,   110,    83,    98,    98,
      98,    98,   152,     1,   152,   196,    83,   219,   132,     1,
      56,   137,     1,    41,   140,    83,   152,     1,    43,   155,
     157,   158,   107,   172,    94,   121,    98,    95,    97,   111,
     112,   192,     1,    54,   115,   116,    96,     1,   199,   199,
     199,   199,   121,   131,   140,    83,     1,   141,   151,   219,
     121,     1,    89,   100,   102,   103,   105,   159,   160,     1,
      44,   156,     1,    45,   150,    91,     1,    34,   174,   192,
     192,    96,   109,     1,    28,   113,   107,     1,    47,   126,
       1,   100,   133,   192,   121,    83,   219,     1,    50,    51,
     145,   147,   148,    98,    83,    83,    83,   121,    83,   152,
      95,   114,   192,    83,    55,   135,     1,    57,   129,   152,
      83,    83,     1,   145,   147,   160,   121,   121,     1,    37,
     167,   169,   192,     1,   100,   134,   192,   196,    83,   121,
      83,    83,   157,     1,    89,   151,   168,   196,    83,     1,
     145,   148,   121,    89,     1,    36,   164,    83,     1,   145,
       1,   148,   152,    83,    83,   145,    83
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
#line 68 "src/directg.y"
    {erros++;yyerror("Erro do fim de linha");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 78 "src/directg.y"
    {erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 82 "src/directg.y"
    {strcpy(escopo, "global");}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 87 "src/directg.y"
    {erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 100 "src/directg.y"
    {erros++;yyerror("Algoritmo sem nome");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 105 "src/directg.y"
    {erros++;yyerror("Faltando \" INICIO \" ");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 116 "src/directg.y"
    {erros++;yyerror("Faltando \" VAR \" ");}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 129 "src/directg.y"
    {erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 133 "src/directg.y"
    {hashvariavel_inserir(variavel, tipo, escopo, &hashVariavel);}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 140 "src/directg.y"
    {erros++;yyerror("Faltando \",\" para divisao de variaveis");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 153 "src/directg.y"
    {/*sprintf(variavel,"%d",$1);*/}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 155 "src/directg.y"
    {erros++;yyerror("Identificador invalido");}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 159 "src/directg.y"
    {/*tipo="$1";*/}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 173 "src/directg.y"
    {erros++;yyerror("Esperado um numero");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 185 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 190 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 195 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 212 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 221 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 264 "src/directg.y"
    {erros++;yyerror("Erro no bloco logico");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 278 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 287 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 292 "src/directg.y"
    {erros++; yyerror("Erro no bloco ENQUANTO");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 305 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 310 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 320 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 326 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 333 "src/directg.y"
    {erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 343 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 348 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 361 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 367 "src/directg.y"
    {erros++;yyerror("Erro na expressao do ATE");}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 374 "src/directg.y"
    {erros++;yyerror("Erro no bloco REPITA");}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 390 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 395 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 400 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 411 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 420 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 425 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 430 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 435 "src/directg.y"
    {erros++;yyerror("Necessario uma variavel para ESCOLHA");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 442 "src/directg.y"
    {erros++;yyerror("Erro no Bloco de ESCOLHA");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 447 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 452 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 458 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 471 "src/directg.y"
    {erros++;yyerror("Variavel de escolha errada");}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 496 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 501 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 506 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 511 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 518 "src/directg.y"
    {erros++;yyerror("Parametro de retorno errado");}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 527 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 538 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 547 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 552 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 557 "src/directg.y"
    {erros++;yyerror("Erro no BlocoProcedimento");}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 587 "src/directg.y"
    {erros++;yyerror("Valor atribuido de forma errada");}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 592 "src/directg.y"
    {erros++;yyerror("Esperado \"<-\"");}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 629 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 674 "src/directg.y"
    {erros++;yyerror("Funcao inexistente");}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 686 "src/directg.y"
    {erros++;yyerror("Erro de assinatura de funcao");}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 696 "src/directg.y"
    {erros++;yyerror("Erro na funcao Compr()");}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 709 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 718 "src/directg.y"
    {erros++;yyerror("Erro no funcao Maiusc");}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 727 "src/directg.y"
    {erros++;yyerror("Erro na funcao Raiz");}
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 732 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 742 "src/directg.y"
    {erros++;yyerror("Parametro improprio para funcao escreva");}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 747 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 764 "src/directg.y"
    {erros++;yyerror("Erro na funcao escreval");}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 773 "src/directg.y"
    {erros++;yyerror("Erro na funcao leia (Antigo paçoca)");}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 783 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;



/* Line 1806 of yacc.c  */
#line 2730 "directg.tab.c"
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
#line 819 "src/directg.y"


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
				printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:%s\n", minhaPilha.Topo->Item.errMsg,
                                         minhaPilha.Topo->Item.lineNo, minhaPilha.Topo->Item.errNo);
                        	Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
			}
			else {
				Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
				itemTopoNulo = 0;
			}
		}		
	}
	return 0;
}

int yywrap(void) {
  return 1;
}


