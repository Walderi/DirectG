algoritmo "fibonacci até o n-esimo termo"
// Função : A série de Fibonacci é formada pela seqüência
// 1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar
// a série até o n-ésimo termo.
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var
	termo : inteiro
	termoAnterior : inteiro
	termoAnteriorAoAnterior : inteiro
	valorFibonacci : inteiro
	enesimoTermo : inteiro

inicio
	escreval("Escreva o tamanho da sequencia a ser gerada")
    leia(enesimoTermo)
    termo <- 0
    
    enquanto (termo < enesimoTermo)
    	se (termo = 0)
    		entao
    			valorFibonacci <- 0
    			escreval(" ", valorFibonacci)
    			senao se (termo = 1) 
    				entao 
    				valorFibonacci <- 1
	                escreval(" ", valorFibonacci)
    					senao se (termo = 2)
    						entao 
    							valorFibonacci <- 1
	               				termoAnterior <- 1
	                            termoAnteriorAoAnterior <-0
    							escreval(" ", valorFibonacci)
    							senao se (termo > 2)
    								entao
    									termoAnteriorAoAnterior <- termoAnterior
    					                termoAnterior <- valorFibonacci
    					                valorFibonacci <- termoAnteriorAoAnterior + termoAnterior
    					                escreval(" ", (valorFibonacci))
    						    fimse 
    					fimse
    		    fimse 
    	fimse
    	termo <- termo + 1
	fimenquanto    	
fimalgoritmo
