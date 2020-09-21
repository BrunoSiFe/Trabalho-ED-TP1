#include "classes/no.hpp"
#include "classes/nave.hpp"

using namespace TP;

No::No(Nave* item, Nave* naveAnterior, Nave* naveProximo){
    this->item = item;
    this->naveAnterior = naveAnterior;
    this->naveProximo = naveProximo;
}

Nave* No::getProx(){
    this->naveProximo;
}

Nave* No::getAnterior(){
    this->naveAnterior;
}

Nave* No::getItem(){
    this->item;
}

void No::setAnterior(Nave* naveAnterior){
    this->naveAnterior = naveAnterior;
}

void No::setProx(Nave* naveProximo){
    this->naveProximo = naveProximo;
}

void No::setItem(Nave* item){
    this->item = item;
}
