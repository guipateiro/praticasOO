#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "CPF.hpp"

int main(){
    ufpr::CPF cpf1{13374076823};
    ufpr::CPF cpf2{33333333333};
    cpf2 = cpf1;

    int x = cpf1[2];

    std::cout << cpf2.getNumero() << "\n\n";

    cpf2 = 11111111111;

    std::cout << cpf2.getNumero() << "\n";
    return 0;
}
