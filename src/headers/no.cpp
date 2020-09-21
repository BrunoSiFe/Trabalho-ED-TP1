#include "no.hpp"
#include "nave.hpp"

using namespace TP;

No::No(Nave* item, No* noAnterior, No* noProximo){
    this->item = item;
    this->noAnterior = noAnterior;
    this->noAnterior = noProximo;
}

No* No::getProx(){
    return this->noProximo;
}

No* No::getAnterior(){
    return this->noAnterior;
}

Nave* No::getItem(){
    return this->item;
}

void No::setAnterior(No* noAnterior){
    this->noAnterior = noAnterior;
}

void No::setProx(No* noProximo){
    this->noProximo = noProximo;
}

void No::setItem(Nave* item){
    this->item = item;
}
