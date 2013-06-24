algoritmo "Nome ao contrario em maiusculo"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações

var

nome : caractere

tam,i : inteiro

vet : vetor[1..255] de caractere

inicio

escreval("Digite seu nome")

leia(nome)

tam<-Compr(nome)



para i de 1 ate tam faca

     vet[i] <- copia(nome,i,1)

fimpara



para i de tam ate 1 passo -1 faca

     escreva(Maiusc(vet[i]))

fimpara

fimalgoritmo
