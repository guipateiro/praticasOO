#include "Ementa.hpp"
#include <iostream>

namespace ufpr{

Ementa::Ementa():livros{new std::list<Livro>}{
    std::cout << "criador padrao\n";
}

Ementa::Ementa(const std::string descricao)
        :descricao{descricao}, livros{new std::list<Livro>}{
        std::cout << "craiodr com descrissao\n";
}

Ementa::~Ementa(){
    std::cout << "destruiu\n";
    delete livros;    
}

Ementa::Ementa(const Ementa& ementa)
    :descricao{ementa.descricao}, 
    livros{new std::list<Livro>{*ementa.livros}}{
    std::cout << "criou copia\n";
}

Ementa::Ementa(Ementa&& ementa)
    :descricao{ementa.descricao}, 
    livros{ementa.livros}{
    ementa.livros = nullptr;
    std::cout << "criou move\n";
}

Ementa& Ementa::operator=(Ementa&& outro){
    std::cout << "move assingment\n";
      if (&outro != this) {  // cuidado com auto atribuição
        this->numero = outro.numero;
    }
    return *this;  // para permitir x = y = z
}

void Ementa::setDescricao(const std::string& descricao){
    this->descricao = descricao;
}

const std::string& Ementa::getDescricao() const{
    return this->descricao;
}

void Ementa::addLivro(const Livro& livro){
    this->livros->push_back(livro);
}

const std::list<Livro>* Ementa::getLivros() const{
    return this->livros;
}
}