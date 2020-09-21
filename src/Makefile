

CC=g++
CFLAGS=-Wall -Wextra 
EXEC=./tp1 
TMPOUT=tp1.testresult

# === REGRAS =====
# ================
# 
# Aqui declaramos as nossas regras de compilacao.
# Para chamar uma regra, podemos simplesmente digitar
# 	make nome_regra
# Exs.:
# 	make ./tp1
# 	make foo.o
# 	make clean
# Cada regra de compilacao tem a seguinte sintaxe:
#
# NOME_OUTPUT: DEPENDENCIAS
# 	CMD
#
# NOME_OUTPUT eh o nome do arquivo que vai ser gerado (ou qualquer nome caso
# nenhum arquivo seja gerado, ex. clean)
# DEPENDENCIAS sao os nomes dos arquivos necessarios para executar essa regra
# de compilacao
# CMD sao os comandos necessarios para executar a regra (por exemplo, chamar o
# gcc)

$(EXEC): main.cc nave.o no.ofila.o pilha.o listaencadeada.o batalha.o
	$(CC) $(CFLAGS) main.cc nave.o no.ofila.o pilha.o listaencadeada.o batalha.o -o $(EXEC)

nave.o: headers/implementacao/nave.cpp
	$(CC) $(CFLAGS) -c headers/implementacao/nave.cpp -o nave.o

no.o: headers/no.cc 
	$(CC) $(CFLAGS) -c headers/implementacao/no.cc -o no.o

fila.o: headers/implementacao/fila.cc 
	$(CC) $(CFLAGS) -c headers/implementacao/fila.cc -o fila.o

pilha.o: headers/implementacao/pilha.cc 
	$(CC) $(CFLAGS) -c headers/implementacao/pilha.cc -o pilha.o

listaencadeada.o: headers/implementacao/listaEncadeada.cpp 
	$(CC) $(CFLAGS) -c headers/implementacao/listaEncadeada.cpp -o listaencadeada.o

batalha.o: headers/implementacao/batalha.cpp 
	$(CC) $(CFLAGS) -c headers/implementacao/batalha.cpp -o batalha.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf nave.o
	rm -rf no.o
	rm -rf fila.o
	rm -rf pilha.o
	rm -rf listaencadeada.o
	rm -rf batalha.o


