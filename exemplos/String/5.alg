algoritmo "Nome na vertical em escada invertida"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações

var

nome : caractere

tam,i, j : inteiro

vet : vetor[1..255] de caractere

inicio

escreval("Digite seu nome")

leia(nome)

tam<-Compr(nome)



para i de 1 ate tam faca

     vet[i] <- copia(nome,i,1)

fimpara

para i de tam ate 1 passo -1 faca

       para j de 1 ate i faca

          escreva(Maiusc(vet[j]))

       fimpara

       escreval("")

fimpara

fimalgoritmo
