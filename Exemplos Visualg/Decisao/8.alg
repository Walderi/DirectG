algoritmo "Menor preço"
// Função :
// Autor :
// Data : 06/05/2013
// Seção de Declarações 
var
	valorProduto1 : real
	valorProduto2 : real
	valorProduto3 : real
	produtoCompra: inteiro

inicio
	// Seção de Comandos
	escreval ( "Entre com o valor de 3 produtos!")
	escreval ( "Entre com o valor do primeiro:") //Pega o primeiro numero
	leia (valorProduto1)
	escreval ( "Entre com o valor do segundo:")  //pega o segundo numero
	leia (valorProduto2)
	escreval ( "Entre com o valor do terceiro:")  //pega o terceiro numero
	leia (valorProduto3)
	
	se ((valorProduto1 < valorProduto2) e (valorProduto2 < valorProduto3)) 
		entao // Se o produto 1 for menor que os outros 2 valores então ele é o menor de todos e deve ser comprado
	   		produtocompra <- 1
	    senao
	fimse
	
	se((valorProduto2 < valorProduto1) e (valorProduto2 < valorProduto3)) 
		entao // Se o produto 2 for menor que os outros 2 valores então ele é o menor de todos e deve ser comprado
			produtocompra <- 2
		senao
	fimse
	se ((valorProduto3 < valorProduto2) e (valorProduto3 < valorProduto1)) 
	  	entao // Se o produto 3 for menor que os outros 2 valores então ele é o menor de todos e deve ser comprado
	 		produtocompra <- 3
	   	senao
	fimse
	
	escreval("O produto que voce deve comprar é o : ", produtocompra)
fimalgoritmo
