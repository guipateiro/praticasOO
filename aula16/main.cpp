#include <iostream>

#include "Pessoa.hpp"
#include "ProfessorEngenheiro.hpp"
#include "CPFInvalidoException.hpp"

int main(){

    Pessoa *eu{nullptr};
    try{
        eu = new Pessoa{"guilherme", 11111111111 , 37};
    	std::cout << "Meu cpf é: "<< eu->getCpf() << "\n"; 
    }    
    catch(CPFInvalidoException& ex){
        std::cout << "erro cpf" << ex.what() << "\n";
    }
    catch(std::out_of_range& oore){
        std::cout << "erro idade" << "\n";
    }

    delete eu;
    return 0;
}