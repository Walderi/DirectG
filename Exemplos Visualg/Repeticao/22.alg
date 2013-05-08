algoritmo "primo indicando porque caso nao seja primo qual numero seria divisivel"
// Função : Altere o programa de cálculo dos números primos, informando,
// caso o número não seja primo, por quais número ele é divisível.
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
      escreval("e primo pois é divisivel por ", m)
      fimse
fimalgoritmo
