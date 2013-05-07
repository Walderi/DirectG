algoritmo "maoir, menor e soma"
// Função :
// Autor :
// Data : 5/7/2011
// Seção de Declarações 
var
  menor,maior,soma,num,c,d: inteiro
inicio
      escreval("quantos numeros voce quer escrever")
      leia(c)
      se c <=0 entao
         escreval("numero invalido")
         interrompa
         senao
      
      leia(num)
      menor <- num
      soma <- menor
      d <- 0
      repita
            leia(num)
                     se (num < menor) entao
                     soma <- soma + num
                     menor <- num
                     senao
                          se (num > maior) entao
                          soma <- soma + num
                          maior <- num
                          fimse
                     fimse
       d <- d+1
       ate(d=(c-1))
      escreval("menor numero", menor)
      escreval("maior numero", maior)
      escreval("soma", soma)
      fimse
fimalgoritmo
