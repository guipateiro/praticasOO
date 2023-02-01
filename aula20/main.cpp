#include <iostream>
#include <list>

#include "Ementa.hpp"
#include "Disciplina.hpp"
#include "Console.hpp"

void imprimirCpf(const ufpr::CPF& cpf){
    std::cout << "O Cpf eh: " << cpf << '\n';
}

int main(){
    int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    std::cout<< *p << "\n";
    std::cout<< *ch << "\n";
    std::cout<< p << "\n";
    std::cout<< reinterpret_cast<void*>(ch) << "\n";

   return 0;
}