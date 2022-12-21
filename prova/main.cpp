#include <iostream>
#include "TelaDesenho.hpp"
#include "Forma.hpp"
#include "Circulo.hpp"
#include "Retangulo.hpp"

int main(){
    TelaDesenho tela;
    Forma *p1{new Retangulo{12.5,7}};
    Forma *p2{new Circulo{10}};

    tela.adicionarForma(p1);
    tela.adicionarForma(p2);

    std::cout << "total das formas(ate aqui): " << tela.calcularAreaToral() << std::endl;
    std::cout << "Adicionando mais 10 formas a lista:"<< std::endl;
    for(std::size_t i = 0; i < 5; i++){
		double novoy = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/10));
		double novox = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/10));
        double novoz = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/10));
		std::cout << "adicionando novo retangulo de tamnho = altura: " << novox << " || largura: " << novoy << " \n";
        std::cout << "adicionando novo circulo de tamanho = raio: " << novoz << "\n";
		p1 = new Retangulo{novox,novoy};
		p2 = new Circulo{novoz};
        tela.adicionarForma(p1);
        tela.adicionarForma(p2);
        std::cout << "total das formas(ate aqui): " << tela.calcularAreaToral() << std::endl;
    }

    std::cout << "total das formas: " << tela.calcularAreaToral() << std::endl;
}