#include "TelaDesenho.hpp"

TelaDesenho::TelaDesenho(){

}


TelaDesenho::~TelaDesenho(){
    // tem q desalocar e limpar o vetor mais eu fiquei sem tempo
}   

void TelaDesenho::adicionarForma(Forma* const forma){
    this->formas.push_back(forma);
}

double TelaDesenho::calcularAreaToral()const{
    std::list<Forma*>::const_iterator it;
    double total = 0; 
    for(it = formas.begin(); it!=formas.end(); it++){
        total += (*it)->getArea();
    }    
    return total;
}
