#include <iostream>
#include "Pessoa.hpp"
#include <iomanip>
#include <string>

int main(){
    Pessoa pessoas[3];
    unsigned short idadeAux;
    std::string nomeAux;
    unsigned long cpfAux;
    for (int i{0}; i < 3 ; i++){
        std::cout << "nome: " << std::endl;
        std::cin >> nomeAux;
        pessoas[i].setNome(nomeAux);
        std::cout << "idade: " << std::endl;
        std::cin >> idadeAux;
        pessoas[i].setIdade(idadeAux);
        std::cout << "cpf: " << std::endl;
        std::cin >> cpfAux;
        while(!pessoas[i].setCpf(cpfAux)){
            std::cout << "Cpf invalido \nDigite um cpf valido:" << std::endl;
            std::cin >> cpfAux;
        }
        std::cout << std::endl;
    }

    for (int i{0}; i < 3 ; i++){
        std::cout << "pessoa " << i << std::endl <<
        "Nome: " << pessoas[i].getNome() << std::endl <<
        "Idade: " << pessoas[i].getIdade() << std::endl << 
        "CPF: " << std::setfill('0') << std::setw(11) << pessoas[i].getCpf() << "\n "<< std::endl;
    }    

    return 0;
}