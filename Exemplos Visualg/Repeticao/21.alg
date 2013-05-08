algoritmo "primo"
// Função : Faça um programa que peça um número inteiro e
// determine se ele é ou não um número primo.
// Um número primo é aquele que é divisível somente por ele mesmo e por 1.
// Autor : Walderi Moraes Willy Filho
// Data : 08/05/2013
// Seção de Declarações
var
n,m,l: inteiro
p : logico
inicio
      leia(n)
      m <- n\2
      repita
      l <- n mod m
      se (l <> 0) entao
         m <- m-1
         senao
        p <- verdadeiro
        interrompa
      fimse
      ate (m<=1)
      se p entao
         escreval("não é primo")
         senao
      escreval("e primo")
      fimse
fimalgoritmo
