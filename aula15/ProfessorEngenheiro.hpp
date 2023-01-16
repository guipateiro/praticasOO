#ifndef PROFESSOR_ENGENHEIRO_HPP
#define PROFESSOR_ENGENHEIRO_HPP

#include "Professor.hpp"
#include "Engenheiro.hpp"

class ProfessorEngenheiro : public Professor, public Engenheiro{
	public:
        ProfessorEngenheiro(const std::string& nome, const unsigned long cpf, const unsigned int valorHora, const unsigned short cargahoraria,  const unsigned int numeroCrea);

        virtual ~ProfessorEngenheiro();

        virtual unsigned int getSalario() const;
};        

#endif