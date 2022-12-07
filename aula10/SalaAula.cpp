#include "SalaAula.hpp"

#include <iostream>

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula::~SalaAula(){
	std::cerr << "Destruindo a sala " << this->nome << "\n";
	std::list<Disciplina*>::iterator it;
	std::list<Disciplina*>::iterator it2;
	for(it=disciplinasMinistradas.begin(); it!=disciplinasMinistradas.end(); it++)
        it2 = it;
		(*it2)->setSalaAula(nullptr);
		delete *it;//liberando a memória de cada conteúdo
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

std::list<Disciplina*>& SalaAula::getDisciplinas(){
    return disciplinasMinistradas;
}