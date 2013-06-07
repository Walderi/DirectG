#ifndef _PILHA_H_
#define _PILHA_H_

#define MAX_TAM 9999

typedef int tipoLinha;

typedef char [MAX_TAM] tipoString;

typedef struct TipoPilha {
	tipoLinha lineNo;
	tipoString Errno;
} TipoPilha;

TipoPilha minhaPilha;

int push (TipoPilha pilha );

int pop_all (TipoPilha pilha);
