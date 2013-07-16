algoritmo "maior, menor e soma"
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
	numero : inteiro

inicio
	escreval("digite a quantidade de valores")
    leia(qntValores)
    somaNumeros <- 0
    contador <- 0
    
    
	se (qntValores <= 1) entao
   		escreval("quantidade invalida")
   		interrompa
        senao
       		enquanto (contador <= qntValores) faca
       			escreval("digite um numero")
            		leia(numero)
            
            		se (contador = 0) entao
               				menorNumero <- numero
    			              	maiorNumero <- numero
    				            contador <- contador +1	
	               senao            	
	            		se(numero <= menorNumero) entao
	            			menorNumero <- numero
	            		senao
					se (numero >= maiorNumero) entao
	            				maiorNumero <- numero
	            					
	            			fimse
	            		fimse
	            	fimse
	            	somaNumeros  <- somaNumeros + numero	
	           	contador <- contador +1		
	 
		fimenquanto
	fimse		
            
      escreval("menor numero = ", menorNumero)
      escreval("maior numero =", maiorNumero)
      escreval("soma = ", somaNumeros)
fimalgoritmo
