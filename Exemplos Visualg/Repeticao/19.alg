algoritmo "maoir, menor e soma entre 0 e 1000"
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
      se (num < 0) e (num > 1000) entao
         interrompa
         senao
         menor <- num
         soma <- menor
      fimse
         d <- 0
         repita
            leia(num)
                     se (num < menor) e (num >= 0) entao
                     soma <- soma + num
                     menor <- num
                     senao
                          se (num > maior) e (num <= 1000) entao
                          soma <- soma + num
                          maior <- num
                          senao
                               escreval("numero fora do parametro")
                          fimse
                     fimse
       d <- d+1
       ate(d=(c-1))
      escreval("menor numero", menor)
      escreval("maior numero", maior)
      escreval("soma", soma)
      fimse
fimalgoritmo
