#include <iostream>
#include "Retangulo.hpp"

using namespace std;

int main (){
    Retangulo r[2];
    uint valor;

    for(int i{0}; i < 2 ; i++ ){
        cout << "altura do retangulo " << i << ": " << endl;
        cin >> valor;
        r[i].altura = valor; 
        cout << "largura do retangulo " << i << ": " << endl;
        cin >> valor;
        r[i].largura = valor;
    }

    for(int i{0}; i < 2; i++ ){
        cout << "\nretangulo " << i << endl;
        cout << "area do retangulo: " << r[i].calcularArea(r[i]) << endl;
        cout << "perimetro do retangulo: " << r[i].calcularPerimentro(r[i]) << endl;
        cout << "é um retangulo maximo? " << r[i].verificaMaximo(r[i]) << endl;
    }

    cout << "r1 e r2 são iguais ? " << r[0].verificarIgualdade(r[0], r[1]) << endl;




    return 1;
}