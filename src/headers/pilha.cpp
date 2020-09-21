#include "pilha.hpp"
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
    this->primeiroNo = primeiroNo;
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

    }else{
        ultimoNo=NULL;
    }

    return auxiliar;

}

void Pilha::empilha(No* no){

    if(ultimoNo != NULL){
        No* auxiliar = new No();
        auxiliar->setAnterior(this->ultimoNo->getAnterior());
        auxiliar->setProx(this->ultimoNo->getProx());
        auxiliar->setItem(this->ultimoNo->getItem());


        if(no != NULL){

            no->setAnterior(auxiliar);
            no->setProx(NULL);
            
            ultimoNo = no;
        
            auxiliar->setProx(no);

        }
    }else{
        if(no != NULL){

            ultimoNo = no;

            no->setAnterior(NULL);
            no->setProx(NULL);

        }
    }

}

void Pilha::empilhaConserto(No* no){

    if(ultimoNo != NULL){
        No* auxiliar = new No(ultimoNo->getItem(),ultimoNo->getAnterior(),ultimoNo->getProx());


        if(no != NULL){

            ultimoNo = no;

            no->setAnterior(auxiliar);
            no->setProx(NULL);
        
            auxiliar->setProx(no);

        }
    }else{
        if(no != NULL){

            ultimoNo = no;

            no->setAnterior(NULL);
            no->setProx(NULL);

        }
    }

    std::cout << "nave " << no->getItem()->getId() << " consertada" << std::endl;

}

void Pilha::printar(){

    No* auxiliar = ultimoNo;

    while(auxiliar != NULL){

        std::cout << auxiliar->getItem()->getId() << std::endl;

        auxiliar = auxiliar->getAnterior();
        
    }

}

