#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo{
    public:
        int calcularArea(Retangulo r1);
        int calcularPerimentro(Retangulo r1);
        int verificarIgualdade(Retangulo r1, Retangulo r2);
        int verificaMaximo(Retangulo r1);
        unsigned int altura;
        unsigned int largura;
};

#endif