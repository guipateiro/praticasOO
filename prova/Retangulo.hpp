#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Forma.hpp"

class Retangulo: public Forma{
    public:
        Retangulo();
        Retangulo(const double altura, const double largura);

        virtual ~Retangulo();

        double getAltura() const;
        int setAltura(const double altura);

        double getLargura() const;
        int setLargura(const double largura);

        virtual double getArea() const;

    private:
        double altura;
        double largura;    
};

#endif