#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	//Pessoa p1{"Joao", 11111111111, 20};
	//Pessoa p2{"Maria"};

	//Disciplina d1{"Orientacao a Objetos", &p1};


	Pessoa* p1{new Pessoa};
	Pessoa* p2{new Pessoa{"joana" , 11111111111, 22}};

	int *ptr{new int{3}};
	int *ptr2{new int{44444}};

	int *vv {new int[10]};

	for(int i = 0; i < 10 ; i++){
		vv[i]  = i;
	}

	for(int i = 0; i < 10 ; i++){
		std:: cout << vv[i]  << '\n';
	}


	p1->setNome("maria");

	Disciplina d1{"Orientacao a Objetos", p2};
	std::cout << d1.getNomeProfessor() << '\n';



	std::cout << p2->getNome() << '\t' << p2->getIdade() << '\t' <<  p2->getCpf() << std::endl;

	std::cout << p1->getNome() << '\n';

	
	std::cout << *ptr << "\n" << *ptr2 << "\n";

	delete p1;
	delete p2;
	delete ptr;
	delete ptr2;
	delete[] vv;
	return 0;
}