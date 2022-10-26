#include "Retangulo.hpp"



unsigned int Retangulo::getAltura(){
    return altura;
}

void Retangulo::setAltura(unsigned int novaAltura){
    altura = novaAltura;
}

unsigned int Retangulo::getLargura(){
    return largura;
}

void Retangulo::setLargura(unsigned int novaLargura){
    largura = novaLargura;
}



unsigned int Retangulo::calcularArea(){
    return (altura * largura);
}

unsigned int Retangulo::calcularPerimentro(){
    return (2 * (altura + largura));
}

bool Retangulo::verificarIgualdade(Retangulo r1){
    if (((r1.altura == altura) && (r1.largura == largura)) || ((r1.altura == largura) && (r1.largura == altura)))
        return true;
    return false;
}

bool Retangulo::verificaMaximo(){
    if ((altura == 2 * largura) || (2 * altura == largura))
        return true;
    return false;
}