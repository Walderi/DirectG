algoritmo "Temperatura F para C"
// Função :
// Autor :
// Data : 06/05/2013
// Seção de Declarações 
var
	tempCelsius : real
	tempFarenheit : real

inicio
	// Seção de Comandos 
	escreval("Entre com a temperatura em Farenheit:")
	leia(tempFarenheit)
	tempCelsius <- (5 * (tempFarenheit-32) / 9)
	escreval("O valor em Celsius é:" , tempCelsius)
fimalgoritmo
