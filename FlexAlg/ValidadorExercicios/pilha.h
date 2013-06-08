#ifndef PILHA_H_
#define PILHA_H_

#include <stdio.h>
#include <stlib.h>

#define MAX_TAM_STR 300
#define MAX_TAM_PILHA 9999

typedef int tipoLinha;

typedef char [MAX_TAM_STR] tipoString;

typedef struct DadoPilha {
	tipoLinha lineNo;
	tipoString Errno;
} DadoPilha;

typedef struct TipoPilha {
	int elementos;
	DadoPilha pilha [MAX_TAM_PILHA];
}TipoPilha;

TipoPilha compPilha;

int push (TipoPilha pilha, int lineNo, char *Errno);

void PilhaVazia(TipoPilha pilha);

int pop_all (TipoPilha pilha);
