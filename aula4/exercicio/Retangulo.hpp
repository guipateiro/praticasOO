#ifndef RETANGULO_HPP
#define RETANGULO_HPP


class Retangulo{
    public:
        Retangulo();
        Retangulo(unsigned int altura,unsigned int largura = 0);

        unsigned int getAltura();
        void setAltura(unsigned int novaAltura);

        unsigned int getLargura();
        void setLargura(unsigned int novaLargura);

        unsigned int calcularArea();
        unsigned int calcularPerimentro();
        bool verificarIgualdade(Retangulo r1);
        bool verificaMaximo();
       
    private:
        unsigned int altura;
        unsigned int largura;
};

#endif