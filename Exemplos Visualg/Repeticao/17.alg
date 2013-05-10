algoritmo "fatorial"
// Função : Faça um programa que calcule o fatorial de um número
// inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var
an,fat,c,n: inteiro
inicio
      escreval("fatorial de qual numero?")
      leia(n)
      an <- 1

      c <- 1
           enquanto c <= n faca
                    fat <- an * c
                    an <- fat
                    c <- c+1
           fimenquanto
      escreval("o fatorial de ",n," é: ", an)
fimalgoritmo
