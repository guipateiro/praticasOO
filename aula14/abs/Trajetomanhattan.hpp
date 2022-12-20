#ifndef TRAJETOMANHATTAN_HPP
#define TRAJETOMANHATTAN_HPP

#include "Trajeto.hpp"

class Trajetomanhattan : public Trajeto {
	public:
		Trajetomanhattan();
		virtual ~Trajetomanhattan();
		
		virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const ;
};

#endif
