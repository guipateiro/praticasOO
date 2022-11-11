#ifndef CURSO_H
#define CURSO_H

#include<string>

class Curso{
    public:
        Curso();
        Curso(std::string nome,unsigned int ano,unsigned int cargaHoraria);

        std::string getNome();
        void setNome(std::string nome);

        unsigned int getAno();
        void setAno(unsigned int ano);

        unsigned int getCargaHoraria();
        void setCargaHoraria(unsigned int cargaHoraria);

    private:
        std::string nome;
        unsigned int ano;
        unsigned int cargaHoraria;

};


#endif