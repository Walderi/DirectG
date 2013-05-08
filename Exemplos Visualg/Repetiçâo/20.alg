algoritmo "fatorial"
// Função :
// Autor :
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
