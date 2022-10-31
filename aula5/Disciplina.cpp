#include "Disciplina.hpp"


Disciplina::Disciplina(){
	//alunos{new Pessoa[50]};
}

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
	//alunos{new Pessoa[50]};
}

Disciplina::Disciplina(std::string nomeDisciplina, Pessoa *professorNovo)
	:nome {nomeDisciplina}, professor{professorNovo}{
	//alunos{new Pessoa[50]};
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}

Pessoa* Disciplina::getProfessor(){
	return professor; 
}
	
void Disciplina::setProfessor(Pessoa *professorNovo){
	professor = professorNovo;
}


std::string Disciplina::getNomeProfessor(){
	return professor->getNome();
}