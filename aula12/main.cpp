#include <iostream>

#include "Pilha.hpp"
#include "Pessoa.hpp"
#include "Fila.hpp"

int main(){
	int retorno;
	Pilha<> p;
	p.push(1);
	p.push(2);
	p.push(3);
	p.push(4);

	while(!p.estaVazia()){
		p.pop(&retorno);
		std::cout << retorno << "\n";
	}
	
	Pilha<Pessoa ,5> p2;
	Pessoa P1{"gguilherme", 37771898807, 20};
	p2.push({"gguilherme", 37771898807, 20});
	p2.push({"gguilherme", 00000000000 , 20});

	std::cout << "Fim\n";

	return 0;
}
