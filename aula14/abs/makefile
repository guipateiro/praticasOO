parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula

all: $(nomeAula)

$(nomeAula): main.o Ponto.o Trajeto.o Trajetoeuclideano.o Trajetomanhattan.o Console.o
	g++ -o $(nomeAula) main.o Ponto.o Trajeto.o Trajetoeuclideano.o Trajetomanhattan.o Console.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Ponto.hpp Ponto.cpp
	g++ -c Ponto.cpp $(parametrosCompilacao)

Trajeto.o: Trajeto.hpp Trajeto.cpp
	g++ -c Trajeto.cpp $(parametrosCompilacao)

Trajetomanhattan.o: Trajetomanhattan.cpp Trajetomanhattan.hpp
	g++ -c Trajetomanhattan.cpp $(paramentrosCompilacao)

Trajetoeuclideano.o: Trajetoeuclideano.cpp Trajetoeuclideano.hpp
	g++ -c Trajetoeuclideano.cpp $(paramentrosCompilacao)

Console.o:	Console.cpp Console.hpp
	g++ -c Console.cpp $(paramentrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
