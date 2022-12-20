#ifndef TRAJETOEUCLIDEANO_HPP
#define TRAJETOEUCLIDEANO_HPP

#include "Trajeto.hpp"

class Trajetoeuclideano : public Trajeto {
	public:
		Trajetoeuclideano();
		virtual ~Trajetoeuclideano();
		
		virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const;
};

#endif