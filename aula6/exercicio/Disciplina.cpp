#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(){
	//alunos{new Pessoa[50]};
}

Disciplina::Disciplina(std::string nome)
	:nome{nome} {
	//alunos{new Pessoa[50]};
}

Disciplina::Disciplina(std::string nome, Pessoa *professor)
	:nome {nome}, professor{professor}{
}

std::string Disciplina::getNome(){
	return this->nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}

Pessoa* Disciplina::getProfessor(){
	return this->professor; 
}
	
void Disciplina::setProfessor(Pessoa *professor){
	this->professor = professor;
}


std::string Disciplina::getNomeProfessor(){
	return professor->getNome();
}

bool Disciplina::adicionarAluno(Pessoa *aluno){
	int i = 0;
	while (i < 50){
		if (alunos[i] == nullptr){
			alunos[i] = aluno;
			return 1;
		}
		i++;
	}
	return 0;
}

Pessoa **Disciplina::getVetorAlunos(){
	return alunos;
}

bool Disciplina::removerAluno(Pessoa *aluno){
	int i = 0;
	while (i < 50){
		if (alunos[i] != nullptr && alunos[i] == aluno){
			alunos[i] = nullptr;
			return 1;
		}
		i++;	
	}
	return 0;
}

bool Disciplina::removerAluno(unsigned int cpf){
	int i = 0;
	while (i < 50){
		if (alunos[i] != nullptr && alunos[i]->getCpf() == cpf){
			alunos[i] = nullptr;
			return 1;
		}
		i++;
	}
	return 0;
}

void Disciplina::imprimeDisciplina(unsigned int cargaHorariaTotal){
	std::cout << "==================\n";
	std::cout << "dados da displina\n";
	std::cout << "==================\n";
	std::cout << "nome da disciplina: " << nome << "\tProfessor(a): " << professor->getNome() << std::endl;
	std::cout << "caraga horaria: " << cargaHoraria << ",representando " << (float)(cargaHoraria *100)/cargaHorariaTotal<< "% do total do curso" << std::endl;
}