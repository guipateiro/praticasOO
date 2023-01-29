#include "CPF.hpp"
#include "CPFInvalidoException.hpp"

#include <algorithm>

namespace ufpr{

CPF::CPF(){
}

CPF::CPF(const unsigned long numero){
    this->setNumero(numero);
}

unsigned long CPF::getNumero() const{
    return this->numero;
}

void CPF::setNumero(const unsigned long numero){
    if(!validarCPF(numero))
        throw CPFInvalidoException{numero};
    this->numero = numero;
}

bool CPF::operator==(const CPF& outro) const{
	return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const{
	return this->numero != outro.numero;
}

bool CPF::operator< (const CPF& outro) const{
	return this->numero < outro.numero;
}

bool CPF::operator<=(const CPF& outro) const{
	return this->numero <= outro.numero;
}

bool CPF::operator>=(const CPF& outro) const{
	return this->numero >= outro.numero;
}

bool CPF::operator> (const CPF& outro) const{
	return this->numero > outro.numero;
}
const CPF& CPF::operator=(const CPF& outro){
	if (&outro != this){
		this->numero = outro.numero;
	}
	return *this;
}

const CPF& CPF::operator=(const unsigned long outro){
	if (this->numero != outro){
		this->setNumero(outro);
	}
	return *this; 
}

std::ostream& operator<<(std::ostream& stream, const ufpr::CPF& cpf) {
	unsigned int verificador{(unsigned int)(cpf.numero % 100)};
	unsigned long prim{cpf.numero / 100};
	unsigned int ter{(unsigned int)(prim % 1000)};
	prim /= 1000;
	unsigned int seg{(unsigned int)(prim % 1000)};
	prim /= 1000;
	stream << std::setw(3) << std::setfill('0');
	stream << prim << '.' << seg << '.' << ter << '-' << verificador;
	return stream; // permitir cout << a << b << c;
}

std::istream& operator>>(std::istream& stream, ufpr::CPF& cpf){
	std::string input;
	stream >> input;
	input.erase(std::remove(input.begin(), input.end(),'.'),input.end());
	input.erase(std::remove(input.begin(), input.end(),'-'),input.end());
	cpf.setNumero(stol(input));
	return stream; 
}

unsigned short CPF::operator[](const int idx) const{
	if (idx < 0 || idx > 11)
		throw std::out_of_range("Valor de index deve ser maior que 0 e menor ou igual a 11\n");
	unsigned long copia_num = this->numero;	
	int lim = 11 - idx;	
	unsigned short result = 0;
	for(int i =0 ; i < lim; i++){
		result = copia_num%10;
		copia_num = copia_num/10;
	}
	return result;
}

const unsigned long CPF::operator()(const unsigned int inicio, const unsigned int fim) const{
	if (inicio < 0)
		throw std::out_of_range("Valor de inicio nao pode ser menor que 0\n");
	if (fim > 11)
		throw std::out_of_range("valor de fim nao pode ser maior 11\n");
	if (fim < inicio)
		throw std::out_of_range("valor de fim nao pode ser menor que o de inicio\n");
	unsigned long val = 0;
	long int k = 1;
	for(unsigned int i = fim; i > inicio; i--){
		val += k * this->operator[]((int)i);
		k*=10;
	}

	return val;
}


bool CPF::validarCPF(unsigned long cpfTeste) const{
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	int penultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpfTeste%10;
		cpfTeste = cpfTeste/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return false;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return false;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return false;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return false;//cpf invalido
	}
	return true;//cpf valido
}

}