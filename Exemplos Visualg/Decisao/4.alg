algoritmo "Vogal ou consoante "
// Função :
// Autor :
// Data : 06/05/2013
// Seção de Declarações 
var
	letra : caracter

inicio
	// Seção de Comandos
	escreval ( "Entre com a letra:")
	leia (letra)
	escolha(letra)
		caso "a", "e","i","o","u"        // Por nao ser Case sensitive nao é necessário maisculo ou minusculo
		    escreval( "É uma vogal!!")   
		outrocaso
			escreval("É uma consoante!!")
	fimescolha
fimalgoritmo
