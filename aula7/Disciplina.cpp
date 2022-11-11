#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(Curso &curso)
	:curso{curso}{
}

Disciplina::Disciplina(std::string nome, Curso &curso)
	:nome{nome}, curso{curso} {
}

Disciplina::Disciplina(std::string nome, Pessoa *professor, Curso &curso)
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
	this->alunos.push_back(aluno);
	return 0;
}

std::list<Pessoa *> Disciplina::getVetorAlunos(){
	return this->alunos;
}

bool Disciplina::removerAluno(Pessoa *aluno){
	this->alunos.remove(aluno);
	return 0;
}

bool Disciplina::removerAluno(unsigned long cpf){
	std::list<Pessoa*>::iterator it{this->alunos.begin()};
	//removendo todas referências a Pedro
	while(it != this->alunos.end()){
		if((*it)->getCpf() == cpf){
			delete *it;
			it = alunos.erase(it);//it recebe o próximo item válido da lista
		}else{
			it++;
		}
	}
	return 0;
}

void Disciplina::imprimeAlunos(){
	std::list<Pessoa*>::iterator it{this->alunos.begin()};
	for( ; it != this->alunos.end() ; ++it){
		std::cout << (*it)->getNome() << " " << (*it)->getCpf() << " " << (*it)->getIdade() << std::endl;
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

