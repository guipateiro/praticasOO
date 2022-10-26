#include <iostream>
#include "Pessoa.hpp"
#include <iomanip>
#include <string>

int main(){
    
    unsigned short idadeAux;
    std::string nomeAux;
    unsigned long cpfAux;
    //for (int i{0}; i < 1 ; i++){
        std::cout << "nome: " << std::endl;
        std::cin >> nomeAux;
        //pessoas[i].setNome(nomeAux);
        std::cout << "idade: " << std::endl;
        std::cin >> idadeAux;
        //pessoas[i].setIdade(idadeAux);
        
        std::cout << "cpf: " << std::endl;
        std::cin >> cpfAux;
        Pessoa pessoas{nomeAux,idadeAux,cpfAux};
        while(!pessoas.getCpf()){
            std::cout << "Cpf invalido \nDigite um cpf valido:" << std::endl;
            std::cin >> cpfAux;
            pessoas.setCpf(cpfAux);
        }
        std::cout << std::endl;
    //}

    //for (int i{0}; i < 1 ; i++){
        //std::cout << "pessoa " << i << std::endl <<
        std::cout << "Nome: " << pessoas.getNome() << std::endl <<
        "Idade: " << pessoas.getIdade() << std::endl << 
        "CPF: " << std::setfill('0') << std::setw(11) << pessoas.getCpf() << "\n "<< std::endl;
    //}    

    return 0;
}