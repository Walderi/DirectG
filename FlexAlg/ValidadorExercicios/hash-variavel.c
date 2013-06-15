#include "hashvariavel.h"


// A função hash_inicar seta todos valores da tabela como NULL
void hash_iniciar(){

	for(i = 0; i<TAM_MAX; i++){
		variavel1[i].nome = NULL;
		variavel1[i].tipo = NULL;
		variavel1[i].escopo = NULL;
		}

}

// A função hash_inserir insere as variaveis dentro da tabela as informações,
// Ela passa como parametro
void hash_inserir(char[] nome, char[] tipo, char[] escopo){

	int id;
	int existe;

		existe = hash_existe(nome ,tipo,escopo);
		
		if(existe == 0){
	for(id=0; id < TAM_MAX; id++){
		
		if(variavel1[id].nome == NULL){
		
			strcpy(varivel1[id].nome , nome);
			strcpy(varivel1[id].tipo , tipo);
			strcpy(varivel1[id].escopo , escopo);
			varivel1[id].valordefault = NULL ;
			break;
				} else {
			printf("EXCESSO DE VARIAVEIS!! ESTOURO DE MEMORIA!\n");
				}
		
	}
	} else {
		printf("VARIAVEL JÁ DECLARADA!!\n")
	}
}

//A função hash_busca vai procurar por toda tabela qual o id da variavel
int hash_busca( char[] nome, char[] tipo, char[] escopo){

	int id;
	for(id=0; id < TAM_MAX; id++){
		
		if((strcmp (nome, varivel1[id].nome) == 0) && (strcmp (tipo, varivel1[id].tipo) == 0) && (strcmp (escopo, varivel1[id].escopo) == 0)  ){
			
			return id;
			
			}else{
			return -1;
			}
		}
}
//A função hash_busca vai procurar por toda tabela se a variavel foi declarada(retorna 1) ou nao(retorna 0)
int hash_existe( char[] nome, char[] tipo, char[] escopo){

	int id;
	for(id=0; id < TAM_MAX; id++){
		
		if((strcmp (nome, varivel1[id].nome) == 0) && (strcmp (tipo, varivel1[id].tipo) == 0) && (strcmp (escopo, varivel1[id].escopo) == 0)  ){
			
			return 1;
			
			}else{
			return 0;
			}
		}
}
