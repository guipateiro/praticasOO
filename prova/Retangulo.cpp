#include "Retangulo.hpp"

Retangulo::Retangulo(){
    this->setAltura(0);
    this->setLargura(0);
}

Retangulo::Retangulo(const double altura, const double largura){
    if(!this->setAltura(altura)){
        this->setAltura(0);
    }
    if(!this->setLargura(largura)){
        this->setLargura(0);
    }
}

Retangulo::~Retangulo(){
}

double Retangulo::getAltura() const{
    return this->altura;
}
int Retangulo::setAltura(const double altura){
    if (altura >= 0){
        this-> altura = altura;
        return 1;
    }
    return 0;
}

double Retangulo::getLargura() const{
    return this->largura;
}

int Retangulo::setLargura(const double largura){
    if (largura >= 0){
        this-> largura = largura;
        return 1;
    }
    return 0;
}

double Retangulo::getArea() const{
    return (this->largura * this->altura);
}