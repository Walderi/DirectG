algoritmo "primo e nao primo "
// Função : Altere o programa de cálculo dos números primos, informando,
// caso o número não seja primo, por quais número ele é divisível.
// Autor : Walderi Moraes Willy Filho || George Lucas Gomes
// Data : 08/05/2013
// Seção de Declarações 
var
num,divisor,restodiv: inteiro
primo : logico
inicio
	escreval ("Entre com o numero desejado:")		
	leia(num)
	divisor <- num
	primo <- verdadeiro
	repita
		restodiv <- num mod divisor
		se (restodiv = 0) e (divisor <> 1) e (num > 1) entao
			divisor <- divisor-1
			primo <- falso
			escreval("Divisivel por ", divisor+1)
         	senao
        		divisor <- divisor-1			
      		fimse
		
		se (divisor+1 = num) entao
			primo <-verdadeiro
		fimse
      	ate (divisor<=1)
      	se primo entao
		escreval("Divisivel por ",1)
		escreval("E primo!")
	senao
      		escreval("Divisivel por 1")
		escreval("Nao e primo")
      	fimse
fimalgoritmo
