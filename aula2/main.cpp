#include <iostream>
#include "Pessoa.hpp"
#include <iomanip>

int main(){
    Pessoa pessoas[3];
    int idade;
    for (int i{0}; i < 3 ; i++){
        std::cout << "nome: " << std::endl;
        std::cin >> pessoas[i].nome;
        std::cout << "idade: " << std::endl;
        std::cin >> idade;
        pessoas[i].idade = idade;
        std::cout << "cpf: " << std::endl;
        std::cin >> pessoas[i].cpf;
        while(pessoas[i].validarCPF(pessoas[i].cpf)){
            std::cout << "Cpf invalido \nDigite um cpf valido:" << std::endl;
            std::cin >> pessoas[i].cpf;
        }
        std::cout << std::endl;
    }

    for (int i{0}; i < 3 ; i++){
        std::cout << "pessoa " << i << std::endl <<
        "Nome: " << pessoas[i].nome << std::endl <<
        "Idade: " << pessoas[i].idade << std::endl << 
        "CPF: " << std::setfill('0') << std::setw(11) << pessoas[i].cpf << "\n "<< std::endl;
    }    

    return 0;
}