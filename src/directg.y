%{

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

extern char * yyerrork; //stack error correction


int erros=0;
char escopo[30];
char nome[30];
char  *variavel;
char *NomeVetor;
char nomefuncao[30];
char*  nomeFuncao;
char tipo[30];
char* a;
int posInicial;
int posFinal;
char param[300];
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
	//erros++;
	//	yyerror("Variavel Já Declarada!! ");
	}
}

void inserirfuncao(char* nome, char* tiporeturn){
int existe;

	existe = hashfuncao_existe(nome, tiporeturn, &hashFuncao);
	if(existe == 0){
	hashfuncao_inserir( nome, tiporeturn, &hashFuncao);
	}else{
	//erros++;
       // yyerror("Função já Declarada!! ");
	}


}

void existeVariavel( char *nome){
int existe;
        existe = hashvariavel_existenaHash(nome, &hashVariavel);
        if (existe == 1) {
       		fprintf(arquivo, " %s " , nome);
        } else {
       //	 erros++;
       	//	 yyerror("Essa variavel não existe ");
        }

}

void existeFuncao(char *nome, char* tipo) {
int existe;
	existe = hashfuncao_existe(nome, tipo, &hashFuncao);
	if (existe == 1) {
		fprintf(arquivo, " %s ", nome);
	} else {
		//tes
	}
}


%}

%error-verbose

%locations


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
	T_QUEBRA{fprintf(arquivo, "\n");}
	| Comentario
	| error{erros++;yyerror("Erro do fim de linha",yytext);}
;
	
QuebrasComando:
	QuebraComando
	|QuebraComando QuebrasComando 
;

//------------------------------------------------------------------------------INICIO ESPIRITUAL


InicioAlgoritmo:
	T_ALGORITMO {arquivo = fopen("./Saida.C","w+"); 
		     	strcpy(escopo,"global");
			fprintf(arquivo, "#include <stdio.h>\n#include<ctype.h> \n#include <stdlib.h> \n#include <math.h> \n#include <string.h> \n#define false 0\n#define true 1  ");			

				}
	| error{erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ",yytext);}
;

CabecalhoAlgoritmo:
	InicioAlgoritmo{fprintf(arquivo,"// "); } NomeAlgoritmo {fprintf(arquivo,"\n"); }   QuebrasComando
;

FimAlgoritmo:
	T_FIMALGORITMO {fprintf(arquivo, "return 0; \n } ");}
	| error{erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ",yytext);}
;

BlocoAlgoritmo: 
	 CabecalhoAlgoritmo BlocoCodigo FimAlgoritmo
;

String:
	T_STRING{ $$=strdup(yytext);
	fprintf(arquivo," %s ", $$);}
;

NomeAlgoritmo:
	String
	| error{erros++;yyerror("Algoritmo sem nome",yytext);}
;

InicioLogica:
	T_INICIO QuebrasComando 
	| error{erros++;yyerror("Faltando \" INICIO \" ",yytext);} 
;

BlocoCodigo:
	BlocoDeclaracao InicioLogica {fprintf(arquivo, "int main() {\n");}  BlocosLogicos 
	| BlocoDeclaracao Funcoes  InicioLogica {fprintf(arquivo, "int main() {\n");}   BlocosLogicos
	| Comentarios BlocoCodigo	

;

InicioBlocoDeclaracao:
	T_VAR
	| error{erros++;yyerror("Faltando \" VAR \" ",yytext);}
;

BlocoDeclaracao:
	| InicioBlocoDeclaracao QuebrasComando BlocoVariaveis 
	| InicioBlocoDeclaracao	QuebrasComando	
	| Comentarios BlocoDeclaracao
	
;

DefineTipo:
	T_DECLARAVAR
	| error{erros++;yyerror("Necessario \" : \" para declaracao da variavel",yytext);}
;

BlocoVariaveis:
	| Variaveis DefineTipo Tipos {inserirvariavel(nome,tipo,escopo);
					id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
				//	fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,hashVariavel.variaveis[id].nome); }
									
					fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,param); }
				  QuebrasComando {strcpy(param,"");} BlocoVariaveis 
	| Variaveis DefineTipo TipoVetor {inserirvariavel(nome, tipo, escopo);
					  id = hashvariavel_busca(nome,tipo,escopo, &hashVariavel);
					  posFinal = posFinal - posInicial;
					  fprintf(arquivo, "%s    %s[ %d ] ;", hashVariavel.variaveis[id].tipo,param, posFinal);} QuebrasComando BlocoVariaveis
	| Comentarios BlocoVariaveis
;

Separador:
	T_SEPARADOR
	| error{erros++;yyerror("Faltando \",\" para divisao de variaveis",yytext);} 
;

Variaveis:
	Variavel {inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
}


	| Variavel { inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

} Separador {strcat(param, ", ");} Variaveis
;


//-------------------------------------------------------------------------------------------------------------------------------BLOCO DE TRAD SUPERIOR


Variavel:
	Identificador
;

Identificador:
	T_IDENTIFICADOR{$$=strdup(yytext); strcpy(nome, $$); variavel =$$; nomeFuncao =$$;}
	| VariavelVetor
	| error{erros++;yyerror("Identificador invalido",yytext);}
;

TipoInteiro:
	T_INTEIRO {strcpy(tipo,"int"); }
;

TipoReal: 
	T_REAL {strcpy(tipo,"float"); }

;

TipoCaractere:
	T_CARACTERE {strcpy(tipo,"char"); }

;

TipoNumerico:
	TipoInteiro 
	| TipoReal
/*	| error{erros++;yyerror("Esperado um numero");}*/
;

TipoLogico:
	T_LOGICO {strcpy(tipo,"short"); }

;

Tipos:
	TipoInteiro
	| TipoReal
	| TipoCaractere
	| TipoLogico
	| error {erros++; yyerror("Tipo de dado invalido!",yytext); }	

;

//------------------------------------------------------------------------------------------PRE VETOR


AbreColchete:
	T_ABRECOLCHETE
	| error{erros++;yyerror("Esperado \"[\"",yytext);}
;

FechaColchete:
	T_FECHACOLCHETE
	| error{erros++;yyerror("Esperado \"]\"",yytext);}
;

ExprColcheteVetor:
	AbreColchete ExprInternaColcheteVetor FechaColchete 
;

ExprInternaColcheteVetor:
	PosInicialVetor EntrePosVetor PosFinalVetor
;

PosInicialVetor:
	NumeroInteiroInicialVetor
;

EntrePosVetor:
	T_PONTOPONTO
	| error{erros++;yyerror("Erro na divisao do vetor \"..\"",yytext);}
;

PosFinalVetor:
	NumeroInteiroFinalVetor
;

NumeroInteiroInicialVetor:
	 T_NUMINTEIRO {$$=strdup(yytext); posInicial=atoi($$);}
        | error{erros++;yyerror("Esperado um numero do tipo inteiro",yytext);}
;

NumeroInteiroFinalVetor:
         T_NUMINTEIRO {$$=strdup(yytext); posFinal=atoi($$);}
        | error{erros++;yyerror("Esperado um numero do tipo inteiro",yytext);}
;

DefineTipoVetor:
	T_DE
	| error{erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"",yytext);}
;

TipoDoTipoVetor:
	DefineTipoVetor Tipos	
;

NomeVetor:
	T_VETOR{ NomeVetor = strdup(yytext); }
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
	T_INTERROMPA{fprintf(arquivo,"break;\n");} 
;

BlocosLogicos:
	BlocoLogico 
	| Comentarios 
	| Comentarios BlocosLogicos  
	| BlocoLogico BlocosLogicos 
;	

BlocoLogico:
	| String QuebrasComando
	| Atribuicao {fprintf(arquivo,";\n");} QuebrasComando
	| Lacos 
	| Desvios 
	| Interromper QuebrasComando 
	| FuncaoNativa {fprintf(arquivo,";\n");} QuebrasComando
	| FuncaoNaoNativa QuebrasComando
	| QuebrasComando BlocoLogico 
/*	| error{erros++;yyerror("Erro no bloco logico");} */
; 

//------------------------------------------------------------------------------------------------LACOS

Lacos:
	BlocoPara
	| BlocoEnquanto
	| BlocoRepita
;

//------------------------------------------------------------------------------------------------------------INICIO ENQUANTO
FacaEnquanto:
	T_FACA{fprintf(arquivo,")  { \n ");}
	| error{erros++; yyerror("Esperado \"FACA\"",yytext);}
;

InicioEnquanto:
	T_ENQUANTO {fprintf(arquivo, "While ( " );}
;

FimEnquanto:
	T_FIMENQUANTO {fprintf(arquivo,"\n  } ");}
	| error{erros++;yyerror("Esperado \"FIMENQUANTO\"",yytext);}
;

BlocoEnquanto:
	InicioEnquanto ExpressaoLogica FacaEnquanto QuebrasComando BlocosLogicos FimEnquanto QuebrasComando
/*	| error{erros++; yyerror("Erro no bloco ENQUANTO");}*/
;

//-----------------------------------------------------------------------------------------------------------FIM ENQUANTO

//---------------------------------------------------------------------------------------------------------------PARA

InicioPara:
	T_PARA{fprintf(arquivo, "for");}
;

FimPara:
	T_FIMPARA{fprintf(arquivo, "\n }");}
	| error{erros++;yyerror("Esperado \"FIMPARA\"",yytext);}
;

AlcancePara:
	T_DE {fprintf(arquivo, "; ");}
	| error{erros++; yyerror("Esperado \"DE\"",yytext);}
;

AtePara:
	RepitaAte
;

InicioAlcancePara:
	ArtmExpr
	| NumeroInteiro 
/*	| error{erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");} */
;

FimAlcancePara:
	ArtmExpr
	| NumeroInteiro
/*	| error{erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}*/
;

AlcancePasso:
	Variavel
	| NumeroInteiro
	| ArtmExpr
/*	| error{erros++;yyerror("Nao encontrado um numero ou variavel do tipo inteiro");}*/
;

PassoPara:
	T_PASSO
;

ExprCondicaoPara:
	AlcancePara InicioAlcancePara AtePara FimAlcancePara  
	| AlcancePara InicioAlcancePara AtePara FimAlcancePara PassoPara AlcancePasso
	| error{erros++;yyerror("Erro na condicao para",yytext);}
;

FacaPara:
	T_FACA
	| error{erros++;yyerror("Esperado \"FACA\"",yytext);}
;

BlocoPara:
	InicioPara Variavel {existeVariavel(variavel);}  ExprCondicaoPara FacaPara QuebrasComando BlocosLogicos FimPara QuebrasComando
;

//-----------------------------------------------------------------------------------------------------------------------REPITA
InicioRepita:
	T_REPITA{fprintf(arquivo, "do {");}
;

RepitaAte:
	T_ATE{fprintf(arquivo, "} while ");}
	| error{erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA",yytext);}
;

ExprRepitaAte:
	ExpressaoLogica
	| AbreParenteses ExpressaoLogica FechaParenteses 
/*	| error{erros++;yyerror("Erro na expressao do ATE");}*/
;

BlocoRepita:
	InicioRepita QuebrasComando BlocosLogicos RepitaAte ExprRepitaAte QuebrasComando
/*	| error{erros++;yyerror("Erro no bloco REPITA");}*/
;

//--------------------------------------------------------------------------------------------------DESVIOS

Desvios:
	BlocosSe
	| BlocosEscolha
;

InicioSe:
	T_SE{fprintf(arquivo, " if ( ");}
;

FimSe:
	T_FIMSE {fprintf(arquivo, " } ");}
	| error{erros++;yyerror("Esperado \"FIMSE\"",yytext);}
;

DesvioEntao:
	T_ENTAO{fprintf(arquivo, " ) {\n");}
	| error{erros++;yyerror("Esperado \"ENTAO\"",yytext);}
;

DesvioSenao:
	T_SENAO{fprintf(arquivo, " } else {  ");}
	| error{erros++;yyerror("Esperado \"SENAO\"",yytext);}
;

//--------------------------------------------------------------------------------------------------------------------------------------SE

BlocosSe:
	InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos DesvioSenao QuebrasComando BlocosLogicos FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos DesvioSenao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos BlocosSe DesvioSenao QuebrasComando BlocosLogicos BlocosSe FimSe QuebrasComando
	| InicioSe ExpressaoLogica DesvioEntao QuebrasComando BlocosLogicos DesvioSenao BlocosSe FimSe QuebrasComando
	| error{erros++;yyerror("Erro no Bloco SE",yytext);}
;

//--------------------------------------------------------------------------------------------------------------------------CASOS
InicioEscolha:
	T_ESCOLHA{fprintf(arquivo, " switch ");}	
;

FimEscolha:
	T_FIMESCOLHA  {fprintf(arquivo, " } \n");}   
	| error{erros++;yyerror("Esperado \"FIMESCOLHA\"",yytext);}
;

AbreParenteses:
	T_ABRE_PARENT {/*fprintf(arquivo, "( ");*/}
	| error{erros++;yyerror("Esperado \"(\"",yytext);}
;

FechaParenteses:
	T_FECHA_PARENT{/*fprintf(arquivo, " ) ");*/}
	| error{erros++;yyerror("Esperado \")\"",yytext);}
;
ExprEscolha:
	Variavel
	| AbreParenteses {fprintf(arquivo, " ( ");}   Variavel {existeVariavel(variavel);}  FechaParenteses {fprintf(arquivo, " )  { ");}	
/*	| error{erros++;yyerror("Necessario uma variavel para ESCOLHA");}*/
;

BlocosEscolha:
	InicioEscolha ExprEscolha QuebrasComando BlocoCasos FimEscolha QuebrasComando	
/*	| error{erros++;yyerror("Erro no Bloco de ESCOLHA");}*/
;

AbreCaso:
	T_CASO{fprintf(arquivo, "\n case ");} 
	| error{erros++;yyerror("Necessario um CASO",yytext);}
;

OutroCaso:
	T_OUTROCASO {fprintf(arquivo, "\n default : ");} 
	| error{erros++;yyerror("Necessario um OUTROCASO",yytext);}
;

BlocosCaso:
	AbreCaso SelecaoCasos QuebrasComando BlocosLogicos {fprintf(arquivo,"\n break;");}
	| AbreCaso SelecaoCasos QuebrasComando BlocosLogicos {fprintf(arquivo,"\n break;");}  BlocosCaso
	| error{erros++;yyerror("Erro no bloco caso",yytext);}
;



BlocoCasos:
	BlocosCaso OutroCaso {fprintf(arquivo,"\n break;");}  QuebrasComando  BlocosLogicos	 
;

Selecao:
	| Variavel {existeVariavel(variavel);}
	| String
	| TipoNumerico
/*	| error{erros++;yyerror("Variavel de escolha errada");}*/
;

SelecaoCasos:
	Selecao{fprintf(arquivo,":");}
	| Selecao {fprintf(arquivo,":");} {fprintf(arquivo,"\n break;");}   Separador {fprintf(arquivo, " \n  case ");}   SelecaoCasos
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
	| error{erros++;yyerror("Esperado \"FIMFUNCAO\"",yytext);}
;

DefinidorFuncao:
	T_DECLARAVAR	
	| error{erros++;yyerror("Esperado \":\"",yytext);}
;

Funcao:
	IniciaFuncao{strcpy(escopo,"local");} NomeFuncao DefinidorFuncao Tipos{ inserirfuncao(nomefuncao, tipo);   
	         id = hashfuncao_busca(nomefuncao, tipo, &hashFuncao);  //printf("%s" , hashFuncao.funcoes[id].nome);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
	 } QuebrasComando 
		 

	{fprintf(arquivo, "{ \n"); strcpy(param, "");   }  BlocoDeclaracao InicioLogica
	 BlocosLogicos Retorno QuebrasComando {strcpy(escopo,"global");} FimFuncao{fprintf(arquivo, "} \n");} QuebrasComando 
	| error{erros++;yyerror("Erro na declaracao de FUNCAO",yytext);}
;

PalavraRetorno:
	T_RETORNE   {fprintf(arquivo,"return "); }
	| error{erros++;yyerror("Esperado \"RETORNE\"",yytext);}
;

ExprRetorno:
	AbreParenteses String FechaParenteses
	| String
	| ArtmExpr
/*	| error{erros++;yyerror("Parametro de retorno errado");} */
;

Retorno:
	PalavraRetorno ExprRetorno {fprintf(arquivo, ";"); }
;

NomeFuncao:
	 Identificador {strcpy (nomefuncao, nome);   }   AbreParenteses Assinatura FechaParenteses
	| error{erros++;yyerror("Erro no nome da funcao",yytext);}
;

DefineVarAssinatura:
	T_DECLARAVAR
	| error{erros++;yyerror("Esperado \":\"",yytext);}
;

Assinatura:
	Variaveisfuncao DefineVarAssinatura Tipos
	| Assinatura  Separador Assinatura
	| error{erros++;yyerror("Erro no parametro da funcao",yytext);}
;

Variaveisfuncao:
        Variavel{ inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
                 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
        | Variavel { inserirvariavel(nome,tipo,escopo);// printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
		 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
          
}  Separador{strcat(param, ", ");} Variaveisfuncao
;	

InicioProcedimento:
	T_PROCEDIMENTO
;

FimProcedimento:
	T_FIMPROCEDIMENTO
	| error{erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"",yytext);}
;

NomeProcedimento:
	Identificador{strcpy (nomefuncao, nome); } AbreParenteses Assinatura FechaParenteses
	| error{erros++;yyerror("Erro no nome do procedimento",yytext);}
;

BlocoProcedimento:
	InicioProcedimento{strcpy(escopo,"local");} NomeProcedimento{ inserirfuncao(nomefuncao, "void");
                 id = hashfuncao_busca(nomefuncao, "void", &hashFuncao); // printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
         } QuebrasComando BlocoDeclaracao InicioLogica BlocosLogicos FimProcedimento QuebrasComando
/*	| error{erros++;yyerror("Erro no BlocoProcedimento");}*/
;

Comentarios:
	Comentario
	| Comentario Comentarios
;

Comentario:
	T_COMENTARIO /*{$$=strdup(yytext),fprintf(arquivo,"%s",$$);}*/ QuebrasComando
; 

Atribuidor:
	T_ATRIBUI {fprintf(arquivo, "=");}
;

LogicoFalso:
	T_LOGICO_FALSO {fprintf(arquivo, "false");}
	
;

LogicoVerdadeiro:
	T_LOGICO_VERDADEIRO {fprintf(arquivo, "true");}

;

Atribuido:
	String
	| ArtmExpr
	| FuncaoRetornavel
	| LogicoFalso
	| LogicoVerdadeiro
/*	| error{erros++;yyerror("Valor atribuido de forma errada");}*/
;

Atribuicao:
	Identificador {$$=strdup($1); strcpy(nome,$$); existeVariavel(nome); existeFuncao(nome,tipo); } Atribuidor Atribuido 
/*	| error{erros++;yyerror("Esperado \"<-\"");}*/
;

ExprSoma:
	T_SOMA {fprintf(arquivo, " + ");}

;

ExprSub:
	T_SUBTRACAO{fprintf(arquivo, " - ");}

;

ExprMult:
	T_MULT{fprintf(arquivo, " * ");}
;

ExprDiv:
	T_DIVISAO {fprintf(arquivo, " \\ ");}

;

ExprDivInt:
	T_DIVISAOINTEIRA {fprintf(arquivo, " / ");}

; 

ExprMod:
	T_MOD {fprintf(arquivo, " %% ");}
;

Negativo:
	T_SUBTRACAO {fprintf(arquivo, " - ");}
;

ExprPot:
	T_POTENCIA {fprintf(arquivo, " pow  ");}

;

NumeroInteiro:
	T_NUMINTEIRO {$$=strdup(yytext);  fprintf(arquivo,"%s",$$);}
	| error{erros++;yyerror("Esperado um numero do tipo inteiro",yytext);}
;

NumeroReal:
	T_NUMREAL {$$=strdup(yytext);  fprintf(arquivo,"%s",$$);}
;

Pi:
	T_PI {$$=strdup(yytext);  fprintf(arquivo,"%s",$$);}
;

Numero:
	NumeroInteiro
	| NumeroReal
	| Pi
;

ArtmExpr:
	Numero
	| Variavel {existeVariavel(variavel);} 
	| ArtmExpr ExprSoma ArtmExpr 
	| ArtmExpr ExprSub ArtmExpr 
	| ArtmExpr ExprMult ArtmExpr    
	| ArtmExpr ExprDiv ArtmExpr 
	| ArtmExpr ExprDivInt ArtmExpr 
	| ArtmExpr ExprMod ArtmExpr   
	| Negativo ArtmExpr  
	| ArtmExpr ExprPot ArtmExpr  
	| AbreParenteses{fprintf(arquivo, "(");} ArtmExpr{fprintf(arquivo, "(");}  FechaParenteses  
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
	Identificador  AbreParenteses{nomeFuncao = nome; existeFuncao(nomeFuncao, tipo);  fprintf(arquivo, "(");} FechaParenteses {fprintf(arquivo,")");}
	| Identificador AbreParenteses{nomeFuncao = nome; existeFuncao(nomeFuncao, tipo);  fprintf(arquivo, "(");} AssinaturaExistente  FechaParenteses {fprintf(arquivo,")");}
/*	| error{erros++;yyerror("Funcao inexistente");} */
;

AssinaturaExistente:
	Variavel {existeVariavel(variavel);}
	| Variavel {existeVariavel(variavel);}  Separador AssinaturaExistente
	| Numero
	| Numero Separador AssinaturaExistente
	| FuncaoNaoNativa {existeFuncao(nomeFuncao,tipo);}
	| FuncaoNaoNativa Separador AssinaturaExistente
	| FuncaoNativa
	| FuncaoNativa Separador AssinaturaExistente
/*	| error{erros++;yyerror("Erro de assinatura de funcao");}*/
;

InicioComprimento:
	T_COMPR{fprintf(arquivo,"strlen");}
;

Comprimento:
	InicioComprimento AbreParenteses {fprintf(arquivo, "(");}  Variavel {existeVariavel(variavel);} {fprintf(arquivo, ")");}  FechaParenteses
	| InicioComprimento AbreParenteses {fprintf(arquivo, "(");}   String {fprintf(arquivo, ")");}   FechaParenteses
/*	| error{erros++;yyerror("Erro na funcao Compr()");}*/
;

InicioCopia:
	T_COPIA{fprintf(arquivo,"strcpy");}
;

SegundoTermoCopia:
	InicioAlcancePara
;

Copia:
	InicioCopia AbreParenteses Variavel {existeVariavel(variavel);}  Separador SegundoTermoCopia Separador NumeroInteiro FechaParenteses 
/*	| error{erros++;yyerror("Erro na funcao Copia",yytext);}*/
;

InicioMaiusc:
	T_MAIUSC{fprintf(arquivo,"toupper");}
;

Maiusc:
	InicioMaiusc AbreParenteses {fprintf(arquivo, "(");}  Variavel {existeVariavel(variavel);} {fprintf(arquivo, ")");}   FechaParenteses
/*	| error{erros++;yyerror("Erro no funcao Maiusc");}*/
;

InicioRaiz:
	T_RAIZQ {fprintf(arquivo,"sqrt");}
;

Raiz: 
	InicioRaiz AbreParenteses {fprintf(arquivo, "(");}  ArtmExpr {fprintf(arquivo, ")");}    FechaParenteses 
/*	| error{erros++;yyerror("Erro na funcao Raiz");} */
;

CasasDecimais:
	|T_DECLARAVAR NumeroInteiro
	| error{erros++;yyerror("Esperado \":NUMEROINTEIRO\"",yytext);}
;

ExprEscreva:
	| String
	| ArtmExpr CasasDecimais
	| ExprEscreva Separador ArtmExpr DefineTipo NumeroInteiro
	| ExprEscreva Separador ArtmExpr
	| ExprEscreva Separador  ArtmExpr DefineTipo NumeroInteiro DefineTipo NumeroInteiro
	| ExprEscreva Separador  String
/*	| error{erros++;yyerror("Parametro improprio para funcao escreva");}*/
;

ParametrosEscreva:
	AbreParenteses{fprintf(arquivo, " (   ");} ExprEscreva {fprintf(arquivo, "  ) ");}  FechaParenteses
	| error{erros++;yyerror("Erro na funcao Escreva",yytext);}
;

InicioEscreva:
	T_ESCREVA{fprintf(arquivo, " printf ");}
;

Escreva:
	InicioEscreva ParametrosEscreva{fprintf(arquivo, ";");}
;

InicioEscreval:
	T_ESCREVAL {fprintf(arquivo, " printf ");}

;

Escreval:
	InicioEscreval ParametrosEscreva   {fprintf(arquivo, ";  printf(\"\\n\") ");} 	
/*	| error{erros++;yyerror("Erro na funcao escreval");}*/
;

InicioLeia:
	T_LEIA {fprintf(arquivo, " scanf ");}
;

Leia:
	InicioLeia AbreParenteses{fprintf(arquivo, " (");} Variavel {existeVariavel(variavel);}  FechaParenteses {fprintf(arquivo, " )");} 
/*	| error{erros++;yyerror("Erro na funcao leia (Antigo paçoca)");} */
;

CondicoesLogicas:
	T_IGUAL {fprintf(arquivo, " == ");}
	| T_DIFERENTE {fprintf(arquivo, " != ");}
	| T_MENORQUE {fprintf(arquivo, " < ");}
	| T_MENORIGUALQUE {fprintf(arquivo, " <= ");}
	| T_MAIORQUE {fprintf(arquivo, " > ");}
	| T_MAIORIGUALQUE {fprintf(arquivo, " >= ");}
	| error{erros++;yyerror("Erro na condicao logica",yytext);}
;

ExpressaoLogica:
	ArtmExpr CondicoesLogicas ArtmExpr
	| ExpressaoLogica OperadoresLogicos ExpressaoLogica
	| AbreParenteses ExpressaoLogica FechaParenteses
	| Variavel{existeVariavel(variavel);}
;


LogicoAnd:
	T_AND {fprintf(arquivo, " && ");}
;

LogicoOr:
	T_OR {fprintf(arquivo, " ||  ");}
;

LogicoNot:
	T_NOT {fprintf(arquivo, " ! ");}
;

LogicoXor:
	T_XOR {fprintf(arquivo, " ^ ");}
;

OperadoresLogicos:
	LogicoAnd
	| LogicoOr
	| LogicoNot
	| LogicoXor
;



%%

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



int yyerror(char *s, char * yytext) {
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

