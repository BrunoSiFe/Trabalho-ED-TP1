#include "fila.hpp"
#include <iostream>

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
    this->primeiroNo = primeiroNo;
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

void Fila::enfileira(No* no){

    No* auxiliar = new No(ultimoNo->getItem(),ultimoNo->getAnterior(),ultimoNo->getProx());
    
    if(ultimoNo->getProx() ==NULL ){

        no->setAnterior(auxiliar);
        no->setProx(NULL);
        ultimoNo = no;
        auxiliar->setProx(no);

    }

}

void Fila::printar(){

    No* auxiliar = primeiroNo;

    while(auxiliar != NULL){

        std::cout << auxiliar->getItem()->getId() << std::endl;

        auxiliar = auxiliar->getProx();
        
    }

}

