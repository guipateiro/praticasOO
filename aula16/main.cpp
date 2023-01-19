#include <iostream>

#include "Professor.hpp"
#include "ProfessorEngenheiro.hpp"
#include "CPFInvalidoException.hpp"
#include "MenorqZeroException.hpp"

int main(){

    Professor *eu{nullptr};
    unsigned int hora;
    unsigned short carga;
    try{
        std::cout << "inserir Custo Hora do professor: ";
        std::cin >>  hora;
        std::cout << "inserir Carga horaria do professor: ";
        std::cin >>  carga;
        eu = new Professor{"guilherme", 11111111111, hora , carga};
    	std::cout << "Meu cpf é: "<< eu->getCpf() << "\n"; 
        std::cout << "Meu salario é: "<< eu->getSalario() << "\n";
    }    
    catch(CPFInvalidoException& ex){
        std::cout << "erro cpf" << ex.what() << "\n";
    }
    catch(std::out_of_range& oore){
        std::cout << "erro idade" << "\n";
    }
    catch(MenorqZeroException& mz){
        std::cout << "erro numerico: " << mz.what() << " valor inserdo: " << (int)mz.valor << "\n";
    }

    delete eu;
    return 0;
}