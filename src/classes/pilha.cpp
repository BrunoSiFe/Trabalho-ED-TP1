#include "classes/pilha.hpp"

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

