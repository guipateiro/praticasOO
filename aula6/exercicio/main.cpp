#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa **p{new Pessoa*[5]};


	Pessoa* p1{new Pessoa{"guilherme" , 11144477735, 22}};

	Disciplina d1{"Orientacao a Objetos", p1};
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
	d1.imprimeDisciplina(3600);

	std::cout << "Nome dos alunos: \n";
	for(int i = 0; i < 5 ; i++){
		if(d1.getVetorAlunos()[i] != nullptr){
			std::cout << d1.getVetorAlunos()[i]->getNome() << std::endl;
		}	
	}


	delete p1;
	delete[] p;
	delete[] nomes;
	delete[] cpfs;
	return 0;
}