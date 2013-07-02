algoritmo "Função para adicionar imposto no custo"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações

var

taxa, custo : real



funcao somaImposto(taxaImposto, custoTotal:real):real

var

valor : real



Inicio

// Corpo da função

valor<-custoTotal+taxaImposto

retorne valor

fimfuncao



inicio

// Seção de Comandos

escreval("Digite o custo")

leia(custo)

escreval("Digite a taxa de imposto")

leia(taxa)

custo<-somaImposto(taxa,custo) //chamada da função

escreval("Valor com imposto: ", custo)

fimalgoritmo
