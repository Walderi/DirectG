#include "pilha.h"

int push (TipoPilha pilha, int lineNo, char *Errno)
{
	compPilha.pilha[compPilha.elementos].lineNo = lineNo;
	strcpy(compPilha.pilha[compPilha.elementos].Errno,Errno);
	compPilha.elementos ++;

	return 1;
}

void PilhaVazia(TipoPilha pilha)
{
	compPilha.elementos=0;
	int i;
	for(i=0; i<MAX_TAM_PILHA; i++)
	{
		compPilha.pilha[i].lineNo=0;
		strdup(compPilha.pilha[i].Errno);
	}
}

int pop_all (TipoPilha pilha)
{
	int i;
	for(i=0; i<compPilha.elementos; i++)
	{
		printf("Erro encontrado na linha %d, com o tolken %s \n",compPilha.pilha[i].lineNo, compPilha.pilha[i].Errno );
      		compPilha.pilha[i].lineNo=0;
		strdup(compPilha.pilha[i].Errno);
        }
        compPilha.elementos=0;
	return 1;
}

