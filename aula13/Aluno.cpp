#include "Aluno.hpp"

Aluno::Aluno(const std::string& nome, const unsigned long cpf, const unsigned int matricula, const float ira)
    :Pessoa{nome, cpf}, matricula{matricula}{
        setIra(ira);
}
        
Aluno::~Aluno(){
}

void Aluno::setMatricula(const unsigned int matricula){
    this->matricula = matricula;
}

unsigned int Aluno::getMatricula() const{
    return this-> matricula;
}

void Aluno::setIra(const float ira){
    if (ira >= 0 && 1 >= ira)
        this->ira = ira;
    else
        this->ira = 0;    
}

float Aluno::getIra() const{
    return this->ira;
}