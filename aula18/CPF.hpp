#ifndef CPF_HPP
#define CPF_HPP

#include <iomanip>
#include <iostream>

namespace ufpr{
class CPF{
    friend std::ostream& operator<<(std::ostream& stream, const ufpr::CPF& cpf);
    friend std::istream& operator>>(std::istream& stream, ufpr::CPF& cpf);
    
    public:
        CPF();
        CPF(const unsigned long numero);
        virtual ~CPF() = default;
        unsigned long getNumero() const;
        void setNumero(const unsigned long numero);

        bool operator==(const CPF& outro) const;
        bool operator!=(const CPF& outro) const;
        bool operator< (const CPF& outro) const;
        bool operator<=(const CPF& outro) const;
        bool operator>=(const CPF& outro) const;
        bool operator> (const CPF& outro) const;
        const CPF& operator=(const CPF& outro);
        const CPF& operator=(const unsigned long outro);
        const unsigned long operator()(const unsigned int inicio, const unsigned int fim) const;
        unsigned short operator[](const int idx)const;   

    private:
        bool validarCPF(unsigned long cpfTeste) const;
        unsigned long numero;
};
}
#endif