#ifndef HASHVARIAVEL_H_
#define HASHVARIAVEL_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int TAM_MAX = 300;

struct variavel[TAM_MAX] {
	int TAM_ENTR = 30;
	char *nome;
	nome = (char*) malloc( TAM_ENTR * sizeof(char));
	if(!nome){
	printf("Variavel execedeu o tamanho permetido\n");
	exit(1);}
	char *tipo;
	tipo = (char*) malloc( TAM_ENTR * sizeof(char));
	if(!tipo){
	printf("Variavel execedeu o tamanho permetido\n");
	exit(1);}
	char *escopo;
	escopo = (char*) malloc(TAM_ENTR * sizeof(char));
	char *valordefault;
	valuedefault = (char*) malloc(TAM_ENTR * sizeof(char)); 
	

}
variavel varivel1;

void hash_iniciar();
void hash_inserir(char[] nome, char [] tipo, char[] escopo, variavel *variavel1);
int hash_busca( char[] nome, char[] tipo, char[] escopo, variavel *variavel1);
int hash_existe( char[] nome, char[] tipo, char[] escopo, variavel *variavel1);
#endif
