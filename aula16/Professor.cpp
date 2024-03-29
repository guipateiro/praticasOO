#include "Professor.hpp"
#include "MenorqZeroException.hpp"

Professor::Professor(const std::string& nome, const unsigned long cpf,
               const unsigned int valorHora, const unsigned short cargaHoraria)
        :Pessoa(nome, cpf){
        setValorHora(valorHora);
        setCargaHoraria(cargaHoraria);    
}

Professor::~Professor(){
}

void Professor::setValorHora(const unsigned int valorHora){
    if((int)valorHora <= 0)
        throw MenorqZeroException(valorHora);    
    this->valorHora = valorHora;
}

unsigned int Professor::getValorHora() const{
    return this->valorHora;
}

void Professor::setCargaHoraria(const unsigned short cargaHoraria){
    if((short)cargaHoraria <= 0)
        throw MenorqZeroException(cargaHoraria);    
    this->cargaHoraria = cargaHoraria;
}

unsigned short Professor::getCargaHoraria() const{
    return this->cargaHoraria;
}

unsigned int Professor::getSalario() const{
    //assumindo que um mês tem aprox 4.5 semanas
    return valorHora * cargaHoraria * 4.5;
}