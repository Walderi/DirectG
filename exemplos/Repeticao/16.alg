algoritmo "fibonacci aé o n-esimo termo maior que 500"
// Função : A série de Fibonacci é formada pela seqüência
// 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que
// o valor seja maior que 500.
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var
an,at,pro:real
c,n: inteiro
inicio
      escreval("qual o numero de fibonacci voce quer?")
      leia(n)
      an <- 1
      escreval("o numero da sequencia é na posicao 1 é 1")
      at <- 1
      escreval("o numero da sequencia é na posicao 2 é 1")

      c <- 1
           enquanto c <= (n-2) faca
                    pro <- an + at
                    escreval("o numero da sequencia é na posicao ",c+2," é ", pro)
                    an <- at
                    at <- pro
                    c <- c+1
           fimenquanto
      escreval("o numero da sequencia é: ", at)
fimalgoritmo
