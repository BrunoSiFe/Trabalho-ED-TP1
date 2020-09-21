#include "include/no.hpp"
#include "include/nave.hpp"

using namespace TP;

No::No(Nave* item, No* noAnterior, No* noProximo){
    this->item = item;
    this->noAnterior = noAnterior;
    this->noAnterior = noProximo;
}

No* No::getProx(){
    this->noProximo;
}

No* No::getAnterior(){
    this->noAnterior;
}

Nave* No::getItem(){
    this->item;
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
