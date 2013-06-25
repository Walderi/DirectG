Repositório da Linguagem DirectG - Contém WIKI. <br />
Diretório src/ contém as estruturas, parser e lexer. <br />
Diretório docs/ contém documentos de apoio sobre a linguagem visualg e sobre o compilador DirectG. <br />
Diretório bin/ contém o executável, que é gerado após a compilação. <br />
Diretório exemplos/ contém alguns algorítmos clássicos, escritos na linguagem VisualG <br />
para testes do compilador <br />


Uso: <br />
Por motivos ainda desconhecidos, sempre antes de executar o comando "make", o comando make clean deve ser executado. <br />
Caso contrário, há o risco de que o lexer seja deletado ou reescrito no processo. <br />

Para executa o DirectG, num ambiente linux que possua instalado o flex, obison e o  gcc, basta executar o comando make <br />
na raíz do diretório directg. O make pode ser utilizado para testar os exemplos, mas para testar novos algorítmos, <br />
basta ir na pasta bin/ e utilizar o directg, que é o arquivo órfão do compilador. <br />

A sintax de execução é: directg nome_do_algoritmo -enter- OU directg -enter- <br />
Caso nenhum arquivo seja dado como parâmetro, o directg assume que o usuário irá digitar o algorítmo, desta forma <br />
ele analisará cada linha do algorítmo, linha a linha, conforme inserido pelo usuário. <br /> 


O arquivo makefile contém as seguintes funcionalidades: <br />
compile: <br />
Compila os códigos fonte e gera um exectuável ("directg"). <br />

clean: <br />
Limpa os arquivos gerados na compilação, incluindo o executável. <br />

testseq: <br />
Após executado o comando make, make testseq testa todos os exemplos sequenciais do diretório exemplos. <br />

testdec: <br />
Após executado o comando make, make testdec testa todos os exemplos de decisão do diretório exemplos. <br />

testrep: <br />
Após executado o comando make, make testrep testa todos os exemplos de repetição do diretório exemplos. <br />

teststr: <br />
Após executado o comando make, make teststr testa todos os exemplos de string do diretório exemplos.<br />

testfun: <br />
Após executado o comando make, make testfun testa todos os exemplos de funções do diretório exemplos.<br />

testall: <br />
Após executado o comando make, make testall executa todos os testes acima. <br />

Todos os arquivos neste repositório devem apresentar padrão UNIX  UTF-8. <br /> 

Comando para converter Windows-ANSI || Windows-ASCII para UNIX-UTF-8 padrão Unix: <br />
iconv -f CP1252 -t UTF-8 "arquivo_origem.alg" | dos2unix > "arquivo_final"
