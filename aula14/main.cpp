#include <iostream>

#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"
#include "Pessoa.hpp"

int main(){
    ProfessorAdjunto p{"Joao", 11111111111, 8500, 40};

    Professor* ptr{&p};

    std::cout << p.getNome()    << " " << p.getSalario()    << std::endl;
    std::cout << ptr->getNome() << " " << ptr->getSalario() << std::endl;

    Pessoa *pf{new ProfessorAdjunto {"Joao", 11111111111, 8500, 40}};
    std::cout << pf->getNome() << "\n";

    delete pf;

    return 0;
}
