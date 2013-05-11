algoritmo "maior, menor e soma,  numero de 0 ate 1000"
// Função : Faça um programa que, dado um conjunto de N números,
// determine o menor valor, o maior valor e a soma dos valores.
// Autor : Walderi Moraes Willy Filho
// Data : 5/7/2011
// Seção de Declarações 
var
	qntValores : inteiro
	menorNumero : inteiro
    maiorNumero : inteiro
    somaNumeros : inteiro
	contador : inteiro

inicio
	escreval("digite a quantidade de valores")
    leia(qntValores)
    soma <- 0
    contador <- 0
    
    se (qntValores <= 1)
    	entao
   			escreval("quantidade invalida")
   			interrompa
        senao
       		enquanto (contador <= qntValores)
       			 			 
       			escreval("digite um numero")
            	leia(numero)
            		se((numero < 0) e (numero>1000)) 
			            entao
			            se (contador = 0)
			    			entao
			    				menorNumero <- numero
			    				maiorNumero <- numero
			    				contador <- contador +1	
			    	    fimse
			    		se(numero <= menorNumero))
				        	entao
				           		menorNumero <- numero
				            		senão se (numero >= maiorNumero)
				            		      	  entao
				            						maiorNumero <- numero
				               			  fimse
				        fimse
				        soma  = soma + numero	
				        contador = contador +1		
				    fimse
           fimenquanto		
 	fimse      
    escreval("menor numero = ", menorNumero)
    escreval("maior numero =", maiorNumero)
    escreval("soma = ", soma)
fimalgoritmo
