#include "Disciplina.hpp"
#include <iostream>

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

void Disciplina::imprimeDisciplina(unsigned int cargaHorariaTotal){
	std::cout << "==================\n";
	std::cout << "dados da displina\n";
	std::cout << "==================\n";
	std::cout << "nome da disciplina: " << nome << "\tProfessor(a): " << professor->getNome() << std::endl;
	std::cout << "caraga horaria: " << cargaHoraria << ",representando " << (float)(cargaHoraria *100)/cargaHorariaTotal<< "% do total do curso" << std::endl;
}