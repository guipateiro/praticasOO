#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina{
	public:
		Disciplina(Curso curso);
		Disciplina(std::string nome,Curso curso);
		Disciplina(std::string nome, Pessoa *Professor,Curso curso);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);

		Pessoa *getProfessor();
		void setProfessor(Pessoa *professor);

		Curso getCurso();

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa *aluno);
		Pessoa **getVetorAlunos();
		bool removerAluno(Pessoa * aluno);
		bool removerAluno(unsigned long cpf);

		void imprimeAlunos();
		void imprimeDisciplina();

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa *professor;
		Pessoa **alunos{new Pessoa*[50]};
		Curso& curso;
};
#endif
