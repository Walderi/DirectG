algoritmo "fibonacci até o valor ser menor que quinhentos"
// Função : A série de Fibonacci é formada pela seqüência
// 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que
// o valor seja maior que 500.
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var
	termo : inteiro	
	termoAnterior : inteiro
	termoAnteriorAoAnterior : inteiro
	valorFibonacci : inteiro

inicio

    termo <- 0
    valorFibonacci <- 0
    
    enquanto (valorFibonacci < 500)
    	se (termo = 0)
    		entao
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
    					                se (valorFibonacci > 500)
    					                	entao
    					                	senao
    					                		escreval(" ", (valorFibonacci))
    					                fimse 	
    						    fimse 
    					fimse
    		    fimse 
    	fimse
	fimenquanto    	
fimalgoritmo

