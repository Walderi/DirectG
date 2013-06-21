#include "hashDirectG.h"


// A funcao hash_inicar seta todos valores da tabela como NULL
void hashfuncao_iniciar(VetFuncao *hashFuncao, VetVariavel *hashVariavel){
	int i;
	for(i = 0; i<TAM_MAX_VARIAVEL; i++){
		strdup(hashFuncao->funcoes[i].nome);
		strdup(hashFuncao->funcoes[i].tiporeturn);
		strdup(hashVariavel->variaveis[i].escopo);
		strdup(hashVariavel->variaveis[i].nome);
		strdup(hashVariavel->variaveis[i].tipo);
		strdup(hashVariavel->variaveis[i].valorDefault);
		}

}

// A funcao hash_inserir insere as variaveis dentro da tabela as informacoes,
// Ela passa como parametro o nome e o tipo de retorno da funcao
void hashfuncao_inserir(char* nome, char* tiporeturn, VetFuncao *hashFuncao ){

	int id;
	int existe;

		existe = hashfuncao_existe( nome ,tiporeturn, hashFuncao );
		
		if(existe == 0){
	for(id=0; id < TAM_MAX_VARIAVEL; id++){
		
		if( hashFuncao->funcoes[id].nome == NULL){
		
			strcpy( hashFuncao->funcoes[id].nome , nome);
			strcpy( hashFuncao->funcoes[id].tiporeturn , tiporeturn);
			break;
				} else {
			printf("EXCESSO DE VARIAVEIS!! ESTOURO DE MEMORIA!\n");
				}
		
	}
	} else {
		printf("FUNCAO JA DECLARADA!!\n");
	}
}
//A funcao hashfuncao_busca vai procurar por toda tabela qual o id da funcao
int hashfuncao_busca( char* nome, char* tiporeturn, VetFuncao *hashFuncao ){

	int id;
	for(id=0; id < TAM_MAX_VARIAVEL; id++){
		
		if((strcmp (nome,  hashFuncao->funcoes[id].nome) == 0) && (strcmp (tiporeturn,  hashFuncao->funcoes[id].tiporeturn) == 0)){
			
			return id;
			
			}else{
			printf("Funcao nao encontrada\n");
			return -1;
			}
	}

	return -1;
}
//A funcao hashfuncao_busca vai procurar por toda tabela se a funcao foi declarada(retorna 1) ou nao(retorna 0)
int hashfuncao_existe( char* nome, char* tiporeturn, VetFuncao *hashFuncao ){

	int id;
	for(id=0; id < TAM_MAX_VARIAVEL; id++){
		
		if((strcmp(nome, hashFuncao->funcoes[id].nome) == 0) && (strcmp(tiporeturn,  hashFuncao->funcoes[id].tiporeturn) == 0) ){
			
			return 1;
			
		}
	}

	return 0;
}

// A função hash_inserir insere as variaveis dentro da tabela as informações,
// Ela passa como parametro
void hashvariavel_inserir(char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel){

	int id;
	int existe;

		existe = hashvariavel_existe(nome ,tipo,escopo, hashVariavel);

	if(existe == 0){
		for(id=0; id < TAM_MAX_VARIAVEL; id++){

			if(hashVariavel->variaveis[id].nome == NULL){

				strcpy(hashVariavel->variaveis[id].nome , nome);
				strcpy(hashVariavel->variaveis[id].tipo , tipo);
				strcpy(hashVariavel->variaveis[id].escopo , escopo);
				strdup(hashVariavel->variaveis[id].valorDefault);
				break;
			} else {
				printf("EXCESSO DE VARIAVEIS!! ESTOURO DE MEMORIA!\n");
			}
		}
	} else {
		printf("VARIAVEL JÁ DECLARADA!!\n");
	}
}

//A função hash_busca vai procurar por toda tabela qual o id da variavel
int hashvariavel_busca( char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel){

	int id;
	for(id=0; id < TAM_MAX_VARIAVEL; id++){

		if((strcmp (nome, hashVariavel->variaveis[id].nome) == 0) && (strcmp (tipo, hashVariavel->variaveis[id].tipo) == 0)
				&& (strcmp (escopo, hashVariavel->variaveis[id].escopo) == 0)  ){

			return id;
		}
	}

	return -1;
}

//A função hash_busca vai procurar por toda tabela se a variavel foi declarada(retorna 1) ou nao(retorna 0)
int hashvariavel_existe( char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel){

	int id;
	for(id=0; id < TAM_MAX_VARIAVEL; id++){

		if((strcmp (nome, hashVariavel->variaveis[id].nome) == 0) && (strcmp (tipo, hashVariavel->variaveis[id].tipo) == 0)
				&& (strcmp (escopo, hashVariavel->variaveis[id].escopo) == 0)  ){

			return 1;
		}
	}

	return 0;
}
