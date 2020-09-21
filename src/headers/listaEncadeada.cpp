#include "listaEncadeada.hpp"

using namespace TP;

ListaEncadeada::ListaEncadeada(){
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

    No* auxiliar;

    if(no != NULL){

        auxiliar = this->ultimoNo;
        auxiliar->setProx(no);
        no->setAnterior(auxiliar);
        no->setProx(NULL);
        this->ultimoNo = no;
        
    }

}

No* ListaEncadeada::retirar(long int idNave){

    No* auxiliarUlt = this->ultimoNo;
    No* auxiliarPrimeiro = this->primeiroNo;
    No* auxiliarTroca = NULL;

    while((auxiliarUlt->getItem()->getId() != auxiliarPrimeiro->getItem()->getId()) || 
            (auxiliarPrimeiro->getProx()->getItem()->getId() != auxiliarUlt->getAnterior()->getItem()->getId())){

        if(auxiliarUlt->getItem()->getId() == idNave){
        
            auxiliarTroca = auxiliarUlt;
        
        }else if(auxiliarPrimeiro->getItem()->getId() == idNave){
         
            auxiliarTroca = auxiliarPrimeiro;
        
        }
            auxiliarUlt = auxiliarUlt->getAnterior();
            auxiliarPrimeiro = auxiliarPrimeiro->getProx();
        
    }

    if(auxiliarTroca != NULL){

        auxiliarTroca->getProx()->setAnterior(auxiliarTroca->getAnterior());
        auxiliarTroca->getAnterior()->setProx(auxiliarTroca->getProx());

    }

    return auxiliarTroca;

}