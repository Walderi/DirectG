algoritmo "fatorial"
// Função : Altere o programa de cálculo do fatorial,
// permitindo ao usuário calcular o fatorial várias vezes
// e limitando o fatorial a números inteiros positivos e menores que 16.
// Autor : Walderi Moraes Willy Filho
// Data : 07/05/2013
// Seção de Declarações 
var
an,fat: real
c,n: inteiro
inicio
      repita
      escreval("fatorial de qual numero?")
      leia(n)
      se (n>16) entao
         escreval("numeros menores que 16 por favor")
         interrompa
      senao
      an <- 1

      c <- 1
           enquanto c <= n faca
                    fat <- an * c
                    an <- fat
                    c <- c+1
           fimenquanto
      fimse
      escreval("o fatorial de ",n," é: ", an)
      escreval("digite '-1' para sair")
      ate (n=-1)
fimalgoritmo
