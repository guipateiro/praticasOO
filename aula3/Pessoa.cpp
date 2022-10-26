#include "Pessoa.hpp"
#include <string>

    unsigned long Pessoa::getCpf(){
        return cpf;
    }
        
    unsigned long Pessoa::setCpf(unsigned long novoCpf){
        cpf = novoCpf;
        if (validarCPF(novoCpf)){
            cpf = 0;
            return cpf;
        }
        return cpf;
    }

    unsigned short  Pessoa::getIdade(){
        return (unsigned short)idade;
    }

    void Pessoa::setIdade(unsigned short novaIdade){
        if (novaIdade < 140){
            idade = (unsigned char)novaIdade;
            return;
        }
        idade = 0;
    }

    std::string Pessoa::getNome(){
        return nome;
    }
        
    void Pessoa::setNome(std::string novoNome){
        nome = novoNome;
    }

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