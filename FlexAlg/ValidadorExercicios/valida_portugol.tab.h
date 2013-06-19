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
     T_REPITA = 294,
     T_ATE = 295,
     T_ESCOLHA = 296,
     T_CASO = 297,
     T_OUTROCASO = 298,
     T_FIMESCOLHA = 299,
     T_ENQUANTO = 300,
     T_FIMENQUANTO = 301,
     T_SE = 302,
     T_ENTAO = 303,
     T_SENAO = 304,
     T_FIMSE = 305,
     T_INTERROMPA = 306,
     T_PARA = 307,
     T_DE = 308,
     T_PASSO = 309,
     T_FACA = 310,
     T_FIMPARA = 311,
     T_SOMA = 312,
     T_DIVISAO = 313,
     T_SUBTRACAO = 314,
     T_MULT = 315,
     T_POTENCIA = 316,
     T_MOD = 317,
     T_PI = 318,
     T_DIFERENTE = 319,
     T_MENORQUE = 320,
     T_MENORIGUALQUE = 321,
     T_MAIORQUE = 322,
     T_MAIORIGUALQUE = 323,
     T_IGUAL = 324,
     T_DIVISAOINTEIRA = 325,
     T_RESTO = 326,
     T_ESCREVAL = 327,
     T_ESCREVA = 328,
     T_LEIA = 329,
     T_RAIZQ = 330,
     T_COPIA = 331,
     T_COMPR = 332,
     T_MAIUSC = 333
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


