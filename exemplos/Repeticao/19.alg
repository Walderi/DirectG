
// Função : Altere o programa anterior para que ele aceite apenas
// números entre 0 e 1000.
// Autor : Walderi Moraes Willy Filho | George Lucas Gomes
// Data : 6/5/2013
// Seção de Declarações 
var
  menor,maior,soma,num,qtNumeros,contador: inteiro
inicio
	escreval("Quantos numeros voce quer escrever?")
	leia(qtNumeros)
	
	se qtNumeros <= 0 entao //Se numero inserido for menor que 0
		repita       		
			se qtNumeros = 0 entao
				escreval("0 e sua resposta")
				interrompa
			senao
				escreval("Tem que ser maior que 0")
				leia(qtNumeros)				
			fimse
		ate (qtNumeros > 0)

	senao
		se (qtNumeros = 1) entao
			escreval("Insira numero:")
			leia(num) 
			se (num < 0) ou (num > 1000) entao
				repita //repita ate numero ser valido
					escreval("Numero invalido! Insira numero entre 0 e 1000.")
					leia(num)
				ate ((num >= 0) e (num <= 1000))
				
				escreval("Menor numero:",num)
				escreval("Maior numero:",num)
				escreval("Soma dos numeros:",num)
				interrompa //finaliza programa
			senao
				escreval("Menor numero:",num)
				escreval("Maior numero:",num)
				escreval("Soma dos numeros:",num)
				interrompa
			fimse
		senao
			escreval("Insira numero:")
			leia(num)
			se (num < 0) ou (num > 1000) entao //tem que estar entre 0 e 1000
				repita //repita ate o numero ser valido
					escreval("Numero invalido! Insira numero entre 0 e 1000.")
			        	leia(num)
				ate ((num >= 0) e (num <= 1000)) 
			senao
         			menor <- num
				maior <- num
         			soma <- num
			fimse
	
			contador <- 0
		
			repita
				escreval("Insira numero:")
				leia(num)
				se (num < menor) e (num >= 0) e (num <= 1000) entao
					soma <- soma + num
					menor <- num
				senao
					se (num > maior) e (num >= 0) e (num <= 1000) entao
						soma <- soma + num
						maior <- num
					senao
						se (num < 0) ou (num > 1000) entao
							escreval("Numero invalido! Insira numero entre 0 e 1000.")
						senao
							soma <- soma + num
						fimse
					fimse
				fimse
			contador <- contador+1
			ate(contador=(qtNumeros-1))
		
			escreval("Menor numero:", menor)
			escreval("Maior numero:", maior)
			escreval("Soma dos numeros:", soma)
		
		fimse
	fimse
fimalgoritmo
