#ifndef PESSOA_HPP
#define PESSOA_HPP
  
#include <string>

class Pessoa{
    public:
        unsigned long getCpf();
        unsigned long setCpf(unsigned long novoCpf);

        unsigned short getIdade();
        void setIdade(unsigned short novaIdade);

        std::string getNome();
        void setNome(std::string novoNome);

    private:    
        bool validarCPF(unsigned long cpfTeste);
        
        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};



#endif