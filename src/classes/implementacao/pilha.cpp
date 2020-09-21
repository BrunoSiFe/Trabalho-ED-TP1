#include "include/pilha.hpp"
#include <iostream>

using namespace TP;

Pilha::Pilha(){
}

No* Pilha::getPrimeiro(){
    return this->primeiroNo;
}

No* Pilha::getUltimoNo(){
    return this->ultimoNo;
}

No* Pilha::getNo(){
    return this->no;
}

void Pilha::setPrimeiroNo(No* primeiroNo){
    this->no = no;
}

void Pilha::setUltimoNo(No* ultimoNo){
    this->ultimoNo = ultimoNo;
}

void Pilha::setNo(No* no){
    this->no = no;
}

No* Pilha::retirarPilha(){

    No* auxiliar = new No(ultimoNo->getItem(),ultimoNo->getAnterior(),ultimoNo->getProx());

    if(ultimoNo->getAnterior() != NULL){
        
        ultimoNo = ultimoNo->getAnterior();
        ultimoNo->setProx(NULL);

    }

    return auxiliar;

}

void Pilha::empilha(No* no){

    No* auxiliar = new No(ultimoNo->getItem(),ultimoNo->getAnterior(),ultimoNo->getProx());


    if(no != NULL){

        ultimoNo = no;

        no->setAnterior(auxiliar);
        no->setProx(NULL);
        
        auxiliar->setProx(no);

    }

}

void Pilha::printar(){

    No* auxiliar = ultimoNo;

    while(auxiliar != NULL){

        std::cout << auxiliar->getItem()->getId() << std::endl;

        auxiliar = auxiliar->getAnterior();
        
    }

}

