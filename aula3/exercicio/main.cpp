#include <iostream>
#include "Retangulo.hpp"

using namespace std;

int main (){
    Retangulo r[2];
    unsigned int valor;

    for(int i{0}; i < 2 ; i++ ){
        cout << "altura do retangulo " << i << ": " << endl;
        cin >> valor;
        r[i].setAltura(valor); 
        cout << "largura do retangulo " << i << ": " << endl;
        cin >> valor;
        r[i].setLargura(valor);
    }

    for(int i{0}; i < 2; i++ ){
        cout << "\nretangulo " << i << endl;
        cout << "area do retangulo: " << r[i].calcularArea() << endl;
        cout << "perimetro do retangulo: " << r[i].calcularPerimentro() << endl;
        cout << "é um retangulo maximo? " << r[i].verificaMaximo() << endl;
    }

    cout << "r1 e r2 são iguais ? " << r[0].verificarIgualdade(r[1]) << endl;




    return 1;
}