#include <iostream>

#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"
#include "Aluno.hpp"
#include "Disciplina.hpp"

int main(){
    Aluno a{"Ricardo", 11144477735, 20195050, 0.76};
    ProfessorAdjunto p{"Joao", 11111111111, 8500, 40};

    Professor* ptr{&p};

    std::cout << p.getNome() << " " << p.getSalario() << std::endl;
    std::cout << ptr->getNome() << " " << ptr->getSalario() << std::endl;


    std::cout << "\ndados do aluno: " << std::endl;
    std::cout << a.getNome() << " " << a.getCpf() << std::endl;
    std::cout << a.getMatricula() << " " << a.getIra() << std::endl;

    Disciplina d1{"intruducao a programcao das trevas 2(em fortram)"};
    d1.adicionarAluno(&a);
    d1.setProfessor(&p);
    d1.setCargaHoraria(60);

    d1.imprimirDados("dados da materia: ", 3600);
    
    d1.imprimirAlunos();

    return 0;
}
