lgoritmo "Função que retorna 'P' para argumento positivo e 'N' para 0 ou negativo"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações

var

n : inteiro

char : caractere



funcao retornaValor(n:inteiro):caracter

var

valor : caracter



Inicio

// Corpo da função

se(n>0) entao

        valor <- "P"

senao

     valor <- "N"

fimse

retorne valor

fimfuncao



inicio

// Seção de Comandos

escreval("Digite um numero")

leia(n)

char<-retornaValor(n) //chamada da função

escreval("Valor: ", char)

fimalgoritmo
