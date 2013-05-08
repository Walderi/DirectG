algoritmo "primo indicando porque caso nao seja primo qual numero seria divisivel"
// Função :Faça um programa que mostre todos os primos entre 1 e N sendo N um
// número inteiro fornecido pelo usuário. O programa deverá mostrar também o
// número de divisões que ele executou para encontrar os números primos.
// Serão avaliados o funcionamento, o estilo e o número de testes (divisões)
// executados.
// Autor : Walderi Moraes Willy Filho
// Data : 08/05/2013
// Seção de Declarações 
var
n,m,l: inteiro
p : logico
inicio
      leia(n)
      repita
      m <- n\2
      repita
      p <- falso
      l <- n mod m
      se (l <> 0) entao
         m <- m-1
         senao
        p <- verdadeiro
        interrompa
      fimse
      ate (m<=1)
      se p entao
        // escreval("não é primo pois é divisivel por ", m)
         senao
      escreval(n," é primo")
      fimse
      n <- (n-1)
      ate (n<=1)
      escreval(" 3 é primo")
      escreval(" 2 é primo")

      
fimalgoritmo
