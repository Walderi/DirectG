algoritmo "primo"
// Função :
// Autor :
// Data :
// Seção de Declarações
var
n,n4,cont,x: inteiro
numero : real
inicio

enquanto( n4 <> 1) faca
escreva("Escreva um número inteiro Positivo: ")
leia (n)
se (n>0) entao
n4 <- 1

para cont de 2 ate n-1 faca
numero <- n mod cont
se ( numero = 0) entao
x <- x + 1
fimse
fimpara

se (x<>0)entao
escreval("Número não é primo")
senao
escreval("Número primo")
fimse

senao

n4 <- 0 

fimse
fimenquanto
fimalgoritmo
