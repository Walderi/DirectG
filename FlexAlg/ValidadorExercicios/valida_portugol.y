%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDim.c"
#include "hashDirectG.c"
int erros=0;
%}

/*Estrutura da linguagem*/
%token T_ALGORITMO T_FIMALGORITMO
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
%token T_INVALIDO
%token T_QUEBRA

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
	
	| Input BlocoAlgoritmo QuebrasComando 
;
QuebraComando:
	T_QUEBRA
	| Comentario
	| error{erros++;yyerror("Erro do fim de linha");}
;
	
QuebrasComando:
	QuebraComando
	|QuebraComando QuebrasComando 
;

InicioAlgoritmo:
	T_ALGORITMO
	| error{erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
;

CabecalhoAlgoritmo:
	InicioAlgoritmo NomeAlgoritmo QuebraComando
;

FimAlgoritmo:
	T_FIMALGORITMO
	| error{erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
;

BlocoAlgoritmo: 
	 CabecalhoAlgoritmo BlocoCodigo FimAlgoritmo
;

String:
	T_STRING
;

NomeAlgoritmo:
	String
	| error{erros++;yyerror("Algoritmo sem nome");}
;

InicioLogica:
	T_INICIO QuebrasComando
	| error{erros++;yyerror("Faltando \" INICIO \" ");} 
;

BlocoCodigo:
	BlocoDeclaracao InicioLogica BlocosLogicos 
	| Comentarios BlocoCodigo	

;

InicioBlocoDeclaracao:
	T_VAR
	| error{erros++;yyerror("Faltando \" VAR \" ");}
;

BlocoDeclaracao:
	| InicioBlocoDeclaracao QuebrasComando BlocoVariaveis
	| InicioBlocoDeclaracao	QuebrasComando	
	| Comentarios BlocoDeclaracao
	| Funcoes
	| InicioBlocoDeclaracao QuebrasComando BlocoVariaveis QuebrasComando Funcoes	
;

DefineTipo:
	T_DECLARAVAR
	| error{erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
;

BlocoVariaveis:
	| Variaveis DefineTipo Tipos QuebrasComando BlocoVariaveis
	| Variaveis DefineTipo TipoVetor QuebrasComando BlocoVariaveis
	| Comentarios BlocoVariaveis
;

Separador:
	T_SEPARADOR
	| error{erros++;yyerror("Faltando \",\" para divisao de variaveis");} 
;

Variaveis:
	Variavel
	| Variavel Separador Variaveis 
;

Variavel:
	Identificador
;

Identificador:
	T_IDENTIFICADOR
	| VariavelVetor
	| error{erros++;yyerror("Identificador invalido");}
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
	| error{erros++;yyerror("Esperado um numero");}
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
	| error{erros++;yyerror("Esperado \"(\"");}
;

FechaColchete:
	T_FECHACOLCHETE
	| error{erros++;yyerror("Esperado \")\"");}
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
	| error{erros++;yyerror("Erro na divisao do vetor \"..\"");}
;

PosFinalVetor:
	NumeroInteiro
;

DefineTipoVetor:
	T_DE
	| error{erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
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

VariavelVetor:
	Identificador AbreColchete Variavel FechaColchete
	| Identificador AbreColchete NumeroInteiro FechaColchete
;


//-----------------------------------------------------------------------------------------------------------------BLOCOS LOGICOS

Interromper:
	T_INTERROMPA
;

BlocosLogicos:
	BlocoLogico 
	| Comentarios 
	| Comentarios BlocosLogicos  
	| BlocoLogico BlocosLogicos 
;	

BlocoLogico:
	| String QuebrasComando
	| Atribuicao QuebrasComando
	| Lacos 
	| Desvios 
	| Interromper QuebrasComando 
	| FuncaoNativa QuebrasComando
	| FuncaoNaoNativa QuebrasComando
	| QuebrasComando BlocoLogico 
; 

//------------------------------------------------------------------------------------------------LACOS

Lacos:
	BlocoPara
	| BlocoEnquanto
	| BlocoRepita
;

//------------------------------------------------------------------------------------------------------------INICIO ENQUANTO
FacaEnquanto:
	T_FACA
	| error{erros++; yyerror("Esperado \"FACA\"");}
;

InicioEnquanto:
	T_ENQUANTO
;

FimEnquanto:
	T_FIMENQUANTO
	| error{erros++;yyerror("Esperado \"FIMENQUANTO\"");}
;

BlocoEnquanto:
	InicioEnquanto ExpressaoLogica FacaEnquanto QuebrasComando BlocosLogicos FimEnquanto QuebrasComando
	| error{erros++; yyerror("Erro no bloco ENQUANTO");}
;

//-----------------------------------------------------------------------------------------------------------FIM ENQUANTO

//---------------------------------------------------------------------------------------------------------------PARA

InicioPara:
	T_PARA
;

FimPara:
	T_FIMPARA
	| error{erros++;yyerror("Esperado \"FIMPARA\"");}
;

AlcancePara:
	T_DE
;

AtePara:
	RepitaAte
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
	| ArtmExpr
;

PassoPara:
	T_PASSO
;

ExprCondicaoPara:
	AlcancePara InicioAlcancePara AtePara FimAlcancePara  
	| AlcancePara InicioAlcancePara AtePara FimAlcancePara PassoPara AlcancePasso
;

FacaPara:
	T_FACA
;

BlocoPara:
	InicioPara Variavel ExprCondicaoPara FacaPara QuebrasComando BlocosLogicos FimPara QuebrasComando
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

//-----------------------------------------------------------------------------------------------------------------------REPITA

BlocoRepita:
	InicioRepita QuebrasComando BlocosLogicos RepitaAte ExprRepitaAte QuebrasComando
;

//--------------------------------------------------------------------------------------------------DESVIOS

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

//--------------------------------------------------------------------------------------------------------------------------------------SE

BlocosSe:
	InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos DesvioSenao QuebrasComando BlocosLogicos FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos DesvioSenao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos BlocosSe DesvioSenao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
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

//-----------------------------------------------------------------------------------------------------------------------------------ESCOLHA

BlocosEscolha:
	InicioEscolha ExprEscolha QuebrasComando BlocoCasos FimEscolha QuebrasComando	
;

AbreCaso:
	T_CASO
;

OutroCaso:
	T_OUTROCASO
;

BlocosCaso:
	AbreCaso SelecaoCasos QuebrasComando BlocosLogicos
	| AbreCaso SelecaoCasos QuebrasComando BlocosLogicos BlocosCaso
;

//--------------------------------------------------------------------------------------------------------------------------CASOS

BlocoCasos:
	BlocosCaso OutroCaso QuebrasComando BlocosLogicos	 
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
//--------------------------------------------------------------------Funcao
Funcoes:
	Funcao
	| BlocoProcedimento
	| FuncaoNativa
;

FuncaoRetornavel:
	FuncaoNaoNativa
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
	IniciaFuncao NomeFuncao DefinidorFuncao Tipos QuebrasComando BlocoDeclaracao InicioLogica BlocosLogicos Retorno QuebrasComando FimFuncao QuebrasComando 
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
	|{yyerror("6");}
;

Assinatura:
	Variaveis DefineVarAssinatura Tipos
	| Assinatura Separador Assinatura
	|{yyerror("5");}
;	

InicioProcedimento:
	T_PROCEDIMENTO
	|{yyerror("4");}
;

FimProcedimento:
	T_FIMPROCEDIMENTO
	|{yyerror("3");}
;

NomeProcedimento:
	Identificador AbreParenteses Assinatura FechaParenteses
	|{yyerror("2");}
;

BlocoProcedimento:
	InicioProcedimento NomeProcedimento QuebrasComando BlocoDeclaracao InicioLogica BlocosLogicos FimProcedimento QuebrasComando
	|{yyerror("1");}
;

Comentarios:
	Comentario
	| Comentario Comentarios
;

Comentario:
	T_COMENTARIO QuebrasComando
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

NumeroInteiro:
	T_NUMINTEIRO
	| error{erros++;yyerror("Esperado um numero do tipo inteiro");}
;

NumeroReal:
	T_NUMREAL
;

Pi:
	T_PI
;

Numero:
	NumeroInteiro
	| NumeroReal
	| Pi
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
//-----------------------------------------------------------------------FUNCAO NATIVA
FuncaoNativa:
	Comprimento 
	| Copia 
	| Maiusc 
	| Raiz 
	| Escreva 
	| Escreval 
	| Leia 
;

FuncaoNaoNativa:
	Identificador AbreParenteses  FechaParenteses
	| Identificador AbreParenteses AssinaturaExistente  FechaParenteses
;

AssinaturaExistente:
	Variavel
	| Variavel Separador AssinaturaExistente
	| Numero
	| Numero Separador AssinaturaExistente
	| FuncaoNaoNativa
	| FuncaoNaoNativa Separador AssinaturaExistente
	| FuncaoNativa
	| FuncaoNativa Separador AssinaturaExistente
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

SegundoTermoCopia:
	InicioAlcancePara
;

Copia:
	InicioCopia AbreParenteses Variavel Separador SegundoTermoCopia Separador NumeroInteiro FechaParenteses
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

CasasDecimais:
	|T_DECLARAVAR NumeroInteiro
;

ExprEscreva:
	| String
	| ArtmExpr CasasDecimais
	| ExprEscreva Separador ArtmExpr DefineTipo NumeroInteiro
	| ExprEscreva Separador ArtmExpr
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
	|{yyerror("paçoca");}
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
	| ExpressaoLogica OperadoresLogicos ExpressaoLogica
	| AbreParenteses ExpressaoLogica FechaParenteses
	| Variavel
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

//chamadas de funcoes da pilha dinamica
extern void FPVazia(TipoPilha *Pilha);
extern int Vazia(TipoPilha Pilha);
extern void Empilha(TipoItem Item, TipoPilha *Pilha);
extern void Desempilha(TipoPilha *Pilha, TipoItem *Item);
extern int Tamanho(TipoPilha Pilha);

TipoPilha minhaPilha;
TipoItem item;

int yyerror(char *s) {
        item.lineNo = yylineno;
        item.errNo = yytext;
        Empilha(item,&minhaPilha);
}

int main(int argc, char *argv[] ) {
        FPVazia(&minhaPilha);
        extern FILE *yyin;
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
                	printf("Linha:%d Erro:%s\n",minhaPilha.Topo->Item.lineNo, minhaPilha.Topo->Item.errNo);
			Desempilha(&minhaPilha,&minhaPilha.Topo->Item);	
  		}
  		return 1;
	}

}

int yywrap(void) {
  return 1;
}

