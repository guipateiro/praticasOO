#include "Circulo.hpp"

Circulo::Circulo(){
    this->setRaio(0);
}
Circulo::Circulo(const double raio){
    if(!this->setRaio(raio)){
        this->setRaio(0);
    }
}

Circulo::~Circulo(){

}

double Circulo::getRaio() const{
    return this->raio;
}

int Circulo::setRaio(const double raio){
    if (raio >= 0){
        this-> raio = raio;
        return 1;
    }
    return 0;
}

double Circulo::getArea() const{
    return ((this->raio * this->raio) * 3.141592);
}