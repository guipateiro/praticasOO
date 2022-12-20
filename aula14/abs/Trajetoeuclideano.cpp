#include "Trajetoeuclideano.hpp"
#include <cmath>

Trajetoeuclideano::Trajetoeuclideano(){

}

Trajetoeuclideano::~Trajetoeuclideano(){

}

		
double Trajetoeuclideano::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const{
    return sqrt(pow((p2->getCoordX() - p1->getCoordX()), 2) + pow((p2->getCoordY() - p1->getCoordY()), 2));
}


