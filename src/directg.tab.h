/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

