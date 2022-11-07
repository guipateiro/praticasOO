#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina();
		Disciplina(std::string nomeDisciplina);
		Disciplina(std::string nomeDisciplina, Pessoa *ProfessorNovo);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);

		Pessoa *getProfessor();
		void setProfessor(Pessoa *professorNovo);
		
		std::string getNomeProfessor();

		void imprimeDisciplina(unsigned int cargaHorariaTotal);

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa *professor;
		Pessoa *alunos{new Pessoa[50]};
};
#endif
