#ifndef FILA_HPP
#define FILA_HPP

#include <cstdlib>

template <typename T = int , std::size_t MAX_PILHA = 10>

class Filaa{
	public:
		//constexpr static int MAX_PILHA{10};

		Fila():tamanho{0}{
		}

		~Fila(){
		}

		bool push(const T valor){
			if(this->estaCheia())
				return false;
			this->tamanho++;
			this->pilha[this->tamanho] = valor;
			return true;
		}

		bool pop(T* const retorno){
			if(!this->estaVazia()){
				*retorno = this->pilha[tamanho];
				this->tamnho--;
				return true;
			}
			return false;
		}

		bool estaVazia() const{
			if(tamanho == 0)
				return true;
			return false;
		}

		bool estaCheia() const{
			if(tamanho >= MAX_PILHA -1)
				return true;
			return false;
		}
	private:
		T fila[MAX_PILHA];
		std::size_t tamanho;
};
#endif
