LEX=flex
CC=gcc

compile: valida_portugol.lex
	@ echo Compiling...
	$(LEX) -o ./valida_portugol.lex.c ./valida_portugol.lex
	$(CC) -o ./valida_portugol ./valida_portugol.lex.c -lfl
	@ echo Compiled!
	
clean:
	@ echo Cleaning...
	rm -rf ./*.c
	rm -rf ./valida_portugol
	@ echo Cleaned!

test:
	@ echo Testing...
	./valida_portugol ./algoritmo1.alg
	./valida_portugol ./algoritmo2.alg
	@ echo TEST OK!
