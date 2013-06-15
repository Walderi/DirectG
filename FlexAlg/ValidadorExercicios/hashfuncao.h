#define HASHFUNCAO_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int TAM_MAX = 20;



struct funcao[TAM_MAX] {
	int TAM_ENTR = 30;
	
	char *nome;
	nome = (char*) malloc( TAM_ENTR * sizeof(char));
	if(!nome){
	printf("Variavel execedeu o tamanho permetido\n");
	exit(1);}
	
	char *tiporeturn;
	tiporeturn = (char*) malloc( TAM_ENTR * sizeof(char));
	if(!tiporeturn){
	printf("Variavel execedeu o tamanho permetido\n");
	exit(1);}
	
	
}

funcao *funcao1;

void hashfuncao_iniciar();
void hashfuncao_inserir(char[] nome, char [] tipodereturn, funcao *funcao1);
int hashfuncao_busca( char[] nome, char[] tiporeturn, funcao *funcao1);
int hashfuncao_existe( char[] nome, char[] tiporeturn, funcao *funcao1);
#endif
