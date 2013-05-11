algoritmo "fatorial"
// Função : Faça um programa que calcule o fatorial de um número
// inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var     
    termo : inteiro
	fatorialAnterior : inteiro
	fatorial : inteiro
    numero : inteiro

inicio
	escreval("Digite o numero que se deseja obter o calculo fatorial")
	leia(numero)
        
    enquanto (termo < numero)
    	se (termo = 0)
    		entao
    			fatorial <- 1
    			senao se (termo = 1) 
    				entao 
		                fatotialAnterior <- 1
    					senao 
    						entao 
     						    termoAnterior <- fatorial
				                fatorial <- termo*termoAnterior
    					fimse 
    			fimse
        fimse 
        termo <- termo + 1
 	fimenquanto  
 	
 	escreval("o fatorial de ",numero,"= ", fatorial)
fimalgoritmo
