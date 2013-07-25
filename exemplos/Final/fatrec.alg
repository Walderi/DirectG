algoritmo "Fatorial recursivo"
var
an,n : inteiro

funcao fatorial(numero:inteiro):inteiro
var

c,b,k : inteiro

Inicio
	k<-1
      se (numero = 0) entao
	c<-k 
	//retorne k
      senao
        b <- numero - k  
	c <- c +  numero * fatorial(b)
      fimse
      
retorne c
fimfuncao

inicio
      escreval("fatorial de qual numero?")
      leia(n)
      an <- fatorial(n)

      escreval("o fatorial de ",n," é: ", an)
fimalgoritmo

