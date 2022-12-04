#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>
//#include "Disciplina.hpp"

class Disciplina;

class SalaAula{
	friend void Disciplina::setSalaAula(SalaAula* SalaAula);

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);

		std::list<Disciplina*>& getDisciplina();
		//void adicionarDisciplina(Disciplina* disciplina);

	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinaMinistradas;
};
#endif