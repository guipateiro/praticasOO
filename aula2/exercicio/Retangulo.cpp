#include "Retangulo.hpp"


int Retangulo::calcularArea(Retangulo r1){
    return (r1.altura * r1.largura);
}

int Retangulo::calcularPerimentro(Retangulo r1){
    return (2 * (r1.altura + r1.largura));
}

int Retangulo::verificarIgualdade(Retangulo r1,Retangulo r2){
    if (((r1.altura == r2.altura) && (r1.largura == r2.largura)) || ((r1.altura == r2.largura) && (r1.largura == r2. altura)))
        return true;
    return false;
}

int Retangulo::verificaMaximo(Retangulo r1){
    if ((r1.altura == 2 * r1.largura) || (2 * r1.altura == r1.largura))
        return true;
    return false;
}