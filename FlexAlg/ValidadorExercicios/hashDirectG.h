#ifndef HASHDIRECTG_H_
#define HASHDIRECTG_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_MAX_VARIAVEL 20
#define TAM_ENTR 30
#define TAM_MAX_FUNCAO 300

typedef struct TipoFuncao {
	char nome[TAM_ENTR];
	char tiporeturn[TAM_ENTR];
}TipoFuncao;

typedef struct VetFuncao {
	TipoFuncao funcoes [TAM_MAX_FUNCAO];
}VetFuncao;

typedef struct TipoVariavel {
	char nome[TAM_ENTR];
	char tipo[TAM_ENTR];
	char escopo[TAM_ENTR];
	char valorDefault[TAM_ENTR];
}TipoVariavel;

typedef struct VetVariavel {
	TipoVariavel variaveis[TAM_MAX_VARIAVEL];
}VetVariavel;

VetFuncao hashFuncao;
VetVariavel hashVariavel;

void hashfuncao_iniciar(VetFuncao *hashFuncao, VetVariavel *hashVariavel);
void hashfuncao_inserir(char nome[], char tipodereturn[], VetFuncao *hashFuncao);
int hashfuncao_busca( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
int hashfuncao_existe( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
void hashvariavel_inserir(char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel);
int hashvariavel_busca( char nome[], char tipo[], char escopo[],VetVariavel *hashVariavel );
int hashvariavel_existe( char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel );

#endif
