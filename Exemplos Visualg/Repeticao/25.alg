algoritmo "Media idade da turma"
// Função : Faça um programa que peça para n pessoas a sua idade,
// ao final o programa devera verificar se a média de idade da turma varia entre
// 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem,
// adulta ou idosa, conforme a média calculada.
// Autor : Walderi Moraes Willy Filho
// Data : 08/5/2013
// Seção de Declarações 
var
c,d,soma,num: inteiro
inicio
c<-0
escreval("quantas pessoas vão informar a idade?")
leia(d)
repita
leia(num)
         soma <- soma + num
         c <- c+1
ate(c=d)
escreva("media de idades ", (soma/c))
se ((soma/c)>0) e ((soma/c)<25) entao
   escreval(" e a turma é jovem")
   senao
   se ((soma/c)>25) e ((soma/c)<60) entao
      escreval("e a turma é adulta")
      senao
      escreval("e a turma é idosa")
   fimse
fimse
fimalgoritmo
