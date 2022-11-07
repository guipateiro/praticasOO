#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina();
		Disciplina(std::string nome);
		Disciplina(std::string nome, Pessoa *Professor);

		std::string getNome();
		void setNome(std::string novo);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);

		Pessoa *getProfessor();
		void setProfessor(Pessoa *professor);
		
		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa *aluno);
		Pessoa **getVetorAlunos();
		bool removerAluno(Pessoa * aluno);
		bool removerAluno(unsigned int cpf);

		void imprimeDisciplina(unsigned int cargaHorariaTotal);

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa *professor;
		Pessoa **alunos{new Pessoa*[50]};
};
#endif
