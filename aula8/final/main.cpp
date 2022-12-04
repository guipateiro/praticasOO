#include <iostream>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"

#include<list>

int main(){
    SalaAula sala{"Lab Info 1", 20};
    SalaAula sala2{"Lab Info 2", 40};
    Disciplina dis1{"Orientacao a Objetos", &sala};
    Disciplina dis2{"Sistemas Operacionais", &sala};
    dis1.setSalaAula(&sala2); //isso deve ser possível
    sala2.adicionarDisciplina(&dis2); // isso também
}