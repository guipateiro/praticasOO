CXXFLAGS = -Wall #-Wshadow
nomePrograma = aula
objetos = main.o Pessoa.o Disciplina.o Curso.o
all: $(nomePrograma)

$(nomePrograma): $(objetos)
	g++ $(CXXFLAGS) $^ -o $(nomePrograma)

clean:
	rm -f *.o *.gch $(nomePrograma)

purge:	clean	
