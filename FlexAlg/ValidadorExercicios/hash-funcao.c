#include "hashfuncao.h"



// A funcao hash_inicar seta todos valores da tabela como NULL
void hashfuncao_iniciar(){

	for(i = 0; i<TAM_MAX; i++){
		funcao1[i].nome = NULL;
		funcao1[i].tipo = NULL;
		
		}

}

// A funcao hash_inserir insere as variaveis dentro da tabela as informacoes,
// Ela passa como parametro o nome e o tipo de retorno da funcao
void hashfuncao_inserir(char[] nome, char[] tiporeturn ){

	int id;
	int existe;

		existe = hashfuncao_existe(nome ,tiporeturn);
		
		if(existe == 0){
	for(id=0; id < TAM_MAX; id++){
		
		if(funcao1[id].nome == NULL){
		
			strcpy(funcao1[id].nome , nome);
			strcpy(funcao1[id].tipo , tiporeturn);
			break;
				} else {
			printf("EXCESSO DE VARIAVEIS!! ESTOURO DE MEMORIA!\n");
				}
		
	}
	} else {
		printf("FUNCAO JA DECLARADA!!\n")
	}
}
//A funcao hashfuncao_busca vai procurar por toda tabela qual o id da funcao
int hashfuncao_busca( char[] nome, char[] tiporeturn){

	int id;
	for(id=0; id < TAM_MAX; id++){
		
		if((strcmp (nome, funcao1[id].nome) == 0) && (strcmp (tiporeturn, funcao1[id].tiporeturn) == 0)){
			
			return id;
			
			}else{
			printf("Funcao nao encontrada\n");
			return -1;
			}
		}
}
//A funcao hashfuncao_busca vai procurar por toda tabela se a funcao foi declarada(retorna 1) ou nao(retorna 0)
int hash_existe( char[] nome, char[] tiporeturn){

	int id;
	for(id=0; id < TAM_MAX; id++){
		
		if((strcmp (nome, funcao1[id].nome) == 0) && (strcmp (tipo, funcao1[id].tipo) == 0) ){
			
			return 1;
			
			}else{
			return 0;
			}
		}
}
