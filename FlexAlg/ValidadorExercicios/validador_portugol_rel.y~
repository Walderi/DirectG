%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
%left T_AND T_OR T_NOT T_XOR
%left T_SOMA T_SUBTRACAO
%left T_MULT T_DIVISAO T_MOD
%right T_POTENCIA T_RAIZQ

%start Input

%%

Input:
	| Input BlocoAlgoritmo
;

InicioAlgoritmo:
	T_ALGORITMO
/*	| {erros++;yyerror("Esperado Algoritmo", yylineno, yytext);}*/
;

FimAlgoritmo:
	T_FIMALGORITMO
/*	| {erros++;yyerror("Esperado FimAlgoritmo", yylineno, yytext);}*/
;

BlocoAlgoritmo: 
	 InicioAlgoritmo BlocoCodigo FimAlgoritmo
;

String:
	T_STRING
/*	| {erros++;yyerror("Esperado um Nome", yylineno, yytext);}*/
;

NomeAlgoritmo:
    String
;

InicioLogica:
	T_INICIO
/*	| {erros++;yyerror("Esperado inicio", yylineno, yytext);}*/
;

BlocoCodigo:
	NomeAlgoritmo BlocoDeclaracao InicioLogica BlocosLogicos 
	| Comentarios BlocoCodigo	
;

InicioBlocoDeclaracao:
	T_VAR
/*	| {erros++;yyerror("Esperado 'var' para iniciar as variaveis", yylineno, yytext);}	*/
;

BlocoDeclaracao:
	| InicioBlocoDeclaracao BlocoVariaveis
	| Comentarios BlocoDeclaracao	
/*	| {erros++;yyerror("Erro na declaração de variavel \nVerifique se é necessario uma variavel ou \nSe o comentario foi corretamente feito", yylineno, yytext);}	*/
;

DefineTipo:
	T_DECLARAVAR
 /*	| {erros++;yyerror("Esperado ':' na declaraçãao das variaveis", yylineno, yytext);}*/
;

BlocoVariaveis:
	| Variaveis DefineTipo Tipos BlocoVariaveis
	| Variaveis DefineTipo TipoVetor BlocoVariaveis
	| Comentarios BlocoVariaveis
/*	| {erros++;yyerror("Erro de declaracao de variaveis \nNão declare nada ou siga o padrao \nvariavel : tipodevariavel \nvariavel1,variavel2 : tipodevariavel  ", yylineno, yytext);}*/
;

Separador:
	T_SEPARADOR
/*	| {erros++;yyerror("Faltou ',' na sintaxe", yylineno, yytext);}*/
;

Variaveis:
	Variavel
	| Variavel Separador Variaveis
/*	| {erros++;yyerror("Esperado variaveis para serem iniciadas", yylineno, yytext);} */
;

Variavel:
	T_IDENTIFICADOR
/*	| {erros++;yyerror("Nome da variavel invalido", yylineno, yytext);}*/
;

Identificador:
	T_IDENTIFICADOR
/*	| {erros++;yyerror("Nome do identificador invalido", yylineno, yytext);}*/
;

TipoInteiro:
	T_INTEIRO
/*	| {erros++;yyerror("Nome da variavel invalido \n", yylineno, yytext);}*/
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

PosInicialVetor:
	NumeroInteiro
;

EntrePosVetor:
	T_PONTOPONTO
;

PosFinalVetor:
	NumeroInteiro
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
	| Atribuicao BlocoLogico
	| Lacos BlocoLogico
	| Desvios BlocoLogico
	| Comentarios BlocoLogico
;

Lacos:
	BlocoPara
	| BlocoEnquanto
	| BlocoRepita
;

InicioEnquanto:
	T_ENQUANTO
;

FimEnquanto:
	T_FIMENQUANTO
;

ExprCondicaoEnquanto:
	ExpressaoLogica
	| AbreParenteses ExpressaoLogica FechaParenteses
;

BlocoEnquanto:
	InicioEnquanto ExprCondicaoEnquanto BlocosLogicos FimEnquanto
;

InicioPara:
	T_PARA
;

FimPara:
	T_FIMPARA
;

AlcancePara:
	T_DE
;

InicioAlcancePara:
	Variavel
	| NumeroInteiro
;

FimAlcancePara:
	Variavel
	| NumeroInteiro
;

AlcancePasso:
	Variavel
	| NumeroInteiro
;

NumeroInteiro:
	T_NUMINTEIRO
;

NumeroReal:
	T_NUMREAL
;

Numero:
	NumeroInteiro
	| NumeroReal
;

PassoPara:
	T_PASSO
;

ExprCondicaoPara:
	InicioAlcancePara AlcancePara FimAlcancePara  
	| InicioAlcancePara AlcancePara FimAlcancePara PassoPara AlcancePasso
;

FacaPara:
	T_FACA
;

BlocoPara:
	InicioPara ExprCondicaoPara FacaPara BlocosLogicos FimPara
;

InicioRepita:
	T_REPITA
;

RepitaAte:
	T_ATE
;

ExprRepitaAte:
	ExpressaoLogica
	| AbreParenteses ExpressaoLogica FechaParenteses 
;

BlocoRepita:
	InicioRepita BlocosLogicos RepitaAte ExprRepitaAte
;

Desvios:
	BlocosSe
	| BlocosEscolha
;

InicioSe:
	T_SE
;

FimSe:
	T_FIMSE
;

DesvioEntao:
	T_ENTAO
;

DesvioSenao:
	T_SENAO
;

BlocosSe:
	InicioSe ExpressaoLogica DesvioEntao BlocosLogicos FimSe
	| InicioSe ExpressaoLogica DesvioEntao BlocosLogicos DesvioSenao BlocosLogicos FimSe
	| InicioSe ExpressaoLogica DesvioEntao BlocosLogicos BlocosSe FimSe
	| InicioSe ExpressaoLogica DesvioEntao BlocosLogicos DesvioSenao BlocosLogicos BlocosSe FimSe
	| InicioSe ExpressaoLogica DesvioEntao BlocosLogicos BlocosSe DesvioSenao BlocosLogicos BlocosSe FimSe
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
	InicioEscolha ExprEscolha BlocoCasos FimEscolha	
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

Funcoes:
	Funcao
	| BlocoProcedimento
	| FuncaoNativa
;

FuncaoRetornavel:
	Funcao
	| FuncaoNativa
;

IniciaFuncao:
	T_FUNCAO
;

FimFuncao:
	T_FIMFUNCAO
;

DefinidorFuncao:
	T_DECLARAVAR	
;

Funcao:
	IniciaFuncao NomeFuncao DefinidorFuncao Tipos BlocoDeclaracao InicioLogica BlocosLogicos Retorno FimFuncao 
;

PalavraRetorno:
	T_RETORNE
;

ExprRetorno:
	AbreParenteses String FechaParenteses
	| String
	| ArtmExpr
;

Retorno:
	PalavraRetorno ExprRetorno
;

NomeFuncao:
	 Identificador AbreParenteses Assinatura FechaParenteses
;

DefineVarAssinatura:
	T_DECLARAVAR
;

Assinatura:
	Variaveis DefineVarAssinatura Tipos
	| Assinatura Separador Assinatura
;	

InicioProcedimento:
	T_PROCEDIMENTO
;

FimProcedimento:
	T_FIMPROCEDIMENTO
;

NomeProcedimento:
	Identificador AbreParenteses Assinatura FechaParenteses
;

BlocoProcedimento:
	InicioProcedimento NomeProcedimento BlocoDeclaracao InicioLogica BlocosLogicos FimProcedimento
;

Comentarios:
	Comentario
	| Comentario Comentarios
;

Comentario:
	T_COMENTARIO
;

Atribuidor:
	T_ATRIBUI
;

LogicoFalso:
	T_LOGICO_FALSO	
;

LogicoVerdadeiro:
	T_LOGICO_VERDADEIRO
;

Atribuido:
	String
	| ArtmExpr
	| FuncaoRetornavel
	| LogicoFalso
	| LogicoVerdadeiro
;

Atribuicao:
	Identificador Atribuidor Atribuido
;

ExprSoma:
	T_SOMA
;

ExprSub:
	T_SUBTRACAO
;

ExprMult:
	T_MULT
;

ExprDiv:
	T_DIVISAO
;

ExprDivInt:
	T_DIVISAOINTEIRA
; 

ExprMod:
	T_MOD
;

Negativo:
	T_SUBTRACAO
;

ExprPot:
	T_POTENCIA
;

ArtmExpr:
	Numero
	| Variavel 
	| ArtmExpr ExprSoma ArtmExpr 
	| ArtmExpr ExprSub ArtmExpr 
	| ArtmExpr ExprMult ArtmExpr    
	| ArtmExpr ExprDiv ArtmExpr 
	| ArtmExpr ExprDivInt ArtmExpr 
	| ArtmExpr ExprMod ArtmExpr   
	| Negativo ArtmExpr  
	| ArtmExpr ExprPot ArtmExpr  
	| AbreParenteses ArtmExpr FechaParenteses  
    	| FuncaoRetornavel
;

FuncaoNativa:
	Comprimento
	| Copia
	| Maiusc
	| Raiz
	| Escreva
	| Escreval
	| Leia
;

InicioComprimento:
	T_COMPR
;

Comprimento:
	InicioComprimento AbreParenteses Variavel FechaParenteses
	| InicioComprimento AbreParenteses String FechaParenteses
;

InicioCopia:
	T_COPIA
;

Copia:
	InicioCopia AbreParenteses Variavel Separador NumeroInteiro Separador NumeroInteiro FechaParenteses
;

InicioMaiusc:
	T_MAIUSC
;

Maiusc:
	InicioMaiusc AbreParenteses Variavel FechaParenteses
;

InicioRaiz:
	T_RAIZQ
;

Raiz: 
	InicioRaiz AbreParenteses ArtmExpr FechaParenteses
;

ExprEscreva:
	| String
	| ArtmExpr
	| ExprEscreva Separador ArtmExpr NumeroInteiro
	| ExprEscreva Separador ArtmExpr DefineTipo NumeroInteiro DefineTipo NumeroInteiro
;

ParametrosEscreva:
	AbreParenteses ExprEscreva FechaParenteses
;

InicioEscreva:
	T_ESCREVA
;

Escreva:
	InicioEscreva ParametrosEscreva
;

InicioEscreval:
	T_ESCREVAL
;

Escreval:
	InicioEscreval ParametrosEscreva	
;

InicioLeia:
	T_LEIA
;

Leia:
	InicioLeia AbreParenteses Variavel FechaParenteses
;

CondicoesLogicas:
	T_IGUAL
	| T_DIFERENTE
	| T_MENORQUE
	| T_MENORIGUALQUE
	| T_MAIORQUE
	| T_MAIORIGUALQUE 
;

ExpressaoLogica:
	ArtmExpr CondicoesLogicas ArtmExpr
	| ExpressaoLogica OperadoresLogicos
;


LogicoAnd:
	T_AND
;

LogicoOr:
	T_OR
;

LogicoNot:
	T_NOT
;

LogicoXor:
	T_XOR
;

OperadoresLogicos:
	LogicoAnd
	| LogicoOr
	| LogicoNot
	| LogicoXor
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
