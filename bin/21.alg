algoritmo "primo"
// FunÃ§Ã£o : FaÃ§a um programa que peÃ§a um nÃºmero inteiro e
// determine se ele Ã© ou nÃ£o um nÃºmero primo.
// Um nÃºmero primo Ã© aquele que Ã© divisÃ­vel somente por ele mesmo e por 1.
// Autor : Walderi Moraes Willy Filho
// Data : 08/05/2013
// SeÃ§Ã£o de DeclaraÃ§Ãµes
var
n,m,l: inteiro
p: logico
inicio

      escreval("Entre Com o numero desejado:")
      leia(n)
      se (n=2) entao
         p<-falso
         interrompa
      senao
         se (n=3) entao
            p<-falso
            interrompa
         senao
            m <- n\2
            repita
            	l <- n mod m
      		se (l <> 0) entao
         		m <- m-1
         	senao 
			p<- verdadeiro 
			interrompa	
      		fimse
      	    ate (m<=1)
      	 fimse
      fimse
      se (p) entao
         escreval("nÃ£o Ã© primo")
      senao
      	 escreval("e primo")
      fimse

fimalgoritmo
