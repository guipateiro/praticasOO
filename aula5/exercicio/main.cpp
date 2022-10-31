#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa **p{new Pessoa*[5]};


	Pessoa* p1{new Pessoa{"guilherme" , 37771898807, 22}};

	Disciplina d1{"Orientacao a Objetos", &p1};

	std::string * nomes{new std::string[5]{
		"aaaaa","bbbbb","ccccc","ddddd","eeeee"}
	}

	unsigned long *cpfs{new unsigned long[5]{
		1111111111,00000000000,03558910850,13374076823,00000000000}
	}

	for(int i = 0; i < 5 ; i++){
		p[i]{new Pessoa{nomes[i],cpfs[i],20}};
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
	delete[] p;
	delete[] nomes;
	delete[] cpfs;
	return 0;
}