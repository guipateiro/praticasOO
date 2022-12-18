#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"
class Aluno : public Pessoa{
    public:
        Aluno(const std::string& nome, const unsigned long cpf,
                const unsigned int matricula, const float ira);
        
        ~Aluno();

        void setMatricula(const unsigned int matricula);
        unsigned int getMatricula() const;

        void setIra(const float ira);
        float getIra() const;

    private:
        unsigned int matricula;
        float ira;
};
#endif