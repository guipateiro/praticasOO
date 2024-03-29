#ifndef PESSOA_H
#define PESSOA_H

#include <string>

#include "CPF.hpp"

namespace ufpr{
class Pessoa{
    
    friend std::ostream& operator>>(std::ostream& stream, const ufpr::Pessoa& pessoa);
    
    public:
        Pessoa(const std::string& nome, const unsigned long cpf);
        Pessoa(const std::string& nome, const CPF& cpf);
        Pessoa(const std::string& nome, const unsigned long cpf, const unsigned short int idade);
        Pessoa(const std::string& nome, const CPF& cpf, const unsigned short int idade);

        virtual ~Pessoa() = default;

        const CPF& getCpf() const;
        void setCpf(const CPF& cpf);

        std::string getNome() const;
        void setNome(const std::string& nome);

        unsigned short int getIdade() const;
        void setIdade(const unsigned short int idade);

        void imprimirEnderecoMemoria() const;

        bool operator()(const unsigned int inicio, const unsigned int fim) const;
        unsigned short operator[](const int idx);
        bool operator==(const Pessoa& outro) const;
    protected:
        std::string nome;
        CPF cpf;
        unsigned char idade;
};
}
#endif