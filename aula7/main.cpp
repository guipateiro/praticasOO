#include<iostream>

#include<string>
#include <list>
#include "Pessoa.hpp"
#include "Curso.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa **p{new Pessoa*[5]};

	std::string coisa{"BCC"};
	Curso c1{coisa, 1980, 3600};
	Pessoa* p1{new Pessoa{"guilherme" , 11144477735, 22}};

	Disciplina d1{"Orientacao a Objetos", p1, c1};
	d1.setCargaHoraria(60);

	std::string * nomes{new std::string[5]{
		"aaaaa","bbbbb","ccccc","ddddd","eeeee"}
	};

	unsigned long *cpfs{new unsigned long[5]
	{30493684034
	,24413413083
	,63914141069
	,11342450094
	,99697884005}
};

	for(int i = 0; i < 5 ; i++){
		p[i] = new Pessoa{nomes[i],cpfs[i],20};
	}

	p1->setNome("Maria");

	for(int i = 0; i < 5 ; i++){
		d1.adicionarAluno(p[i]);	
	}	

	d1.removerAluno(p[2]);
	d1.imprimeDisciplina();

	Curso c2{"informatica biomedica", 1980, 3000};
	Pessoa* p2{new Pessoa{"Joao" , 11144477735, 22}};
	Disciplina d2{"informatica bioinspirada", p2, c2};
	d2.setCargaHoraria(90);
	for(int i = 0; i < 5 ; i++){
		d2.adicionarAluno(p[i]);	
	}	
	d2.removerAluno(30493684034);

	d2.imprimeDisciplina();

	delete p1;
	delete[] p;
	delete[] nomes;
	delete[] cpfs;
	return 0;
}