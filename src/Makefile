

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

$(EXEC): main.cpp nave.o no.o fila.o pilha.o listaencadeada.o batalha.o
	$(CC) $(CFLAGS) main.cpp nave.o no.o fila.o pilha.o listaencadeada.o batalha.o -o $(EXEC)

nave.o: headers/nave.cpp
	$(CC) $(CFLAGS) -c headers/nave.cpp -o nave.o

no.o: headers/no.cpp
	$(CC) $(CFLAGS) -c headers/no.cpp -o no.o

fila.o: headers/fila.cpp 
	$(CC) $(CFLAGS) -c headers/fila.cpp -o fila.o

pilha.o: headers/pilha.cpp 
	$(CC) $(CFLAGS) -c headers/pilha.cpp -o pilha.o

listaencadeada.o: headers/listaEncadeada.cpp 
	$(CC) $(CFLAGS) -c headers/listaEncadeada.cpp -o listaencadeada.o

batalha.o: headers/batalha.cpp 
	$(CC) $(CFLAGS) -c headers/batalha.cpp -o batalha.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf nave.o
	rm -rf no.o
	rm -rf fila.o
	rm -rf pilha.o
	rm -rf listaencadeada.o
	rm -rf batalha.o


