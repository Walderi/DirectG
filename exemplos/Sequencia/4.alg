algoritmo "Media de notas"
// Função :
// Autor :
// Data : 06/05/2013
// Seção de Declarações 
var
	nota1 : real
	nota2 : real
	nota3 : real
	nota4 : real
	soma : real
	media : real

inicio
	// Seção de Comandos 
	escreval("Entre com a primeira nota:")
	leia(nota1)
	escreval("Entre com a segunda nota:")
	leia(nota2)
	escreval("Entre com a terceira nota:")
	leia(nota3)
	escreval("Entre com a quarta nota:")
	leia(nota4)
	soma <- nota1 + nota2 + nota3 + nota4
	media <- soma/4

	escreval("A media foi:" ,media)
fimalgoritmo
