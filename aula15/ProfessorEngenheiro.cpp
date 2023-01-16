#include "ProfessorEngenheiro.hpp"
#include "iostream"

ProfessorEngenheiro::ProfessorEngenheiro(const std::string& nome, const unsigned long cpf, const unsigned int valorHora, const unsigned short cargahoraria,  const unsigned int numeroCrea):Professor{ nome, cpf , valorHora , cargahoraria}, Engenheiro{numeroCrea}{
    std::cout << "contrutor de professor engenheiro" << std::endl;
}


ProfessorEngenheiro::~ProfessorEngenheiro(){
    std::cout << "Destrutor de ProfessorEngenheiro" << std::endl;

}

unsigned int ProfessorEngenheiro::getSalario() const{
    return 8000;
}