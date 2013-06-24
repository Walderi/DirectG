algoritmo "Tamanho das strings e comparação entre elas"

// Função :

// Autor :

// Data : 6/6/2013

// Seção de Declarações 

var

string1 : caractere

string2 : caractere

inicio

// Seção de Comandos 

escreval("Digite uma frase")

leia(string1)

escreval("Digite outra frase")

leia(string2)



escreval("Tamanho de '", string1, "' :", Compr(string1), " caracteres")

escreval("Tamanho de '", string2, "' :", Compr(string2), " caracteres")



se(Compr(string1) = Compr(string2)) entao

           escreval("As duas strings são de tamanhos iguais")

senao

           escreval("As duas strings são de tamanhos diferentes")

fimse



se(string1 = string2) entao

           escreval("As duas strings possuem o mesmo conteudo")

senao

           escreval("As duas strings possuem conteudo diferentes")

fimse

fimalgoritmo
