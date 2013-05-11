algoritmo "primo"
// Função : Faça um programa que peça um número inteiro e
// determine se ele é ou não um número primo.
// Um número primo é aquele que é divisível somente por ele mesmo e por 1.
// Autor : Walderi Moraes Willy Filho
// Data : 08/05/2013
// Seção de Declarações
var
num,divisor,restodiv: inteiro

inicio
	
	divsor  <- 2
	escreval ("Entre com o numero desejado:")		
	leia(num)
	
	se(num < 2) entao
		escreval("invalido")
	senão
	    se(num = 2) entao
			escreval("é primo")
	    senao
	    enquanto(divisor <n num)
	    	restodiv = (num mod divisor)
	    	se (restodiv = 0 )
	        	escreval("não é primo")
			    interrompa
			fimse
			divisor <- divisor +1
		fimenquanto
		se(restodiv <> 0)
			escreval("é primo")
		fimse
	fimse
fimalgoritmo