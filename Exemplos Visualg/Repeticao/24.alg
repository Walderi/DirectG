algoritmo "Media"
// Função : Faça um programa que calcule o mostre a média aritmética de N notas.
// Autor : Walderi Moraes Willy Filho || George Lucas Gomes
// Data : 08/5/2013
// Seção de Declarações 
var
contador,QtNumeros,soma,num: inteiro
inicio
	contador<-0
	escreval("De quantos numeros voce quer tirar a media?")
	leia(QtNumeros)
	repita
		leia(num)
        	soma <- soma + num
        	contador <- contador + 1
	ate(contador=QtNumeros)
	escreval("Media= ", (soma/contador))
fimalgoritmo
