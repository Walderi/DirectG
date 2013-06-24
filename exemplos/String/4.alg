algoritmo "Nome na vertical em escada"

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

     para j de 1 ate tam faca

          escreva(Maiusc(vet[j]))

     fimpara

     escreval("")

fimpara

fimalgoritmo
