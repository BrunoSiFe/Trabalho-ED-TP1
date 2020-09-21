#include "include/nave.hpp"

using namespace TP;

Nave::Nave(std::string id){
    this->id = id;
}

std::string Nave::getId(){
    return this->id;
}

void Nave::setId(std::string id){
    if(!id.empty())
        this->id = id;
}

