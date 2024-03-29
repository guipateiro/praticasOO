#include "Disciplina.hpp"

#include <iostream>

#include "SalaAula.hpp"
#include "CargaHoraLimit.hpp"

using namespace ufpr;

Disciplina::Disciplina(const std::string& nome, EnumTipoDisciplina tipo)
	:nome{nome},sala{nullptr}{
    setTipo(tipo);    
    this->setCargaHoraria(0);
}

Disciplina::Disciplina(const std::string& nome, SalaAula* const sala, EnumTipoDisciplina tipo)
        :Disciplina{nome,tipo} {
    this->setSalaAula(sala);
    this->setCargaHoraria(0);
}

Disciplina::~Disciplina(){
    std::cerr << "Destruindo a disciplina " << this->nome << "\n";
    //o setSalaAula vai remover a disciplina da sala de aula antiga, caso ela exista
    this->setSalaAula(nullptr);
    std::list<ConteudoMinistrado*>::iterator it;
    for(it=conteudos.begin(); it!=conteudos.end(); it++)
        delete *it;//liberando a memória de cada conteúdo
}

const std::string& Disciplina::getNome() const{
	return nome;
}

void Disciplina::setNome(const std::string& nome){
	this->nome = nome;
}

unsigned short Disciplina::getCargaHoraria() const{
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(const unsigned short carga){
    if(carga > 30 && (this->tipo == EnumTipoDisciplina::MANDATORIA)){
        throw CargaHoraLimit{carga};
    }    
	this->cargaHoraria = carga;
}

const Professor* Disciplina::getProfessor() const{
    return this->professor;
}

void Disciplina::setProfessor(Professor* const prof){
    this->professor = prof;
}

void Disciplina::setSalaAula(SalaAula* const sala){
    if(this->sala != nullptr)//se já existia uma sala, remover a disciplina dessa sala
        this->sala->disciplinasMinistradas.remove(this);
    this->sala = sala;
    if(this->sala != nullptr)
        this->sala->disciplinasMinistradas.push_back(this);//adicionar a disciplina na nova sala
}

void Disciplina::anularSalaAula(){
	this->sala = nullptr;
}

const SalaAula* Disciplina::getSalaAula() const{
    return this->sala;
}

void Disciplina::imprimirDados(const std::string& cabecalho, const unsigned int cargaTotalCurso) const{
    double pctCurso = (double)this->cargaHoraria/cargaTotalCurso;
    pctCurso = pctCurso * 100;
    std::cout << cabecalho << std::endl;
    std::cout << "Disciplina: " << this->nome << std::endl;
    std::cout << "Carga: " << this->cargaHoraria << std::endl;
    std::cout << "Porcentagem do curso: " << pctCurso << "%" << std::endl;
    std::cout << "Professor: " << this->professor->getNome() << std::endl;
}

void Disciplina::adicionarConteudoMinistrado(const std::string& conteudo, const unsigned short cargaHorariaConteudo){
    this->conteudos.push_back(new ConteudoMinistrado{conteudo, cargaHorariaConteudo});
}

void Disciplina::imprimirConteudosMinistrados() const{
    std::list<ConteudoMinistrado*>::const_iterator it;
    for(it = conteudos.begin(); it!=conteudos.end(); it++){
        std::cout << "Id: " << (*it)->getId() << std::endl
            << "Conteudo: " << (*it)->getDescricao() << std::endl
            << "Carga: " << (*it)->getCargaHorariaConteudo() << std::endl << std::endl;
    }
}

const std::list<ConteudoMinistrado*>& Disciplina::getConteudos() const{
    return this->conteudos;
}

void Disciplina::adicionarAluno(Pessoa* const aluno){
	this->alunos.push_back(aluno);
}

void Disciplina::removerAluno(Pessoa* const aluno){
	this->alunos.remove(aluno);
}

void Disciplina::removerAluno(const unsigned long cpf){
	std::list<Pessoa*>::iterator it;

	for(it = this->alunos.begin(); it != this->alunos.end(); it++)
		if((*it)->getCpf() == cpf)
			break;
	if(it != this->alunos.end())
		this->alunos.erase(it);
}

const std::list<Pessoa*>& Disciplina::getAlunos() const{//retornamos uma referência para a lista, o que custa mais barato
	return this->alunos;
}

const EnumTipoDisciplina Disciplina::getTipo() const{
    return this->tipo;
}


void Disciplina::setTipo(EnumTipoDisciplina const tipo){
    this->tipo = tipo;
}