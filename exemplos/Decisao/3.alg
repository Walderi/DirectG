algoritmo "Feminino ou Masculino "
// Função :
// Autor :
// Data : 06/05/2013
// Seção de Declarações 
var
genero : caracter

inicio
	// Seção de Comandos
	escreval ( "Entre com o F ou M:")
	leia (genero)
	escolha(genero)
		caso "F", "f"
 // Entre Aspas para leitura do caracter
		    escreval( "F - FEMININO!!") 
//tanto para F quanto para M
		caso "M", "m"
	    	escreval("M - MASCULINO!!")
		outrocaso
	    	escreval("Sexo invalido!!")
	fimescolha
fimalgoritmo
