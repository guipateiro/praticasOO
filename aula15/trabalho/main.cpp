#include <iostream>

#include "Pessoa.hpp"
#include "ProfessorEngenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111,85, 40, 1234};

	std::cout << pe.Engenheiro::getSalario() << std::endl;
	std::cout << pe.Professor::getSalario() << std::endl;
	std::cout << pe.getSalario() << std::endl;


	return 0;
}
