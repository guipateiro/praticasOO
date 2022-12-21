#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"

class Circulo: public Forma{
    public:
        Circulo();
        Circulo(const double raio);

        ~Circulo();

        double getRaio() const;
        int setRaio(const double raio);

        virtual double getArea() const;

    private:
        double raio;
};


#endif