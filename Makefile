compile: src/directg.y src/directg.lex
	@echo Compiling...
	bison -d src/directg.y
	mv directg.tab.h src/
	mv directg.tab.c src/
	flex -o src/directg.lex.c src/directg.lex
	gcc -o bin/directg src/directg.lex.c src/directg.tab.c -lfl -lm 
	@echo Compiled!
clean:
	@echo Cleaning...
	rm -rf src/directg.tab.h
	rm -rf src/directg.tab.c
	rm -rf src/directg.lex.c
	rm -rf bin/directg
	rm -rf Saida.C
	@ echo Cleaned!

testseq:
	@ echo Testing sequential algorithms...
	bin/directg exemplos/Sequencia/1.alg
	bin/directg exemplos/Sequencia/2.alg
	bin/directg exemplos/Sequencia/3.alg
	bin/directg exemplos/Sequencia/4.alg
	bin/directg exemplos/Sequencia/5.alg
	bin/directg exemplos/Sequencia/6.alg
	bin/directg exemplos/Sequencia/7.alg
	bin/directg exemplos/Sequencia/8.alg
	bin/directg exemplos/Sequencia/9.alg
	bin/directg exemplos/Sequencia/10.alg
	@ echo All done!

testdec:	
	@ echo Testing decision algorithms...
	bin/directg exemplos/Decisao/1.alg
	bin/directg exemplos/Decisao/2.alg
	bin/directg exemplos/Decisao/3.alg
	bin/directg exemplos/Decisao/4.alg
	bin/directg exemplos/Decisao/5.alg
	bin/directg exemplos/Decisao/6.alg
	bin/directg exemplos/Decisao/7.alg
	bin/directg exemplos/Decisao/8.alg
	bin/directg exemplos/Decisao/9.alg
	@ echo All done!

testrep:
	@ echo Testing repetition algorithms...
	bin/directg exemplos/Repeticao/15.alg
	bin/directg exemplos/Repeticao/16.alg
	bin/directg exemplos/Repeticao/17.alg
	bin/directg exemplos/Repeticao/18.alg
	bin/directg exemplos/Repeticao/19.alg
	bin/directg exemplos/Repeticao/20.alg
	bin/directg exemplos/Repeticao/21.alg
	bin/directg exemplos/Repeticao/22.alg
	bin/directg exemplos/Repeticao/23.alg
	bin/directg exemplos/Repeticao/24.alg
	bin/directg exemplos/Repeticao/25.alg
	@ echo All done!

testfun:
	@ echo Testing function algorithms...
	bin/directg exemplos/Funcao/1.alg
	bin/directg exemplos/Funcao/2.alg
	bin/directg exemplos/Funcao/3.alg
	bin/directg exemplos/Funcao/4.alg
	bin/directg exemplos/Funcao/5.alg
      
teststr:
	@ echo Testing string algorithms...
	bin/directg exemplos/String/1.alg
	bin/directg exemplos/String/2.alg
	bin/directg exemplos/String/3.alg
	bin/directg exemplos/String/4.alg
	bin/directg exemplos/String/5.alg


testall: testseq testdec testrep testfun teststr
