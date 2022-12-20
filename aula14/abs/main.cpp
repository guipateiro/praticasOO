#include <iostream>

#include "Trajetomanhattan.hpp"
#include "Trajetoeuclideano.hpp"

int main(){
	Trajetoeuclideano te;
	Trajetomanhattan tm;
	
	srand (static_cast <unsigned> (time(0)));

	for(std::size_t i = 0; i < 10; i++){
		double novoy = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/20));
		double novox = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/20));
		std::cout << "adicionando o pornto= X: " << novox << " || Y: " << novoy << " \n";
		te.adicionarPonto(novox,novoy);
		tm.adicionarPonto(novox,novoy);
	}

	std::cout << "Distancia percorrida no percurso euclidadeano: " << te.getDistanciaPercorrida() << std::endl;
	std::cout << "Distancia percorrida no percurso manhattan: " << tm.getDistanciaPercorrida() << std::endl;

	
	return 0;
}
