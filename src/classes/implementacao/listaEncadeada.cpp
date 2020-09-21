#include "include/listaEncadeada.hpp"

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
    this->no = no;
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
