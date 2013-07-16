algoritmo "primo 1 a N"
// Função :Faça um programa que mostre todos os primos entre 1 e N sendo N um
// número inteiro fornecido pelo usuário. O programa deverá mostrar também o
// número de divisões que ele executou para encontrar os números primos.
// Serão avaliados o funcionamento, o estilo e o número de testes (divisões)
// executados.
// Autor : George Lucas Gomes
// Data : 11/05/2013
// Seção de Declarações 
var
numero,i,j,f,divisoes: inteiro
inicio
	escreval("Insira numero desejado: ")
      	leia(numero)
	i <- 1
	repita 
		j <- 1
		f <- 0
		repita
			se (i mod j = 0) entao
				divisoes <- divisoes + 1
				f <- f+1
				j <- j+1
			senao
				divisoes <- divisoes + 1
				j <- j + 1
			fimse
		ate (j>i)
		se (f <= 2) entao
			escreval(i)
		fimse
		i <- i+1	
	ate (i>numero)
	escreval("Numero de divisoes ", divisoes)
fimalgoritmo
