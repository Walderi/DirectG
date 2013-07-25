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
#define YYLAST   1769

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  173
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNRULES -- Number of states.  */
#define YYNSTATES  513

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
     145,   147,   149,   151,   153,   155,   157,   161,   165,   167,
     169,   171,   173,   175,   177,   180,   182,   186,   191,   196,
     198,   200,   202,   205,   208,   209,   212,   213,   217,   219,
     221,   224,   225,   229,   232,   235,   237,   239,   241,   243,
     245,   247,   249,   251,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   292,
     299,   301,   303,   305,   314,   316,   318,   320,   322,   326,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     359,   370,   379,   391,   404,   414,   416,   418,   420,   422,
     424,   426,   428,   430,   432,   433,   438,   445,   447,   449,
     451,   453,   458,   459,   466,   468,   469,   475,   476,   478,
     480,   482,   484,   485,   486,   487,   494,   496,   498,   500,
     502,   504,   506,   508,   510,   512,   514,   515,   516,   517,
     518,   519,   537,   539,   541,   543,   547,   549,   551,   554,
     555,   561,   563,   565,   567,   571,   575,   577,   579,   580,
     581,   587,   589,   591,   593,   594,   600,   602,   603,   604,
     615,   617,   620,   623,   625,   627,   629,   631,   633,   635,
     637,   639,   640,   645,   647,   649,   651,   653,   655,   657,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   683,   687,   691,   695,   699,   703,   706,   710,   714,
     716,   718,   720,   722,   724,   726,   728,   730,   734,   739,
     741,   745,   747,   751,   753,   757,   759,   763,   765,   770,
     775,   777,   779,   788,   790,   792,   797,   799,   804,   805,
     808,   810,   811,   813,   816,   822,   826,   834,   838,   842,
     844,   846,   849,   851,   854,   856,   857,   863,   865,   867,
     869,   871,   873,   875,   877,   881,   885,   889,   891,   893,
     895,   897,   899,   901,   903,   905
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
      -1,    21,    -1,   108,    -1,   109,    -1,    22,    -1,   108,
      -1,   109,    -1,   110,    -1,   112,    -1,     1,    -1,    13,
      -1,     1,    -1,    14,    -1,     1,    -1,   114,   117,   115,
      -1,   118,   119,   120,    -1,   219,    -1,    28,    -1,     1,
      -1,   219,    -1,    54,    -1,     1,    -1,   121,   113,    -1,
      26,    -1,   123,   116,   122,    -1,   107,   114,   106,   115,
      -1,   107,   114,   219,   115,    -1,    52,    -1,   128,    -1,
     203,    -1,   203,   127,    -1,   128,   127,    -1,    -1,    90,
      83,    -1,    -1,   209,   129,    83,    -1,   131,    -1,   151,
      -1,   126,    83,    -1,    -1,   224,   130,    83,    -1,   225,
      83,    -1,    83,   128,    -1,   146,    -1,   135,    -1,   150,
      -1,    56,    -1,     1,    -1,    46,    -1,    47,    -1,     1,
      -1,   133,   247,   132,    83,   127,   134,    83,    -1,    53,
      -1,    57,    -1,     1,    -1,    54,    -1,     1,    -1,   148,
      -1,   223,    -1,   219,    -1,   223,    -1,   219,    -1,   106,
      -1,   219,    -1,   223,    -1,    55,    -1,   138,   140,   139,
     141,    -1,   138,   140,   139,   141,   143,   142,    -1,     1,
      -1,    56,    -1,     1,    -1,   136,   106,   144,   145,    83,
     127,   137,    83,    -1,    40,    -1,    41,    -1,     1,    -1,
     247,    -1,   159,   247,   160,    -1,   147,    83,   127,   148,
     149,    83,    -1,   156,    -1,   163,    -1,    48,    -1,    51,
      -1,     1,    -1,    49,    -1,     1,    -1,    50,    -1,     1,
      -1,   152,   247,   154,    83,   127,   153,    83,    -1,   152,
     247,   154,    83,   127,   155,    83,   127,   153,    83,    -1,
     152,   247,   154,    83,   127,   156,   153,    83,    -1,   152,
     247,   154,    83,   127,   155,    83,   127,   156,   153,    83,
      -1,   152,   247,   154,    83,   127,   156,   155,    83,   127,
     156,   153,    83,    -1,   152,   247,   154,    83,   127,   155,
     156,   153,    83,    -1,     1,    -1,    42,    -1,    45,    -1,
       1,    -1,    11,    -1,     1,    -1,    12,    -1,     1,    -1,
     106,    -1,    -1,   159,   162,   106,   160,    -1,   157,   161,
      83,   168,   158,    83,    -1,    43,    -1,     1,    -1,    44,
      -1,     1,    -1,   164,   171,    83,   127,    -1,    -1,   164,
     171,    83,   127,   167,   166,    -1,     1,    -1,    -1,   166,
     165,   169,    83,   127,    -1,    -1,   106,    -1,    90,    -1,
     111,    -1,   170,    -1,    -1,    -1,    -1,   170,   172,   173,
     102,   174,   171,    -1,   180,    -1,   200,    -1,   224,    -1,
     225,    -1,   224,    -1,    35,    -1,    36,    -1,     1,    -1,
      27,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
     181,   189,   179,   113,   182,    83,   183,    97,    92,   127,
     188,    83,   184,   178,   185,    83,    -1,     1,    -1,    37,
      -1,     1,    -1,   159,    90,   160,    -1,    90,    -1,   223,
      -1,   186,   187,    -1,    -1,   107,   190,   159,   192,   160,
      -1,     1,    -1,    27,    -1,     1,    -1,   193,   191,   113,
      -1,   192,   102,   192,    -1,     1,    -1,   106,    -1,    -1,
      -1,   106,   194,   102,   195,   193,    -1,    33,    -1,    34,
      -1,     1,    -1,    -1,   107,   199,   159,   192,   160,    -1,
       1,    -1,    -1,    -1,   196,   201,   198,   202,    83,    97,
      92,   127,   197,    83,    -1,   204,    -1,   204,   203,    -1,
       7,    83,    -1,     9,    -1,    31,    -1,    30,    -1,    90,
      -1,   223,    -1,   176,    -1,   206,    -1,   207,    -1,    -1,
     107,   210,   205,   208,    -1,    58,    -1,    60,    -1,    61,
      -1,    59,    -1,    71,    -1,    63,    -1,    60,    -1,    62,
      -1,    23,    -1,     1,    -1,    24,    -1,    64,    -1,   219,
      -1,   220,    -1,   221,    -1,   222,    -1,   106,    -1,   223,
     211,   223,    -1,   223,   212,   223,    -1,   223,   213,   223,
      -1,   223,   214,   223,    -1,   223,   215,   223,    -1,   223,
     216,   223,    -1,   217,   223,    -1,   223,   218,   223,    -1,
     159,   223,   160,    -1,   176,    -1,   228,    -1,   231,    -1,
     233,    -1,   235,    -1,   240,    -1,   242,    -1,   244,    -1,
     107,   159,   160,    -1,   107,   159,   226,   160,    -1,   106,
      -1,   106,   102,   226,    -1,   222,    -1,   222,   102,   226,
      -1,   225,    -1,   225,   102,   226,    -1,   224,    -1,   224,
     102,   226,    -1,    78,    -1,   227,   159,   106,   160,    -1,
     227,   159,    90,   160,    -1,    77,    -1,   140,    -1,   229,
     159,   106,   102,   230,   102,   219,   160,    -1,     1,    -1,
      79,    -1,   232,   159,   106,   160,    -1,    76,    -1,   234,
     159,   223,   160,    -1,    -1,    27,   219,    -1,     1,    -1,
      -1,    90,    -1,   223,   236,    -1,   237,   102,   223,    98,
     219,    -1,   237,   102,   223,    -1,   237,   102,   223,    98,
     219,    98,   219,    -1,   237,   102,    90,    -1,   159,   237,
     160,    -1,     1,    -1,    74,    -1,   239,   238,    -1,    73,
      -1,   241,   238,    -1,    75,    -1,    -1,   243,   159,   245,
     106,   160,    -1,    70,    -1,    65,    -1,    66,    -1,    67,
      -1,    68,    -1,    69,    -1,     1,    -1,   223,   246,   223,
      -1,   247,   252,   247,    -1,   159,   247,   160,    -1,   106,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,   248,
      -1,   249,    -1,   250,    -1,   251,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   126,   129,   130,   131,   135,   136,   140,
     145,   149,   149,   149,   153,   154,   158,   162,   167,   168,
     172,   173,   177,   177,   178,   178,   179,   184,   185,   188,
     189,   190,   191,   196,   197,   200,   201,   206,   201,   207,
     208,   212,   213,   217,   225,   231,   225,   239,   243,   244,
     245,   249,   253,   258,   263,   264,   269,   274,   275,   276,
     277,   278,   286,   287,   291,   292,   296,   300,   304,   308,
     309,   313,   317,   318,   322,   326,   330,   334,   335,   342,
     346,   347,   348,   349,   352,   353,   354,   354,   355,   356,
     357,   358,   358,   359,   360,   367,   368,   369,   374,   375,
     379,   383,   384,   388,   397,   401,   402,   406,   407,   411,
     415,   416,   421,   422,   427,   428,   429,   434,   438,   439,
     440,   444,   445,   449,   454,   458,   459,   463,   464,   469,
     476,   477,   481,   485,   486,   490,   491,   495,   496,   502,
     503,   504,   505,   506,   507,   508,   513,   517,   518,   522,
     523,   527,   528,   531,   532,   532,   537,   542,   543,   547,
     548,   552,   553,   553,   554,   560,   560,   563,   564,   565,
     566,   571,   572,   572,   572,   572,   576,   577,   578,   582,
     583,   587,   591,   592,   596,   597,   601,   601,   607,   608,
     608,   601,   609,   613,   614,   618,   619,   620,   625,   629,
     629,   630,   634,   635,   639,   640,   641,   645,   652,   658,
     652,   662,   666,   667,   671,   671,   672,   676,   676,   676,
     684,   685,   689,   693,   697,   702,   707,   708,   709,   710,
     711,   716,   716,   721,   726,   731,   735,   740,   745,   749,
     753,   758,   759,   763,   767,   771,   772,   773,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     792,   793,   794,   795,   796,   797,   798,   802,   803,   808,
     809,   810,   811,   812,   813,   814,   815,   820,   824,   825,
     830,   834,   838,   839,   843,   847,   852,   856,   860,   861,
     862,   865,   866,   867,   868,   869,   870,   871,   876,   877,
     881,   885,   889,   894,   899,   903,   903,   908,   909,   910,
     911,   912,   913,   914,   918,   919,   920,   921,   926,   930,
     934,   938,   942,   943,   944,   945
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
     107,   108,   109,   110,   111,   111,   112,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     119,   120,   121,   121,   122,   123,   124,   125,   125,   126,
     127,   127,   127,   127,   128,   128,   129,   128,   128,   128,
     128,   130,   128,   128,   128,   131,   131,   131,   132,   132,
     133,   134,   134,   135,   136,   137,   137,   138,   138,   139,
     140,   140,   141,   141,   142,   142,   142,   143,   144,   144,
     144,   145,   145,   146,   147,   148,   148,   149,   149,   150,
     151,   151,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   157,   158,   158,   159,
     159,   160,   160,   161,   162,   161,   163,   164,   164,   165,
     165,   166,   167,   166,   166,   169,   168,   170,   170,   170,
     170,   171,   172,   173,   174,   171,   175,   175,   175,   176,
     176,   177,   178,   178,   179,   179,   181,   182,   183,   184,
     185,   180,   180,   186,   186,   187,   187,   187,   188,   190,
     189,   189,   191,   191,   192,   192,   192,   193,   194,   195,
     193,   196,   197,   197,   199,   198,   198,   201,   202,   200,
     203,   203,   204,   205,   206,   207,   208,   208,   208,   208,
     208,   210,   209,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   219,   220,   221,   222,   222,   222,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   226,   226,   226,   226,   226,   226,   227,   228,   228,
     229,   230,   231,   231,   232,   233,   234,   235,   236,   236,
     236,   237,   237,   237,   237,   237,   237,   237,   238,   238,
     239,   240,   241,   242,   243,   245,   244,   246,   246,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   248,   249,
     250,   251,   252,   252,   252,   252
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
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     4,     4,     1,
       1,     1,     2,     2,     0,     2,     0,     3,     1,     1,
       2,     0,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       1,     1,     1,     8,     1,     1,     1,     1,     3,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
      10,     8,    11,    12,     9,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     6,     1,     1,     1,
       1,     4,     0,     6,     1,     0,     5,     0,     1,     1,
       1,     1,     0,     0,     0,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     0,     0,
       0,    17,     1,     1,     1,     3,     1,     1,     2,     0,
       5,     1,     1,     1,     3,     3,     1,     1,     0,     0,
       5,     1,     1,     1,     0,     5,     1,     0,     0,    10,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     4,     4,
       1,     1,     8,     1,     1,     4,     1,     4,     0,     2,
       1,     0,     1,     2,     5,     3,     7,     3,     3,     1,
       1,     2,     1,     2,     1,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,    11,     0,     0,     0,    28,
      27,     0,     0,     0,     0,     0,   220,     6,     4,     0,
       3,     5,    19,    17,    18,    12,   222,    15,    14,    16,
       0,    21,     0,   211,   181,   302,   300,   304,   286,   280,
     277,   284,    22,     0,   186,   176,   217,   177,   178,     0,
     260,     0,   261,     0,   262,     0,   263,     0,   264,     0,
     265,     0,   266,    26,     0,   221,     8,     0,    50,    48,
      30,     0,    43,     0,    49,     0,    20,     0,    21,    24,
       0,     0,   150,   149,     0,     0,     0,     0,   299,     0,
     301,   303,   305,    13,    34,    33,     0,     0,    63,    62,
       0,    40,     6,   124,   146,   100,   132,    79,   104,     0,
       0,     0,     0,    23,     0,    88,     0,    96,     0,    95,
       0,    97,    89,     0,   130,     0,   131,     0,     5,    86,
      91,     0,     0,    50,     0,     0,    50,     0,   218,     0,
       0,     0,     0,    50,   241,   243,   239,   244,   249,     0,
       0,   259,     0,   245,   246,   247,   248,     0,   180,   179,
     292,     0,     0,     0,    61,    51,    52,    53,    56,    75,
      57,    58,    59,    60,    36,     0,     0,    42,    41,    45,
      50,     0,     0,    94,    85,   150,     0,     0,    90,    83,
     249,     0,     0,     0,     0,     0,     0,    50,   153,   154,
       0,    82,     0,     0,    93,    25,     0,   185,   184,     0,
       0,     0,   152,   151,   279,   278,     0,   285,     0,   256,
     233,   236,   234,   235,   240,   238,   237,   287,     0,     0,
       0,     0,     0,     0,     0,   290,     0,   293,   152,     0,
     298,     0,     0,     0,     0,     0,     0,    65,    64,    77,
      78,   152,     0,   267,     0,     0,     0,     0,   223,     0,
       0,     0,   313,   308,   309,   310,   311,   312,   307,     0,
      99,   318,   319,   320,   321,    98,     0,   322,   323,   324,
     325,     0,   108,   107,     0,     0,     0,   136,   135,     0,
       0,     0,    87,    92,     0,   187,     0,     0,   281,   245,
     110,     0,   258,   250,   251,   252,   253,   254,   255,   257,
     242,   289,   297,     0,   306,    37,     0,     0,    68,    73,
      72,     0,    76,    39,    46,     0,     0,     0,     0,   268,
     225,   224,   226,   259,   229,   230,   232,   227,   152,   316,
     314,     0,   315,     0,   122,   121,     0,   126,   125,     0,
       0,     0,   158,   157,     0,     0,     0,    50,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    70,
      69,     0,    74,    50,   270,   272,   276,   274,     0,     0,
     109,     0,     0,     0,   127,     0,   155,   169,   168,    54,
      55,   170,   171,     0,   160,   159,   165,   148,   147,     0,
       0,     0,   200,   203,   202,     0,   188,   215,     0,    32,
       0,     0,    38,    67,    71,   102,   101,     0,   118,   245,
     112,     0,   129,     0,   134,   137,   133,     0,     0,     0,
     173,     0,     0,   156,   209,     0,   204,     0,     0,   282,
       0,   103,   117,     0,   106,   105,     0,   316,   139,     6,
       0,     0,   134,     0,     0,     0,   161,     0,     0,     0,
     213,   212,     0,   296,   249,   119,   245,   116,   123,     0,
     134,     0,   141,     0,   174,     0,   166,   210,     0,   219,
     134,     0,     0,   144,     0,     0,   163,     0,   140,     0,
     145,     0,   175,   194,   193,     0,     0,   142,     0,   196,
       0,   198,   197,   189,   143,     0,     0,   195,   183,   182,
     190,     0,   191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,   109,     5,     6,     8,    67,    29,     7,
     110,    25,    42,    12,    77,   132,    13,    14,    96,    70,
     242,   367,   401,    71,    97,   246,   148,   149,   170,   171,
     172,   391,   173,   174,   100,   249,   244,   316,   317,   371,
     413,   321,   322,   175,   176,    74,   112,   113,   114,   202,
     203,   115,   276,   116,   417,   117,   118,   446,   284,   379,
     298,   418,   465,   443,   285,   346,   119,   120,   349,   382,
     121,   122,   123,   427,   289,   428,   124,   125,   399,   150,
     302,   200,   290,   126,   354,   396,   355,   475,   356,   432,
     392,   393,   430,   455,   485,    43,   151,    44,   510,   209,
      45,    80,   361,   437,   506,   511,   495,   501,   496,   135,
     206,   405,   359,   360,   400,   458,    46,   462,   138,   210,
      47,    81,   211,   127,    21,   259,   334,   335,   336,   129,
     187,   228,   229,   230,   231,   232,   233,   152,   234,   153,
     154,   155,   156,   192,   158,   159,   257,    49,    50,    51,
     301,    52,    53,    54,    55,    56,   237,   162,    90,    57,
      58,    59,    60,    61,    62,   163,   269,   193,   277,   278,
     279,   280,   281
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -406
static const yytype_int16 yypact[] =
{
    -406,   259,  -406,  -406,  -406,  -406,   740,   171,   156,  -406,
    -406,   171,   301,   171,   164,   740,   127,  -406,  -406,   755,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
     953,    28,   171,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,   262,  -406,  -406,  -406,  -406,  -406,   245,
    -406,   245,  -406,   245,  -406,   245,  -406,   275,  -406,   275,
    -406,   245,  -406,  -406,   164,  -406,  -406,   171,  -406,  -406,
    -406,   140,    44,  1215,  -406,  1495,  -406,  1055,  -406,  -406,
     310,   386,  -406,  -406,   263,   387,   387,   843,  1402,  1435,
    -406,  -406,  -406,  -406,  -406,  -406,   207,    47,  -406,  -406,
     213,  -406,   396,  -406,  -406,  -406,  -406,  -406,  -406,   650,
     171,   346,   171,  -406,   835,  -406,   843,  -406,   387,  -406,
     171,  -406,  -406,   843,  -406,   332,  -406,   890,   127,  -406,
    -406,   171,  1055,   128,   335,   165,   122,   360,  -406,   277,
     277,    47,   277,   642,  -406,  -406,  -406,  -406,  -406,  1635,
     843,  -406,   843,  -406,  -406,  -406,  -406,   319,  -406,  -406,
    -406,   497,   322,   387,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,   254,   171,  -406,  -406,  -406,
    -406,   217,   217,  -406,  -406,   222,  1539,   176,  -406,  -406,
    1170,   843,  1653,    27,    34,  1097,    52,   178,  -406,  -406,
     171,  -406,   171,   171,  -406,  -406,   245,  -406,  -406,   273,
     245,   171,  -406,  -406,  -406,  -406,   843,  -406,   319,   564,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,   843,   843,
     843,   843,   843,   843,   843,  -406,    36,  -406,   991,  1481,
    -406,   277,   171,    36,    46,  1495,   387,  -406,  -406,  -406,
    -406,   504,   364,  -406,   390,   474,   524,   277,  -406,  1460,
    1530,   309,  -406,  -406,  -406,  -406,  -406,  -406,  -406,   843,
    -406,  -406,  -406,  -406,  -406,  -406,   171,  -406,  -406,  -406,
    -406,   843,   160,  -406,   843,    31,    75,  -406,  -406,   171,
     387,    29,  -406,  -406,   398,  -406,   398,   421,  -406,   113,
     564,    47,  -406,   564,   564,   564,   564,   564,   564,   564,
    -406,  -406,  -406,  1698,  -406,  -406,   217,   135,  -406,  -406,
    -406,   273,  -406,  -406,  -406,   540,   540,   540,   540,  -406,
    -406,  -406,  -406,   181,  -406,  -406,  -406,   564,  1556,  -406,
     564,  1116,   570,    75,  -406,  -406,   171,  -406,  -406,   843,
     945,   277,    11,  -406,   265,    49,    65,   220,   281,   322,
     174,   171,   322,   262,   421,    36,    36,  1495,  -406,  -406,
    -406,    36,  -406,  -406,  -406,  -406,  -406,  -406,    26,   843,
    -406,  1158,   171,   843,   570,    48,  -406,  -406,  -406,  -406,
    -406,  -406,   287,   171,  -406,  -406,  -406,  -406,  -406,   171,
      47,   398,  -406,  -406,  -406,   273,  -406,  -406,  1213,  -406,
     277,   190,  -406,  -406,  -406,  -406,  -406,   171,   251,    35,
     564,    25,  -406,   309,   406,  -406,  -406,   171,   125,    57,
    -406,  1000,   171,  -406,  -406,   561,  -406,   421,   124,  -406,
      36,  -406,  -406,   843,  -406,  -406,   171,   183,  -406,  -406,
    1255,    30,  -406,   171,   171,    47,   276,  1271,   387,   262,
    -406,  -406,   171,  -406,    39,  -406,    50,   564,  -406,    61,
    -406,   171,  -406,  1356,  -406,    29,  -406,  -406,  1314,  -406,
     286,   171,    30,  -406,    70,   265,  -406,    74,  -406,   171,
    -406,    30,  -406,  -406,  -406,  1481,   171,  -406,   171,  -406,
    1481,  -406,   564,  -406,  -406,   277,   132,  -406,  -406,  -406,
    -406,   171,  -406
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,  -406,    -7,  -406,  -406,  -406,  -406,  -406,  -406,
      -5,  -406,   -35,   326,  -406,  -406,  -406,   -14,  -290,   -68,
    -406,  -406,    -3,    96,  -406,  -406,   383,    62,  -341,  -332,
    -406,  -406,  -406,  -193,   187,  -171,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,    92,   242,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
      84,  -406,  -406,  -406,  -406,  -406,  -406,  -406,    40,  -406,
    -406,  -406,  -406,  -405,  -406,   -57,  -365,  -406,  -406,   154,
    -101,  -406,  -406,  -406,  -406,  -406,   -90,  -406,  -406,  -406,
    -406,   -92,  -406,  -406,  -406,  -406,   142,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -279,   -50,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,    -1,     3,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,   201,
    -406,  -406,  -176,   361,   -12,   203,   271,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,   355,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -102,  -406,  -406,
    -406,  -406,  -406
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -318
static const yytype_int16 yytable[] =
{
      20,    64,    48,    24,    26,    15,    30,   101,    79,    16,
     254,   250,    66,   389,    15,    65,   295,   362,    16,    16,
     429,   196,   390,   366,   453,    76,   444,   415,   270,    75,
     352,   470,   344,    16,  -192,   282,  -113,   310,   214,   215,
    -114,   217,   271,   272,   273,   274,   471,   319,   177,   424,
     394,  -115,    48,   287,   -44,  -164,   227,   178,   452,   144,
      93,   240,   480,   451,   481,   130,   397,   271,   272,   273,
     274,   490,   353,   416,    75,   493,   347,   489,    16,   139,
     128,   426,   445,   275,   160,   253,   498,   345,   283,   261,
    -113,  -113,    73,   395,   179,  -114,   106,   130,   425,   426,
     320,   288,   130,   184,   482,   188,  -115,   425,   426,   106,
     398,   494,   426,   195,  -111,   130,   348,   128,   106,   491,
     130,   440,   435,  -111,   204,   460,   449,    65,   372,  -216,
     128,    16,    11,   508,    11,   128,   369,    73,   216,   111,
     314,    94,   134,   137,   389,   368,    73,    73,    73,   254,
     254,   254,   254,   390,  -111,  -201,   329,    22,   461,   239,
     339,  -216,    73,   370,    18,    31,   207,    95,   509,   245,
      32,   111,    17,   106,   255,   403,   111,   323,    11,   342,
      73,    23,  -228,   130,  -128,   258,  -150,    73,  -228,   111,
    -128,    94,   208,   291,   111,   292,   293,    33,   128,    34,
    -294,   404,  -294,    84,   297,    85,   189,    86,   164,    87,
      18,    89,   436,    89,   180,    92,  -120,    95,   247,   201,
    -228,    69,  -128,   -63,   205,    73,   165,   166,   167,   168,
     -63,   248,  -206,   169,   312,   315,   144,    35,    36,    37,
      38,    39,    40,    41,    75,   -63,    82,   384,    16,   325,
     386,   326,   327,   328,   332,    98,    83,   111,   402,     2,
       3,   407,     4,    78,    68,   186,    68,    99,    32,   341,
     191,    69,  -167,    69,   164,  -167,    88,   191,   212,   199,
     131,   423,   350,   363,   165,   166,    83,   286,    23,   213,
      23,  -208,   165,   166,   167,   168,   364,  -172,   365,   412,
      16,   182,    27,   186,  -167,    28,   442,    73,    73,   439,
     212,   133,   131,   255,   255,   255,   255,   131,    69,  -162,
     212,   213,   447,   238,   271,   272,   273,   274,   408,   130,
     131,   213,   178,   197,   213,   131,    98,  -145,   130,   381,
      69,    63,   324,    83,   128,   191,  -199,   185,    99,   387,
     409,   183,    73,   128,   406,  -231,    73,    83,    73,    99,
     294,    98,   243,   364,   296,   177,    75,    16,   343,   130,
      16,  -214,   454,    99,   178,   422,  -269,   220,   221,   222,
     223,   224,   225,   380,   128,   486,   431,   136,    68,   256,
     226,   177,   433,   492,    69,    69,   130,   434,   131,   357,
     178,   333,  -271,   111,   507,   -50,    69,   -50,   477,   -50,
     441,   128,   111,    72,    91,     0,    73,   299,     0,   130,
     448,   450,     9,   459,   478,   457,    10,   -29,    11,    73,
       0,     0,     0,   378,   128,   191,   364,   311,   130,   468,
      16,     0,   385,   111,   318,   130,   472,   473,   157,     0,
     161,     0,   474,   128,  -138,   479,  -145,  -145,    72,     0,
     128,   130,     0,    73,   483,     0,   130,   140,   141,   142,
     111,     0,     0,   421,   488,   177,   128,     0,     0,     0,
     387,   128,   497,   181,   178,   299,  -275,     0,     0,   503,
     499,   504,     0,   111,     0,   505,     0,     0,   235,   190,
     438,   194,     0,   383,   512,   -50,   190,  -288,   198,  -288,
       0,   218,   111,   219,   -50,   -50,   -50,   -50,     0,   111,
      73,     0,     0,   456,   236,   177,     0,     0,   256,   256,
     256,   256,     0,     0,   178,   111,  -273,   191,     0,     0,
     111,   373,   469,     0,   131,     0,   241,    73,    69,   476,
       0,     0,   260,   131,     0,   220,   221,   222,   223,   224,
     225,     0,   177,   144,   145,   484,   410,   411,   226,   252,
     487,   178,   414,  -205,   190,     0,     0,   300,     0,     0,
     419,     0,     0,     0,   131,   271,   272,   273,   274,   303,
     304,   305,   306,   307,   308,   309,   374,   375,   376,   377,
     313,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,   131,     0,    35,    36,    37,    38,    39,    40,    41,
     337,     0,   220,   221,   222,   223,   224,   225,    72,    72,
     340,     0,     0,     0,   131,   226,     0,     0,     0,     0,
       0,   463,     0,     0,   466,   300,     0,     0,     0,   500,
    -150,   102,     0,   131,   -84,     0,     0,    11,    69,     0,
     131,     0,     0,     0,   190,  -150,  -150,  -150,     0,     0,
       0,     0,     0,   351,     0,    23,   131,   358,     0,   358,
       0,   131,     0,     0,   -84,     0,     0,   -84,     0,    18,
     103,   -84,   104,   -84,   -84,   -84,   105,   -84,   106,     0,
     -84,   -84,   107,   108,     0,     0,  -150,   -84,   252,   252,
     252,   252,     0,     0,     0,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,   190,     0,     0,     0,     0,   388,     0,     0,
     420,     9,     0,     0,   260,    10,   -29,    11,     0,     0,
      72,     0,     0,     0,     0,    -7,    17,     0,    -7,    -7,
      -7,    -7,    11,    -7,     0,     0,   190,     0,     0,     0,
       0,     0,     0,   -29,     0,   -29,     0,     0,     0,     0,
      -7,     0,     0,     0,   358,     0,     0,     0,    -7,    -7,
      -7,    -7,    -7,     0,    18,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   467,    -7,    -7,    -7,    -7,     0,
       0,     0,    -7,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,   464,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,   102,     0,     0,   -80,
       0,   358,    11,    69,   143,     0,     0,     0,     0,     0,
       0,    69,     0,     0,    83,     0,   502,     0,     0,     0,
      23,   218,     0,     0,     0,     0,   144,   145,   388,   -80,
       0,     0,   -80,     0,    18,   103,   -80,   104,   -80,   -80,
     -80,   105,   -80,   106,     0,   -80,   -80,   107,   108,     0,
       0,   102,   -80,     0,   -81,     0,     0,    11,    69,     0,
       0,     0,     0,   146,     0,     0,     0,   147,    35,    36,
      37,    38,    39,    40,    41,    23,    35,    36,    37,    38,
      39,    40,    41,     0,   -81,     0,     0,   -81,     0,    18,
     103,   -81,   104,   -81,   -81,   -81,   105,   -81,   106,     0,
     -81,   -81,   107,   108,     0,     0,   102,   -81,     0,     0,
       0,     0,    11,    69,    68,     0,     0,     0,     0,   -31,
      11,    69,     0,    35,    36,    37,    38,    39,    40,    41,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   103,   -31,   104,   -31,     0,
       0,   105,   -42,   106,     0,   -84,   -84,   107,   108,   -42,
       0,   102,   -42,     0,     0,     0,     0,    11,    69,     0,
       0,     0,     0,     0,   -42,   -42,   -42,     0,    35,    36,
      37,    38,    39,    40,    41,    23,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,     0,    18,
     103,     0,   104,   -84,   -84,     0,   105,     0,   106,     0,
       0,   -42,   107,   108,     0,   -42,   102,     0,     0,   -84,
       0,     0,    11,    69,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,    35,    36,    37,    38,    39,    40,    41,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   103,     0,   104,   102,     0,
       0,   105,     0,   106,    11,    69,     0,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,    23,    11,    69,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,     0,    18,   103,   -84,   104,
       0,    23,     0,   105,     0,   106,     0,     0,     0,   107,
     108,     0,     0,     0,     0,    18,   103,     0,   104,   102,
       0,     0,   105,   -84,   106,    11,    69,     0,   107,   108,
      35,    36,    37,    38,    39,    40,    41,  -317,     0,     0,
       0,     0,     0,    23,     0,  -317,  -317,  -317,  -317,    35,
      36,    37,    38,    39,    40,    41,     0,    18,   103,     0,
     104,     0,     0,     0,   105,     0,   106,     0,     0,  -317,
     107,   108,     0,     0,   102,   -84,    98,     0,     0,  -317,
      11,    69,   -47,     0,     0,   -47,  -317,   -47,    99,   -47,
       0,    35,    36,    37,    38,    39,    40,    41,    23,     0,
       0,     0,   -47,     0,     0,     0,     0,   -84,     0,     0,
       0,     0,    18,   103,   -47,   104,   102,     0,     0,   105,
       0,   106,    11,    69,     0,   107,   108,     0,     0,   -47,
       0,     0,   102,     0,     0,     0,     0,     0,    11,    69,
      23,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,    18,   103,    23,   104,     0,     0,
       0,   105,     0,   106,     0,     0,   -84,   107,   108,     0,
      18,   103,     0,   104,     0,   102,   -84,   105,     0,   106,
       0,    11,    69,   107,   108,     0,     0,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,    23,
       0,     0,     0,     0,    35,    36,    37,    38,    39,    40,
      41,   -84,     0,    18,   103,     0,   104,   102,     0,     0,
     105,     0,   106,    11,    69,     0,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,     0,    18,   103,     0,   104,     0,
       0,     0,   105,  -150,   106,     0,     0,     0,   107,   108,
    -150,     0,  -150,  -150,  -150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -150,  -150,  -150,     0,    35,
      36,    37,    38,    39,    40,    41,   143,     0,     0,     0,
       0,     0,     0,    69,     0,  -291,    83,  -291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
      23,   143,  -150,     0,     0,     0,  -150,     0,    69,     0,
       0,    83,     0,     0,     0,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   143,   144,   145,    23,     0,     0,     0,    69,
     330,   331,    83,     0,     0,   146,    68,     0,     0,   147,
       0,   -35,    11,    69,   144,   145,    23,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
     146,     0,     0,     0,   147,     0,     0,     0,   -35,     0,
     -35,   338,     0,    35,    36,    37,    38,    39,    40,    41,
     251,   146,   213,     0,     0,   147,     0,    69,     0,     0,
       0,   213,     0,     0,    35,    36,    37,    38,    39,    40,
      41,     0,   144,   145,  -313,     0,     0,  -313,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,  -313,
    -313,     0,     0,     0,     0,     0,     0,     0,   220,   221,
     222,   223,   224,   225,     0,   263,   264,   265,   266,   267,
     268,   226,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,     0,
    -313,     0,     0,     0,     0,     0,     0,     0,     0,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,   185,     0,     0,     0,
       0,     0,   -47,     0,     0,   -47,    83,   -47,    99,     0,
     -47,   -47,   -47,   -47,   262,     0,     0,     0,     0,     0,
       0,     0,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,     0,   -47,     0,     0,     0,
       0,     0,     0,     0,   -47,     0,     0,     0,     0,     0,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,    94,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,  -295,     0,
    -295,   220,   221,   222,   223,   224,   225,     0,   263,   264,
     265,   266,   267,   268,   226,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,   221,   222,   223,
     224,   225,     0,     0,     0,     0,     0,     0,     0,   226
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-406))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    15,    14,     8,    11,     6,    13,    75,    43,     6,
     186,   182,    19,   354,    15,    16,   209,   296,    15,    16,
     385,   123,   354,   313,   429,    32,     1,     1,     1,    30,
       1,     1,     1,    30,     6,     1,     1,     1,   139,   140,
       1,   142,    15,    16,    17,    18,   451,     1,     1,     1,
       1,     1,    64,     1,    10,    44,   157,    10,     1,    23,
      67,   162,     1,   428,   469,    77,     1,    15,    16,    17,
      18,     1,    43,    47,    75,     1,     1,   482,    75,    84,
      77,    51,    57,    56,    89,   186,   491,    56,    54,   191,
      55,    56,    30,    44,    97,    56,    48,   109,    50,    51,
      54,    49,   114,   110,   469,   112,    56,    50,    51,    48,
      45,    37,    51,   120,     1,   127,    41,   114,    48,   484,
     132,   411,   401,    10,   131,     1,     1,   128,   321,     7,
     127,   128,     7,     1,     7,   132,     1,    75,   141,    77,
     241,     1,    80,    81,   485,   316,    84,    85,    86,   325,
     326,   327,   328,   485,    41,    27,   257,     1,    34,   162,
     261,    39,   100,    28,    39,     1,     1,    27,    36,   176,
       6,   109,     1,    48,   186,     1,   114,   245,     7,   281,
     118,    25,     1,   195,     1,     9,     8,   125,     7,   127,
       7,     1,    27,   200,   132,   202,   203,    33,   195,    35,
      10,    27,    12,    49,   211,    51,   114,    53,     1,    55,
      39,    57,   405,    59,     1,    61,    56,    27,     1,   127,
      39,     8,    39,     1,   132,   163,    19,    20,    21,    22,
       8,    14,    12,    26,   239,   242,    23,    73,    74,    75,
      76,    77,    78,    79,   245,    23,     1,   349,   245,   252,
     351,   254,   255,   256,   259,     1,    11,   195,   359,     0,
       1,   362,     3,     1,     1,   111,     1,    13,     6,   276,
     116,     8,     7,     8,     1,    10,     1,   123,     1,   125,
      77,   383,   289,   297,    19,    20,    11,   195,    25,    12,
      25,    10,    19,    20,    21,    22,   297,    10,   301,   367,
     297,   100,     1,   149,    39,     4,    55,   245,   246,   410,
       1,     1,   109,   325,   326,   327,   328,   114,     8,    43,
       1,    12,   423,     1,    15,    16,    17,    18,   363,   341,
     127,    12,    10,     1,    12,   132,     1,    51,   350,   346,
       8,    15,   246,    11,   341,   191,    11,     1,    13,   354,
     364,   109,   290,   350,   361,     9,   294,    11,   296,    13,
     206,     1,   175,   364,   210,     1,   367,   364,   284,   381,
     367,    11,   429,    13,    10,   382,    12,    58,    59,    60,
      61,    62,    63,   343,   381,   475,   393,     1,     1,   186,
      71,     1,   399,   485,     8,     8,   408,   400,   195,     1,
      10,   259,    12,   341,   505,     9,     8,    11,   458,    13,
     417,   408,   350,    30,    59,    -1,   354,   216,    -1,   431,
     427,   428,     1,   437,   459,   432,     5,     6,     7,   367,
      -1,    -1,    -1,   341,   431,   281,   437,   236,   450,   446,
     437,    -1,   350,   381,   243,   457,   453,   454,    87,    -1,
      89,    -1,   455,   450,    48,   462,    50,    51,    75,    -1,
     457,   473,    -1,   401,   471,    -1,   478,    84,    85,    86,
     408,    -1,    -1,   381,   481,     1,   473,    -1,    -1,    -1,
     485,   478,   489,   100,    10,   284,    12,    -1,    -1,   496,
     495,   498,    -1,   431,    -1,   500,    -1,    -1,     1,   116,
     408,   118,    -1,   349,   511,     1,   123,    10,   125,    12,
      -1,   150,   450,   152,    10,    11,    12,    13,    -1,   457,
     458,    -1,    -1,   431,    27,     1,    -1,    -1,   325,   326,
     327,   328,    -1,    -1,    10,   473,    12,   383,    -1,    -1,
     478,     1,   450,    -1,   341,    -1,   163,   485,     8,   457,
      -1,    -1,   191,   350,    -1,    58,    59,    60,    61,    62,
      63,    -1,     1,    23,    24,   473,   365,   366,    71,   186,
     478,    10,   371,    12,   191,    -1,    -1,   216,    -1,    -1,
     379,    -1,    -1,    -1,   381,    15,    16,    17,    18,   228,
     229,   230,   231,   232,   233,   234,   325,   326,   327,   328,
     239,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,   408,    -1,    73,    74,    75,    76,    77,    78,    79,
     259,    -1,    58,    59,    60,    61,    62,    63,   245,   246,
     269,    -1,    -1,    -1,   431,    71,    -1,    -1,    -1,    -1,
      -1,   440,    -1,    -1,   443,   284,    -1,    -1,    -1,   495,
       8,     1,    -1,   450,     4,    -1,    -1,     7,     8,    -1,
     457,    -1,    -1,    -1,   281,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    25,   473,   294,    -1,   296,
      -1,   478,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    -1,    -1,    64,    57,   325,   326,
     327,   328,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,   349,    -1,    -1,    -1,    -1,   354,    -1,    -1,
     379,     1,    -1,    -1,   383,     5,     6,     7,    -1,    -1,
     367,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,   383,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,   401,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   443,    50,    51,    52,    53,    -1,
      -1,    -1,    57,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,   443,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,     1,    -1,    -1,     4,
      -1,   458,     7,     8,     1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    11,    -1,   495,    -1,    -1,    -1,
      25,   500,    -1,    -1,    -1,    -1,    23,    24,   485,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    -1,
      -1,     1,    57,    -1,     4,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    73,    74,
      75,    76,    77,    78,    79,    25,    73,    74,    75,    76,
      77,    78,    79,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    -1,    -1,     1,    57,    -1,    -1,
      -1,    -1,     7,     8,     1,    -1,    -1,    -1,    -1,     6,
       7,     8,    -1,    73,    74,    75,    76,    77,    78,    79,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    33,    42,    35,    -1,
      -1,    46,     1,    48,    -1,    50,    51,    52,    53,     8,
      -1,     1,    11,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    73,    74,
      75,    76,    77,    78,    79,    25,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,    43,    44,    -1,    46,    -1,    48,    -1,
      -1,    60,    52,    53,    -1,    64,     1,    -1,    -1,     4,
      -1,    -1,     7,     8,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    42,     1,    -1,
      -1,    46,    -1,    48,     7,     8,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    25,     7,     8,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    39,    40,    41,    42,
      -1,    25,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,     1,
      -1,    -1,    46,    47,    48,     7,     8,    -1,    52,    53,
      73,    74,    75,    76,    77,    78,    79,     7,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    15,    16,    17,    18,    73,
      74,    75,    76,    77,    78,    79,    -1,    39,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    39,
      52,    53,    -1,    -1,     1,    57,     1,    -1,    -1,    49,
       7,     8,     7,    -1,    -1,    10,    56,    12,    13,    14,
      -1,    73,    74,    75,    76,    77,    78,    79,    25,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    40,    39,    42,     1,    -1,    -1,    46,
      -1,    48,     7,     8,    -1,    52,    53,    -1,    -1,    54,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      25,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    -1,    39,    40,    25,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    52,    53,    -1,
      39,    40,    -1,    42,    -1,     1,    45,    46,    -1,    48,
      -1,     7,     8,    52,    53,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    37,    -1,    39,    40,    -1,    42,     1,    -1,    -1,
      46,    -1,    48,     7,     8,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    -1,    39,    40,    -1,    42,    -1,
      -1,    -1,    46,     1,    48,    -1,    -1,    -1,    52,    53,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    73,
      74,    75,    76,    77,    78,    79,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,     1,    60,    -1,    -1,    -1,    64,    -1,     8,    -1,
      -1,    11,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,     1,    23,    24,    25,    -1,    -1,    -1,     8,
      30,    31,    11,    -1,    -1,    60,     1,    -1,    -1,    64,
      -1,     6,     7,     8,    23,    24,    25,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    -1,    -1,    33,    -1,
      35,     1,    -1,    73,    74,    75,    76,    77,    78,    79,
       1,    60,    12,    -1,    -1,    64,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    -1,    23,    24,     8,    -1,    -1,    11,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,     1,
      65,    66,    67,    68,    69,    70,    71,    -1,    10,    -1,
      12,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
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
      90,   223,   237,   245,     1,    19,    20,    21,    22,    26,
     108,   109,   110,   112,   113,   123,   124,     1,    10,   102,
       1,   106,   219,   128,    83,     1,   159,   210,    83,   127,
     106,   159,   223,   247,   106,    83,   247,     1,   106,   159,
     161,   127,   129,   130,    83,   127,   190,     1,    27,   179,
     199,   202,     1,    12,   160,   160,   102,   160,   223,   223,
      58,    59,    60,    61,    62,    63,    71,   160,   211,   212,
     213,   214,   215,   216,   218,     1,    27,   236,     1,   102,
     160,   106,   100,   114,   116,    83,   105,     1,    14,   115,
     115,     1,   106,   160,   222,   224,   225,   226,     9,   205,
     223,   247,     1,    65,    66,    67,    68,    69,    70,   246,
       1,    15,    16,    17,    18,    56,   132,   248,   249,   250,
     251,   252,     1,    54,   138,   144,   127,     1,    49,   154,
     162,    83,    83,    83,   159,   113,   159,    83,   140,   219,
     223,   230,   160,   223,   223,   223,   223,   223,   223,   223,
       1,   219,    90,   223,   160,    83,   117,   118,   219,     1,
      54,   121,   122,    99,   103,   102,   102,   102,   102,   160,
      30,    31,    90,   176,   206,   207,   208,   223,     1,   160,
     223,    83,   247,   140,     1,    56,   145,     1,    41,   148,
      83,   106,     1,    43,   164,   166,   168,     1,   106,   192,
     193,   182,   192,    97,   203,   102,    98,   101,   115,     1,
      28,   119,   113,     1,   226,   226,   226,   226,   127,   139,
     148,    83,   149,   159,   247,   127,   160,    90,   106,   108,
     109,   111,   170,   171,     1,    44,   165,     1,    45,   158,
     194,   102,   160,     1,    27,   191,    83,   160,    92,    97,
     219,   219,    99,   120,   219,     1,    47,   134,   141,   219,
     223,   127,    83,   247,     1,    50,    51,   153,   155,   156,
     172,    83,   169,    83,   102,   192,   113,   183,   127,   160,
      98,    83,    55,   143,     1,    57,   137,   160,    83,     1,
      83,   156,     1,   153,   155,   173,   127,    83,   195,    97,
       1,    34,   197,   219,   106,   142,   219,   223,    83,   127,
       1,   153,    83,    83,   102,   167,   127,   193,    92,    83,
       1,   153,   156,    83,   127,   174,   166,   127,    83,   153,
       1,   156,   171,     1,    37,   186,   188,    83,   153,    90,
     159,   187,   223,    83,    83,    90,   184,   160,     1,    36,
     178,   185,    83
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
#line 269 "src/directg.y"
    {strcpy(tipo,"short"); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 278 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 287 "src/directg.y"
    {erros++;yyerror("Esperado \"[\"");}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 292 "src/directg.y"
    {erros++;yyerror("Esperado \"]\"");}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 309 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 318 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 342 "src/directg.y"
    {fprintf(arquivo,"break;\n");}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 354 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 358 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 374 "src/directg.y"
    {fprintf(arquivo,"{ \n ");}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 375 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 379 "src/directg.y"
    {fprintf(arquivo, "While " );}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 383 "src/directg.y"
    {fprintf(arquivo,"\n  } ");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 384 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 397 "src/directg.y"
    {fprintf(arquivo, "for");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 401 "src/directg.y"
    {fprintf(arquivo, "\n }");}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 402 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 406 "src/directg.y"
    {fprintf(arquivo, "; ");}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 407 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 440 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 445 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 454 "src/directg.y"
    {fprintf(arquivo, "do {");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 458 "src/directg.y"
    {fprintf(arquivo, "} while ");}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 459 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 481 "src/directg.y"
    {fprintf(arquivo, " if ");}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 485 "src/directg.y"
    {fprintf(arquivo, " } ");}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 486 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 490 "src/directg.y"
    {fprintf(arquivo, " {\n");}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 491 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 495 "src/directg.y"
    {fprintf(arquivo, " } else {  ");}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 496 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 508 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 513 "src/directg.y"
    {fprintf(arquivo, " switch ");}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 517 "src/directg.y"
    {fprintf(arquivo, " } \n");}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 518 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 522 "src/directg.y"
    {/*fprintf(arquivo, "( ");*/}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 523 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 527 "src/directg.y"
    {/*fprintf(arquivo, " ) ");*/}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 528 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {fprintf(arquivo, " ( ");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 532 "src/directg.y"
    {fprintf(arquivo, " )  { ");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 542 "src/directg.y"
    {fprintf(arquivo, "\n case ");}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 543 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 547 "src/directg.y"
    {fprintf(arquivo, "\n default : ");}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 548 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 552 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 553 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 554 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 560 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 571 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 572 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 572 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 572 "src/directg.y"
    {fprintf(arquivo, " \n  case ");}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 592 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 597 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 601 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 601 "src/directg.y"
    { inserirfuncao(nomefuncao, tipo);   
	         id = hashfuncao_busca(nomefuncao, tipo, &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
	 }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 607 "src/directg.y"
    {fprintf(arquivo, "{ \n"); strcpy(param, "");   }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    {strcpy(escopo,"global");}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    {fprintf(arquivo, "} \n");}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 609 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 614 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 629 "src/directg.y"
    {strcpy (nomefuncao, nome);   }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 630 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 635 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 641 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 645 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
                 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 652 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
		 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
          
}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 658 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 667 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 671 "src/directg.y"
    {strcpy (nomefuncao, nome); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 672 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 676 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 676 "src/directg.y"
    { inserirfuncao(nomefuncao, "void");
                 id = hashfuncao_busca(nomefuncao, "void", &hashFuncao); printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
         }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 693 "src/directg.y"
    {fprintf(arquivo, "=");}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 697 "src/directg.y"
    {fprintf(arquivo, "false");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 702 "src/directg.y"
    {fprintf(arquivo, "true");}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 716 "src/directg.y"
    {(yyval)=strdup((yyvsp[(1) - (1)])); strcpy(nome,(yyval)); existeVariavel(nome); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 721 "src/directg.y"
    {fprintf(arquivo, " + ");}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 726 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 731 "src/directg.y"
    {fprintf(arquivo, " * ");}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 735 "src/directg.y"
    {fprintf(arquivo, " \\ ");}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 740 "src/directg.y"
    {fprintf(arquivo, " / ");}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 745 "src/directg.y"
    {fprintf(arquivo, " %% ");}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 749 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 753 "src/directg.y"
    {fprintf(arquivo, " pow  ");}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 759 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 839 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 862 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 877 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 881 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 889 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 894 "src/directg.y"
    {fprintf(arquivo, " printf(\"\\n\") ");}
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 899 "src/directg.y"
    {fprintf(arquivo, " scanf ");}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 903 "src/directg.y"
    {fprintf(arquivo, " (");}
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 903 "src/directg.y"
    {fprintf(arquivo, " )");}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 908 "src/directg.y"
    {fprintf(arquivo, " == ");}
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 909 "src/directg.y"
    {fprintf(arquivo, " != ");}
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 910 "src/directg.y"
    {fprintf(arquivo, " < ");}
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 911 "src/directg.y"
    {fprintf(arquivo, " <= ");}
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 912 "src/directg.y"
    {fprintf(arquivo, " > ");}
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 913 "src/directg.y"
    {fprintf(arquivo, " >= ");}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 914 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 926 "src/directg.y"
    {fprintf(arquivo, " && ");}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 930 "src/directg.y"
    {fprintf(arquivo, " ||  ");}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 934 "src/directg.y"
    {fprintf(arquivo, " ! ");}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 938 "src/directg.y"
    {fprintf(arquivo, " ^ ");}
    break;



/* Line 1806 of yacc.c  */
#line 3327 "directg.tab.c"
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
#line 950 "src/directg.y"


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


