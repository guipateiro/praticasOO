#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;//Forward Declaration

class Disciplina{
	public:
	Disciplina(std::string nome);
		Disciplina(std::string nome, SalaAula* sala);

		~Disciplina();

		std::string getNome() const;
		void setNome(std::string nome);
		
		int getCargaHoraria()const;
		void setCargaHoraria(unsigned int carga);

		const Pessoa* getProfessor() const;
        void setProfessor(Pessoa* prof);

		void setSalaAula(SalaAula* sala);
        const SalaAula* getSalaAula() const;
		void anularSalaAula();

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso) const;

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
        void imprimirConteudosMinistrados() const;
		const std::list<ConteudoMinistrado*>& getConteudos() const;

		void adicionarAluno(Pessoa* aluno);
		void removerAluno(Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		const std::list<Pessoa*>& getAlunos() const;
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* sala;

		std::list<ConteudoMinistrado*> conteudos;
		std::list<Pessoa*> alunos;
};
#endif