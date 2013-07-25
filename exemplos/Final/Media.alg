algoritmo "media UEA"
var
ap1,ap2,media,apf,mediaf : real
inicio
escreval("Entre com a nota AP1")
leia(ap1)
escreval("Entre com a nota AP2")
leia(ap2)
media <- (ap1+ap2)/2
se ( media < 4.0 ) entao
	escreval("Reprovado")
	escreval("Media", media)
	senao
		se (media >= 8.0) entao
		   escreval("Aprovado")
		   escreval("Media",media)
      senao
      se( media < 8.0) entao
		escreval("Media insuficiente!", media)
      escreval("Digite a sua nota final")
		leia(apf)
		mediaf <- (ap1+ap2+apf)/3
		 		se ( mediaf < 6.0 ) entao
					escreval("Reprovado")
					escreval("Media",mediaf)
					senao
						escreval("Aprovado")
						escreval("Media",mediaf)
				fimse
		 fimse
      fimse
fimse
fimalgoritmo
