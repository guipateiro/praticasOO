#include <iostream>
#include "Retangulo.hpp"

using namespace std;

int main (){
    Retangulo r1;
    unsigned int valor;

    //for(int i{0}; i < 2 ; i++ ){
        cout << "altura do retangulo " << "1" << ": " << endl;
        cin >> valor;
        r1.setAltura(valor); 
        cout << "largura do retangulo " << "1" << ": " << endl;
        cin >> valor;
        r1.setLargura(valor);
    //}

    cout << "altura do retangulo " << "2" << ": " << endl;
        cin >> valor;
        Retangulo r2{valor}; 
        cout << "largura do retangulo " << "2" << ": " << endl;
        cin >> valor;
        r2.setLargura(valor);

    int j = 1;

    for(Retangulo i : {r1,r2}){
        cout << "\nretangulo " << j << endl;
        cout << "area do retangulo: " << i.calcularArea() << endl;
        cout << "perimetro do retangulo: " << i.calcularPerimentro() << endl;
        cout << "é um retangulo maximo? " << i.verificaMaximo() << endl;
        j++;
    }

    cout << "r1 e r2 são iguais ? " << r1.verificarIgualdade(r2) << endl;




    return 1;
}