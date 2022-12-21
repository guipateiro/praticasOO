#ifndef TELADESENHO_HPP
#define TELADESENHO_HPP

#include <list>
#include "Forma.hpp"

class TelaDesenho{
    public:
        TelaDesenho();

        virtual ~TelaDesenho();

        void adicionarForma(Forma* const forma);

        double calcularAreaToral()const;


    private:
        std::list<Forma*> formas;


};

#endif