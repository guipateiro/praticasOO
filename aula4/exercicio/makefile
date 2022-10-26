parametrosCompilacao=-Wall #-Wshadow
nomePrograma=retangulo
classe = Retangulo

all: $(nomePrograma)

$(nomePrograma): main.o $(classe).o
	g++ -o $(nomePrograma) $^ $(parametrosCompilacao)

main.o: main.cpp
	g++ -c $< $(parametrosCompilacao)

$(classe).o: $(classe).cpp  $(classe).hpp
	g++ -c $< $(parametrosCompilacao)

clean:
	rm -f *.o *.gch 

purge: clean
	rm -f $(nomePrograma)
		