#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(Curso curso)
	:curso{curso}{
}

Disciplina::Disciplina(std::string nome, Curso curso)
	:nome{nome}, curso{curso} {
}

Disciplina::Disciplina(std::string nome, Pessoa *professor, Curso curso)
	:nome {nome}, professor{professor}, curso{curso}{
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

bool Disciplina::removerAluno(unsigned long cpf){
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

void Disciplina::imprimeAlunos(){
	std::cout << "Nome dos alunos: \n";
	for(int i = 0; i < 5 ; i++){
		if(this->getVetorAlunos()[i] != nullptr){
			std::cout << this->getVetorAlunos()[i]->getNome() << std::endl;
		}	
	}
}	

void Disciplina::imprimeDisciplina(){
	std::cout << "==================\n";
	std::cout << "dados da displina\n";
	std::cout << "==================\n";
	std::cout << "nome da disciplina: " << nome; std::cout.flush();
	std::cout << "\tProfessor(a): " << professor->getNome() << std::endl;
	std::cout << "caraga horaria: " << cargaHoraria << ",representando " << (float)(cargaHoraria *100)/this->curso.getCargaHoraria() << "% do total do curso" << std::endl;
	std::cout << "Curso: " << this->curso.getNome() << std::endl;
	this->imprimeAlunos();
}


Curso Disciplina::getCurso(){
	return this->curso;
}

