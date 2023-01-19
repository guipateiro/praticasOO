#include "SalaAula.hpp"
#include "MenorqZeroException.hpp"

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}{
	setCapcidade(capacidade);
}

SalaAula::~SalaAula(){
	std::list<Disciplina*>::iterator it{disciplinasMinistradas.begin()};
	for( ; it != disciplinasMinistradas.end(); it++)
		(*it)->anularSalaAula();
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
	if((int)capacidade > 0)
		this->capacidade = capacidade;
	throw MenorqZeroException{capacidade};
}

std::list<Disciplina*>& SalaAula::getDisciplinas(){
    return disciplinasMinistradas;
}