arametrosCompilacao=-Wall #-Wshadow
nomePrograma=aula
cc= g++
objs= main.o TelaDesenho.o Forma.o Circulo.o Retangulo.o 
all: $(nomePrograma)

$(nomePrograma): $(objs)
	$(cc) -o $(nomePrograma) $(objs) $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

TelaDesenho.o : TelaDesenho.cpp TelaDesenho.hpp
	$(cc) -c $< $(parametrosCompilacao) 

Forma.o  : Forma.cpp Forma.hpp
	$(cc) -c $< $(parametrosCompilacao) 

Circulo.o  : Circulo.cpp Circulo.hpp
	$(cc) -c $< $(parametrosCompilacao) 

Retangulo.o : Retangulo.cpp Retangulo.hpp
	$(cc) -c $< $(parametrosCompilacao) 

clean:
	rm -f *.o *.gch $(nomePrograma)

purge: clean	
