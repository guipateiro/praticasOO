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

bool Disciplina::adicionarAluno(Pessoa *aluno){
	int i = 0;
	while (i < 50){
		if (alunos[i] == nullptr){
			alunos[i] = aluno;
			return 1;
		}
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
	}
	return 0;
}