algoritmo "Media idade da turma"
// Função : Faça um programa que peça para n pessoas a sua idade,
// ao final o programa devera verificar se a média de idade da turma varia entre
// 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem,
// adulta ou idosa, conforme a média calculada.
// Autor : Walderi Moraes Willy Filho
// Data : 08/5/2013
// Seção de Declarações 
var
contador,QtPessoas,soma,num: inteiro
inicio
	contador<-0
	escreval("Quantas pessoas vao informar a idade?")
	leia(QtPessoas)
	repita
		leia(num)
		soma <- soma + num
         	contador <- contador+1
	ate(contador=QtPessoas)
	escreva("Media de idades ", (soma/contador))
	se ((soma/contador)>0) e ((soma/contador)<25) entao
  		 escreval(" e a turma e Jovem")
   	senao
   		se ((soma/contador)>25) e ((soma/contador)<60) entao
      			escreval(" e a turma e Adulta")
      		senao
      			escreval(" e a turma e Idosa")
   		fimse
	fimse
fimalgoritmo
