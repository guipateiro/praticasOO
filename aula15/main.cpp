#include <iostream>

#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"
#include "ProfessorEngenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111, 100, 40, 1234};
	
	std::cout << pe.Professor::Pessoa::getNome() << std::endl;

	return 0;
}
