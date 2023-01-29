#include "Pessoa.hpp"

#include <iostream>
#include <stdexcept>

#include "CPFInvalidoException.hpp"

namespace ufpr{

Pessoa::Pessoa(const std::string& nome, const unsigned long cpf) : nome{nome}, cpf{cpf} {
}

Pessoa::Pessoa(const std::string& nome, const CPF& cpf) : nome{nome}, cpf{cpf} {
}

Pessoa::Pessoa(const std::string& nome, const unsigned long cpf,
               const unsigned short int idade)
    : Pessoa{nome, cpf} {
    this->setIdade(idade);
}

Pessoa::Pessoa(const std::string& nome, const CPF& cpf,
               const unsigned short int idade)
    : Pessoa{nome, cpf} {
    this->setIdade(idade);
}

const CPF& Pessoa::getCpf() const { return this->cpf; }

void Pessoa::setCpf(const CPF& cpf) { this->cpf = cpf; }

std::string Pessoa::getNome() const { return this->nome; }

void Pessoa::setNome(const std::string& nome) { this->nome = nome; }

unsigned short int Pessoa::getIdade() const {
    return (unsigned short int)idade;
}

void Pessoa::setIdade(const unsigned short int novaIdade) {
    if (novaIdade > 120) throw std::invalid_argument{"Idade Invalida."};
    idade = (unsigned char)novaIdade;
}

void Pessoa::imprimirEnderecoMemoria() const { std::cout << this << std::endl; }


bool Pessoa::operator==(const Pessoa& outro) const{
	if ((this->cpf == outro.cpf) && (this->idade == outro.idade) && (this->nome == outro.nome))
		return 1;
	return 0; 	
}

}