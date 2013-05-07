algoritmo "fatorial"
// Função :
// Autor :
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
