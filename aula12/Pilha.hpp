#ifndef PILHA_HPP
#define PILHA_HPP

#include <cstdlib>

template <typename T = int , std::size_t MAX_PILHA = 10>

class Pilha{
	public:
		//constexpr static int MAX_PILHA{10};

		Pilha():topo{0}{
		}

		~Pilha(){
		}

		bool push(const T valor){
			if(this->estaCheia())
				return false;
			this->topo++;
			this->pilha[this->topo] = valor;
			return true;
		}

		bool pop(T* const retorno){
			if(!this->estaVazia()){
				*retorno = this->pilha[topo];
				this->topo--;
				return true;
			}
			return false;
		}

		bool estaVazia() const{
			if(topo == 0)
				return true;
			return false;
		}

		bool estaCheia() const{
			if(topo >= MAX_PILHA -1)
				return true;
			return false;
		}
	private:
		T pilha[MAX_PILHA];
		std::size_t topo;
};
#endif
