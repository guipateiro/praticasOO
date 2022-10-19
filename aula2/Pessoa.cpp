#include "Pessoa.hpp"

bool Pessoa::validarCPF(unsigned long cpfTeste){
    unsigned long aux{cpfTeste};
    unsigned long validador[3];
    validador[0] = aux % 10;
    aux /= 10; 
    validador[1] = aux % 10;
    aux /= 10;
    validador[2] = 0;
    for(int i{2}; i <= 10 ; i++){
        validador[2] += (aux % 10) * i;
        aux /= 10; 
    }
    if ((((validador[2] *10 ) % 11) % 10 == validador[1])){
       aux = cpfTeste / 10;
       validador[2] = 0;
       for(int i{2}; i <= 11 ; i++){
            validador[2] += (aux % 10) * i;
            aux /= 10; 
        }
        if (((validador[2]*10) % 11) % 10 == validador[0]){
            return false;
        }
    }

    return true;
}