%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.c"
%}


/*Estrutura da linguagem*/

%token T_ALGORITMO T_FIMALGORITMO
%token T_FIMLINHA
%token T_VAR T_INICIO T_COMENTARIO T_IDENTIFICADOR T_ATRIBUI T_SEPARADOR
%token T_ABRE_PARENT T_FECHA_PARENT
%token T_ABRECOLCHETE T_FECHACOLCHETE
%token T_AND T_OR T_NOT T_XOR
%token T_INTEIRO T_REAL T_CARACTERE T_LOGICO
%token T_NUMINTEIRO T_NUMREAL T_STRING T_VETOR
%token T_DECLARAVAR T_PONTOPONTO T_ESPACO
%token T_LOGICO_VERDADEIRO T_LOGICO_FALSO
%token T_VARIAVEL
%token T_PROCEDIMENTO T_FIMPROCEDIMENTO
%token T_FUNCAO T_FIMFUNCAO T_RETORNE

/*Lacos e desvios condicionais*/
%token T_REPITA T_ATE
%token T_ESCOLHA T_CASO T_OUTROCASO T_FIMESCOLHA
%token T_ENQUANTO T_FIMENQUANTO
%token T_SE T_ENTAO T_SENAO T_FIMSE
%token T_INTERROMPA
%token T_PARA T_DE T_PASSO T_FACA T_FIMPARA

/*Operadores binarios*/
%token T_SOMA T_DIVISAO T_SUBTRACAO T_MULT T_POTENCIA T_MOD T_PI
%token T_DIFERENTE T_MENORQUE T_MENORIGUALQUE T_MAIORQUE T_MAIORIGUALQUE T_IGUAL
%token T_DIVISAOINTEIRA
%token T_RESTO

/*Funcoes Internas*/
%token T_ESCREVAL T_ESCREVA T_LEIA
%token T_RAIZQ T_COPIA T_COMPR T_MAIUSC

/*Ordem de precedencia */
%left T_SOMA T_SUBTRACAO
%left T_MULT T_DIVISAO T_MOD
%right T_POTENCIA T_RAIZQ

%start Input

%%

Input:
	| Input Bloco
;

InicioAlgoritmo:
	T_ALGORITMO
;

FimAlgoritmo:
	T_FIMALGORITMO
;

BlocoAlgoritmo: 
	 InicioAlgoritmo BlocoCodigo FimAlgoritmo
;

String:
	T_STRING
;

NomeAlgoritmo:
    String
;

InicioLogica:
	T_INICIO
;

BlocoCodigo:
	NomeAlgoritmo BlocoDeclaracao InicioLogica BlocosLogicos 
	| Comentarios BlocoCodigo	
;

InicioBlocoDeclaracao:
	| T_VAR
;

BlocoDeclaracao:
	| InicioBlocoDeclaracao BlocoVariaveis
	| Comentarios BlocoDeclaracao	
;

DefineTipo:
	T_DECLARAVAR
;

BlocoVariaveis:
	| Variaveis DefineTipo Tipos BlocoVariaveis
	| Variaveis DefineTipo TipoVetor BlocoVariaveis
	| Comentarios BlocoVariaveis
;

Separador:
	T_SEPARADOR
;

Variaveis:
	Variavel
	| Variavel Separador Variaveis 
;

Variavel:
	T_VARIAVEL
;

TipoInteiro:
	T_INTEIRO
;

TipoReal: 
	T_REAL
;

TipoCaractere:
	T_CARACTERE
;

TipoNumerico:
	TipoInteiro
	| TipoReal
;

TipoLogico:
	T_LOGICO
;

Tipos:
	TipoInteiro
	| TipoReal
	| TipoCaractere
	| TipoLogico	
;

AbreColchete:
	T_ABRECOLCHETE
;

FechaColchete:
	T_FECHACOLCHETE
;

ExprColcheteVetor:
	AbreColchete ExprInternaColcheteVetor FechaColchete 
;

ExprInternaColcheteVetor:
	PosInicialVetor EntrePosVetor PosFinalVetor
;

PosInicilVetor:
	TipoInteiro
;

EntrePosVetor:
	T_PONTOPONTO
;

PosFinalVetor:
	TipoInteiro
;

DefineTipoVetor:
	T_DE
;

TipoDoTipoVetor:
	DefineTipoVetor Tipos	
;

NomeVetor:
	T_VETOR
;

TipoVetor: 
	NomeVetor ExprColcheteVetor TipoDoTipoVetor
;

BlocosLogicos:
	BlocoLogico
	| Comentarios
	| Comentarios BlocosLogicos 
;

BlocoLogico:
	| String BlocoLogico
	| Funcoes BlocoLogico
	| Atribuicoes BlocoLogico
	| Lacos BlocoLogico
	| Desvios BlocoLogico
	| Comentarios BlocoLogico
;

Lacos:
	BlocoPara
	| BlocoEnquanto
	| BlocoRepita
;

BlocoEnquanto:
	T_ENQUANTO T_ABRE_PARENT Condicao T_FECHA_PARENT rotinas T_FIMENQUANTO
;

BlocoPara:
	T_PARA variavel T_DE VariavelInt T_ATE VariavelInt T_FACA rotinas T_FIMPARA
	| T_PARA variavel T_DE VariavelInt T_ATE VariavelInt T_PASSO T_NUMINTEIRO T_FACA rotinas T_FIMPARA
;

Repita:
	T_REPITA rotinas T_ATE T_ABRE_PARENT Condicao T_FECHA_PARENT
;

Desvios:
	BlocosSe
	| BlocosEscolha
;

InicioSe:
	T_SE;
;

FimSe:
	T_FIMSE
;

DesvioEntao:
	T_ENTAO
;

CondicoesLogicas:
	ExpressaoRelacional
	| ExpressaoRelacional ExpressaoLogica Condicao
	| T_LOGICO
;

DesvioSenao:
	T_SENAO
;

BlocosSe:
	InicioSe CondicoesLogicas DesvioEntao BlocosLogicos FimSe
	| InicioSe CondicoesLogicas DesvioEntao BlocosLogicos DesvioSenao BlocosLogicos FimSe
	| InicioSe CondicoesLogicas DesvioEntao BlocosLogicos BlocosSe FimSe
	| InicioSe CondicoesLogicas DesvioEntao BlocosLogicos DesvioSenao BlocosLogicos BlocosSe FimSe
	| InicioSe CondicoesLogicas DesvioEntao BlocosLogicos BlocosSe DesvioSenao BlocosLogicos BlocosSe FimSe
;

InicioEscolha:
	T_ESCOLHA	
;

FimEscolha:
	T_FIMESCOLHA
;

AbreParenteses:
	T_ABRE_PARENT
;

FechaParenteses:
	T_FECHA_PARENT
;
ExprEscolha:
	Variavel
	| AbreParenteses Variavel FechaParenteses	
;

BlocosEscolha:
	InicioEscolha ExprEscolha BlocosCasos FimEscolha	
;

AbreCaso:
	T_CASO
;

OutroCaso:
	T_OUTROCASO
;

BlocosCaso:
	AbreCaso SelecaoCasos BlocosLogicos
	| AbreCaso SelecaoCasos BlocosLogicos BlocosCaso
;

BlocoCasos:
	BlocosCaso OutroCaso BlocosLogicos	 
;

Selecao:
	| Variavel
	| String
	| TipoNumerico
;

SelecaoCasos:
	Selecao
	| Selecao Separador SelecaoCasos
;

Atribuicoes:

;

Funcoes:

;

BlocoProcedimento:
	T_PROCEDIMENTO T_VARIAVEL T_ABRE_PARENT parametros T_FECHA_PARENT declaravariavel T_INICIO rotinas T_FIMPROCEDIMENTO
	| T_PROCEDIMENTO T_VARIAVEL T_ABRE_PARENT parametros T_ATRIBUI tipo declaravariavel T_INICIO rotinas T_FIMPROCEDIMENTO
;

Funcoes:
	Funcao
	| Procedimento
	| FuncaoNativa
;

retorne:
	 T_RETORNE T_ABRE_PARENT T_STRING T_STRING 
	| T_RETORNE T_STRING
	| T_RETORNE Expression
;

nomefuncao:
	 T_VARIAVEL T_ABRE_PARENT parametros T_FECHA_PARENT
;

funcao:
	T_FUNCAO nomefuncao T_DOISPONTOS tipo declaravariavel T_INICIO rotinas retorne T_FIMFUNCAO
;

parametros:
	variaveis T_DOISPONTOS tipo
	| parametros T_VIRGULA variaveis T_DOISPONTOS tipo
;	

Comentarios:
	Comentario
	| Comentario Comentarios
;

Comentario:
	T_COMENTARIO
;

Atribuicao:
	 variavel T_ATRIBUI T_STRING
	| variavel T_ATRIBUI Expression
	| variavel T_ATRIBUI FuncaoExistente
;

Expression:
	number 
	| variavel 
	| Expression T_SOMA Expression  
	| Expression T_SUBTRACAO Expression   
	| Expression T_MULT Expression   
	| Expression T_DIVISAO Expression
	| Expression T_MOD Expression   
	| T_SUBTRACAO Expression   
	| Expression T_POTENCIA Expression   
	| T_ABRE_PARENT Expression T_FECHA_PARENT  
    	| raiz 
;

FuncaoExistente:
	comprimento
	| copia
	| maiusc
;

comprimento:
	T_COMPR T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
	| T_COMPR T_ABRE_PARENT T_STRING T_FECHA_PARENT
;

copia:
	T_COPIA T_ABRE_PARENT T_VARIAVEL T_VIRGULA T_NUMINTEIRO T_VIRGULA T_NUMINTEIRO T_FECHA_PARENT
;

maiusc:
	T_MAIUSC T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

raiz: 
	T_RAIZQ T_ABRE_PARENT Expression T_FECHA_PARENT
;

conteudo:
	| T_STRING
	| Expression
	| Conteudo T_VIRGULA Expression T_DOISPONTOS T_NUMINTEIRO
	| Conteudo T_VIRGULA Expression T_DOISPONTOS T_NUMINTEIRO T_DOISPONTOS T_NUMINTEIRO
;
ParametroFUNC:
	T_ABRE_PARENT Conteudo T_FECHA_PARENT
	
;

Escreva:
	T_ESCREVA ParametroFUNC
;

Escreval:
	T_ESCREVAL ParametroFUNC	
;

Leia:
	T_LEIA T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

Relacional:
	T_IGUAL
	| T_DIFERENTE
	| T_MENORQUE
	| T_MENORIGUALQUE
	| T_MAIORQUE
	| T_MAIORIGUALQUE 
;
ExpressaoRelacional:
	Expression Relacional Expression	
;

ExpressaoLogica:
	T_AND
	| T_OR
	| T_NOT
;

VariavelInt:
	T_NUMINTEIRO
	| T_VARIAVEL
;

%%

extern int 	yylineno;
extern char 	*yytext;

int yyerror(char *s) {
	printf("Erro %s na Linha %d com o Token nao esperado %s\n", s, yylineno, yytext);
}

int main(int ac, char **av) {
	extern FILE *yyin;
	
	if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
		perror(av[1]);
		exit(1);		
	}

	if(!yyparse())
		printf("Tudo foi OK!!\n");
	else
		printf("Algoritmo com erro.\n");
}
