#include "SalaAula.hpp"
#include "Disciplina.hpp"

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}
    
std::string SalaAula::getNome(){
	return this->nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return this->capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

std::list<Disciplina*>& SalaAula::getDisciplina(){
	return this->disciplinaMinistradas;
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina){
	if (disciplina != nullptr){
		disciplina->sala = this;
		this->disciplinaMinistradas.push_back(disciplina);
	}	
}
