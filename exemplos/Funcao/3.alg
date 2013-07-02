algoritmo "Função para soma de 3 argumentos"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações

var

n1 : inteiro

n2 : inteiro

n3 : inteiro

soma : inteiro



funcao soma3numeros(n1,n2,n3:inteiro):inteiro

var

resultado : inteiro



Inicio

// Corpo da função

resultado<-n1+n2+n3

retorne resultado

fimfuncao



inicio

// Seção de Comandos

escreval("Digite o primeiro numero")

leia(n1)

escreval("Digite o segundo numero")

leia(n2)

escreval("Digite o terceiro numero")

leia(n3)

soma<-soma3numeros(n1,n2,n3) //chamada da função

escreval("Soma: ", soma)

fimalgoritmo
