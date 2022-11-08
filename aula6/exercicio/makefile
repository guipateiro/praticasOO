parametrosCompilacao=-Wall -g #-Wshadow 
nomePrograma = aula
arquivos = main Pessoa Disciplina Curso
all: $(nomePrograma)

$(nomePrograma): main.o Pessoa.o Disciplina.o Curso.o
	g++ -o $(nomePrograma) $^ $(parametrosCompilacao)

main.o: main.cpp
	g++ -c $< $(parametrosCompilacao)

Pessoa.o:  Pessoa.cpp Pessoa.hpp
	g++ -c $< $(parametrosCompilacao)

Disciplina.o:  Disciplina.cpp Disciplina.hpp
	g++ -c $< $(parametrosCompilacao)

Curso.o:  Curso.cpp Curso.hpp
	g++ -c $< $(parametrosCompilacao)	

clean:
	rm -f *.o *.gch 

purge: clean
	rm -f $(nomePrograma)