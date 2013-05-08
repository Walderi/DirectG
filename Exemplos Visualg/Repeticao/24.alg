algoritmo "Media"
// Função : Faça um programa que calcule o mostre a média aritmética de N notas.
// Autor : Walderi Moraes Willy Filho
// Data : 08/5/2013
// Seção de Declarações 
var
c,d,soma,num: inteiro
inicio
c<-0
escreval("quantos numeros voce quer tirar a media?")
leia(d)
repita
leia(num)
         soma <- soma + num
         c <- c+1
ate(c=d)
escreval("media ", (soma/c))
fimalgoritmo
