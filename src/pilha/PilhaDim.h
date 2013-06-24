#ifndef PILHADIM_H_
#define PILHADIM_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int TipoChave;

typedef char* TipoString;

typedef struct {
	int lineNo;
	TipoString errNo;
	TipoString errMsg;
} TipoItem;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
	TipoItem Item;
	TipoApontador Prox;
} TipoCelula;

typedef struct {
	TipoApontador Fundo, Topo;
	int Tamanho;
} TipoPilha;

void FPVazia(TipoPilha *Pilha);

int Vazia(TipoPilha Pilha);

void Empilha(TipoItem Item, TipoPilha *Pilha);

void Desempilha(TipoPilha *Pilha, TipoItem *Item);

int Tamanho(TipoPilha Pilha);

#endif

