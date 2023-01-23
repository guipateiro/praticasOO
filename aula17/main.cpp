#include <iostream>
#include <stdexcept>

#include "CPFInvalidoException.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"
#include "Disciplina.hpp"
#include "CargaHoraLimit.hpp"

int main() {
  unsigned short hora;
  std::cout << "digite a carga horaria: ";
  std::cin >> hora;
  bool tipo;
  std::cout << "digite 0 para materias obrigatorias ou 1 para opativas: " ;
  std::cin >> tipo;
  std::cout << "digite o nome da disciplina: ";;
  std::string nome;
  std::getline(std::cin>>std::ws, nome);


  ufpr::SalaAula sala{"lab12", 60};
  ufpr::Disciplina disciplina{nome, &sala, ufpr::EnumTipoDisciplina::MANDATORIA};
  if(tipo){
    disciplina.setTipo(ufpr::EnumTipoDisciplina::OPTATIVA);
  }
  
  try{
    disciplina.setCargaHoraria(60);
  }
  catch (ufpr::CargaHoraLimit &ex){
    std::cout << "carga horaria deve ser menor ou igual a 30 para disciplinas mandatorias, voce digitou: " << ex.cargahora << std::endl;
  }
  std::cout <<"Nome da disciplina: "<< disciplina.getNome() << std::endl;
  std::cout <<"Carga horaria da disciplina: "<< disciplina.getCargaHoraria() << std::endl;
  std::cout <<"Nome da sala da disciplina: "<< disciplina.getSalaAula()->getNome() << std::endl;

  return 0;
}
