#include "nave.hpp"

using namespace TP;

Nave::Nave(int id){
    this->id = id;
}

int Nave::getId(){
    return this->id;
}

void Nave::setId(int id){
    this->id = id;
}

