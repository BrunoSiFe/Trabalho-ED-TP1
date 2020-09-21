#include "no.hpp"
#include "nave.hpp"

using namespace TP;

No::No() : No (new Nave(),NULL,NULL){}

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
    if(this->noAnterior == NULL)
        this->noAnterior = new No();
    this->noAnterior = noAnterior;
}

void No::setProx(No* noProximo){
    if(this->noProximo == NULL)
        this->noProximo = new No();
    this->noProximo = noProximo;
}

void No::setItem(Nave* item){
    this->item = item;
}
