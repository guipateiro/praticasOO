#ifndef EMENTA_HPP
#define EMENTA_HPP

#include <string>
#include <list>

#include "Livro.hpp"

namespace ufpr{
class Ementa{
    public:
        Ementa();
        Ementa(const std::string descricao);
        virtual ~Ementa();
        Ementa(const Ementa& ementa);
        Ementa(Ementa&& ementa);
        Ementa& operator= (Ementa&&);

        void setDescricao(const std::string& descricao);
        const std::string& getDescricao() const;

        void addLivro(const Livro& livro);
        const std::list<Livro>* getLivros() const;

    private:
        std::string descricao;
        std::list<Livro>* livros;
};
}
#endif