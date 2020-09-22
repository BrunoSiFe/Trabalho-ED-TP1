#include "fila.hpp"
#include <iostream>

using namespace TP;

Fila::Fila() : Fila(new No(),new No(),new No()){
}

Fila::Fila(No* primeiroNo, No* ultimoNo, No* no){
    this->primeiroNo = primeiroNo;
    this->ultimoNo = ultimoNo;
    this->no = no;

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

    No* auxiliar = new No();
        auxiliar->setAnterior(this->primeiroNo->getAnterior());
        auxiliar->setProx(this->primeiroNo->getProx());
        auxiliar->setItem(this->primeiroNo->getItem());

    if(primeiroNo->getProx() != NULL){
        primeiroNo = primeiroNo->getProx();

        primeiroNo->setAnterior(NULL);

    }else if(ultimoNo->getItem()->getId() == primeiroNo->getItem()->getId()){
        primeiroNo = new No();
    }

    return auxiliar;
}

void Fila::enfileira(No* no){

    No* auxiliar = new No();
    auxiliar->setAnterior(this->ultimoNo->getAnterior());
    auxiliar->setProx(this->ultimoNo->getProx());
    auxiliar->setItem(this->ultimoNo->getItem());
    
    if(ultimoNo->getProx() ==NULL ){

        no->setProx(NULL);
        ultimoNo->setProx(no);
        ultimoNo = no;
        auxiliar->setProx(no);

    }

    if(primeiroNo->getItem()->getId() == 0){
        primeiroNo = no;
    }else if(primeiroNo->getItem()->getId() == auxiliar->getItem()->getId()){
        primeiroNo->setProx(auxiliar->getProx());
    }

    std::cout << "nave " << no->getItem()->getId() << " avariada" << std::endl;

}

void Fila::printar(){

    No* auxiliar = primeiroNo;

    while(auxiliar != NULL){

        std::cout << auxiliar->getItem()->getId() << std::endl;

        auxiliar = auxiliar->getProx();
        
    }

}

