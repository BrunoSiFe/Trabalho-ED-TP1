#include "listaEncadeada.hpp"
#include <iostream>

using namespace TP;

ListaEncadeada::ListaEncadeada() : ListaEncadeada(new No(),new No(),new No()){
}

ListaEncadeada::ListaEncadeada(No* no, No* ultimoNo, No* primeiroNo){
    this->no = no;
    this->ultimoNo = ultimoNo;
    this->primeiroNo = primeiroNo;
}

No* ListaEncadeada::getPrimeiro(){
    return this->primeiroNo;
}

No* ListaEncadeada::getUltimoNo(){
    return this->ultimoNo;
}

No* ListaEncadeada::getNo(){
    return this->no;
}

void ListaEncadeada::setPrimeiroNo(No* primeiroNo){
    this->primeiroNo = primeiroNo;
}

void ListaEncadeada::setUltimoNo(No* ultimoNo){
    this->ultimoNo = ultimoNo;
}

void ListaEncadeada::setNo(No* no){
    this->no = no;
}

void ListaEncadeada::adicionar(No* no){

    No* auxiliar = new No();

    if(no != NULL){

        auxiliar = this->ultimoNo;
        auxiliar->setProx(no);
        no->setAnterior(auxiliar);
        no->setProx(NULL);
        this->ultimoNo = no;
        
    }

    if(primeiroNo->getItem()->getId() == 0){
        primeiroNo = no;
    }

    std::cout << "nave " << no->getItem()->getId() << " em combate" << std::endl;

}

No* ListaEncadeada::retirar(int idNave){

    No* auxiliar = this->primeiroNo;
    No* auxiliarTroca = NULL;

    while(auxiliar != NULL){

        if(auxiliar->getItem()->getId() == idNave){
        
            auxiliarTroca = auxiliar;
            break;
        
        }

        auxiliar = auxiliar->getProx();
        
        
    }

    if(auxiliarTroca != NULL){

        if(auxiliarTroca->getProx() != NULL){

            auxiliarTroca->getProx()->setAnterior(auxiliarTroca->getAnterior());
        
        }

        if(auxiliarTroca->getAnterior() !=NULL){
            
            auxiliarTroca->getAnterior()->setProx(auxiliarTroca->getProx());

        }

    }

    return auxiliarTroca;

}