#include "Curso.hpp"

Curso::Curso(){

}
Curso::Curso(std::string nome,unsigned int ano,unsigned int cargaHoraria):
    nome{nome},
    ano{ano},
    cargaHoraria{cargaHoraria}{
}

std::string Curso::getNome(){
    return this->nome;
}
void Curso::setNome(std::string nome){
    this->nome = nome;
}

unsigned int Curso::getAno(){
    return this->ano;
}
void Curso::setAno(unsigned int ano){
    this->ano = ano;
}

unsigned int Curso::getCargaHoraria(){
    return this->cargaHoraria;
}

void Curso::setCargaHoraria(unsigned int cargaHoraria){
    this->cargaHoraria = cargaHoraria;
}