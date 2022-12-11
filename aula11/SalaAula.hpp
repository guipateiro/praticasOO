#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

class SalaAula{
	friend void Disciplina::setSalaAula(SalaAula* const salaAula);

	public:
		SalaAula(const std::string nome,const unsigned int capacidade);
		~SalaAula();
		
		std::string getNome() const ;
		void setNome(const std::string nome);

		unsigned int getCapacidade() const;
		void setCapcidade(const unsigned int capacidade);

        const std::list<Disciplina*>& getDisciplinas() const;
	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif