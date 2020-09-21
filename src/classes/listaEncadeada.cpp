#include "classes/listaEncadeada.hpp"

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

