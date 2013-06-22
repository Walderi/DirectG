compile: valida_portugol.y valida_portugol.lex
	@echo Compiling...
	bison -d valida_portugol.y
	flex -o valida_portugol.lex.c valida_portugol.lex
	gcc -o valida_portugol valida_portugol.lex.c valida_portugol.tab.c -lfl -lm 
	@echo Compiled!
clean:
	@echo Cleaning...
	rm -rf ./valida_portugol.tab.h
	rm -rf ./valida_portugol.tab.c
	rm -rf ./valida_portugol.lex.c
	rm -rf ./valida_portugol
	@ echo Cleaned!

testseq:
	@ echo Testing sequential algorithms...
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/1.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/2.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/3.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/4.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/5.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/6.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/7.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/8.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/9.alg
	./valida_portugol ../../Exemplos\ Visualg/Sequencia/10.alg
	@ echo All done!

testdec:	
	@ echo Testing decision algorithms...
	./valida_portugol ../../Exemplos\ Visualg/Decisao/1.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/2.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/3.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/4.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/5.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/6.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/7.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/8.alg
	./valida_portugol ../../Exemplos\ Visualg/Decisao/9.alg
	@ echo All done!

testrep:
	@ echo Testing repetition algorithms...
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/15.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/16.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/17.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/18.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/19.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/20.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/21.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/22.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/23.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/24.alg
	./valida_portugol ../../Exemplos\ Visualg/Repeticao/25.alg
	@ echo All done!

testfun:
	@ echo Testing function algorithms...
	./valida_portugol ../../Exemplos\ Visualg/Funcao/1.alg
	./valida_portugol ../../Exemplos\ Visualg/Funcao/2.alg
	./valida_portugol ../../Exemplos\ Visualg/Funcao/3.alg
	./valida_portugol ../../Exemplos\ Visualg/Funcao/4.alg
	./valida_portugol ../../Exemplos\ Visualg/Funcao/5.alg
      
teststr:
	@ echo Testing string algorithms...
	./valida_portugol ../../Exemplos\ Visualg/String/1.alg
	./valida_portugol ../../Exemplos\ Visualg/String/2.alg
	./valida_portugol ../../Exemplos\ Visualg/String/3.alg
	./valida_portugol ../../Exemplos\ Visualg/String/4.alg
	./valida_portugol ../../Exemplos\ Visualg/String/5.alg


testall: testseq testdec testrep testfun teststr
