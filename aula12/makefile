parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula

all: $(nomeAula)

$(nomeAula): main.o Pilha.hpp Pessoa.o
	g++ -o $(nomeAula) main.o Pilha.hpp Pessoa.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o:	Pessoa.cpp Pessoa.hpp
	g++ -c Pessoa.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
