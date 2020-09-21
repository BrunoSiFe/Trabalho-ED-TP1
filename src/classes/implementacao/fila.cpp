#include "include/fila.hpp"

using namespace TP;

Fila::Fila(){
}

No* Fila::getPrimeiro(){
    return this->primeiroNo;
}

No* Fila::getUltimoNo(){
    return this->ultimoNo;
}

No* Fila::getNo(){
    return this->no;
}

void Fila::setPrimeiroNo(No* primeiroNo){
    this->no = no;
}

void Fila::setUltimoNo(No* ultimoNo){
    this->ultimoNo = ultimoNo;
}

void Fila::setNo(No* no){
    this->no = no;
}

No* Fila::retirarFila(){
    
    No* auxiliar = new No(primeiroNo->getItem(),primeiroNo->getAnterior(),primeiroNo->getProx());

    if(primeiroNo->getProx() !=NULL ){

        primeiroNo = primeiroNo->getProx();
        ultimoNo->setAnterior(NULL);

    }

    return auxiliar;
}
