#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "CPF.hpp"
#include "CPFInvalidoException.hpp"

int main(){
    ufpr::CPF cpf1{13374076823};
    //ufpr::CPF cpf2{33333333333};
   // cpf2 = cpf1;
    try{
        std::cout << "insira um CPF (no formato 'xxx.xxx.xxx-xx'): ";
    std::cin >> cpf1;
    std::cout <<"CPF inserido:" << cpf1 << std::endl; 
        for (int i = 0; i < 11; ++i)
        {
            unsigned short x = cpf1[i];
            std::cout << "caractere na posição[" << i <<"]: " << x << "\n";
        }
    std::cout << "parcial nas casas(2 a 5): " << cpf1(2,5) << std::endl;
    }    
    catch (std::out_of_range& ex){
        std::cout << "indice invalido: " << ex.what() <<"\n"; 
    }    
    catch(ufpr::CPFInvalidoException &cie){
         std::cout << "CPF inserido invalido: " << cie.cpf << "\n"; 
    }
    
    return 0;
}
