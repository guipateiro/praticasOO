#include "Trajetomanhattan.hpp"
#include <cmath>
Trajetomanhattan::Trajetomanhattan(){

}

Trajetomanhattan::~Trajetomanhattan(){

}

double Trajetomanhattan::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const{
    return (fabs(p2->getCoordX() - p1->getCoordX()) + fabs(p2->getCoordY() - p1->getCoordY()));
}
