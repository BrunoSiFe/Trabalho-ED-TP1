#include "include/batalha.hpp"

using namespace TP;

Batalha::Batalha(){

    this->navesConserto = new Fila();
    this->navesBatalha = new ListaEncadeada();
    this->navesEsperandoBatalha = new Pilha();

}

void Batalha::enviarNaveParaBatalha(){

    this->navesBatalha->adicionar(navesEsperandoBatalha->retirarPilha());

}

void Batalha::tirarNaveDoConserto(){

    this->navesEsperandoBatalha->empilha(navesConserto->retirarFila());

}

void Batalha::printarPilha(){

    this->navesEsperandoBatalha->printar();
    
}

void Batalha::printarFila(){

    this->navesConserto->printar();

}

void Batalha::enviarNaveConserto(std::string idNave){

    this->navesConserto->enfileira(this->navesBatalha->retirar(idNave));

}

void Batalha::receberComando(std::string comando){

    if(comando == "0")
        enviarNaveParaBatalha();

    if(comando == "-1")
        tirarNaveDoConserto();

    if(comando == "-2")
        printarPilha();

    if(comando == "-3")
        printarFila();

    if(comando !="0" && comando !="-1" && comando !="-2"  && comando !="-3" )
        enviarNaveConserto(comando);
    
}

ListaEncadeada* Batalha::getNavesBatalha(){
    return this->navesBatalha;
}

Fila* Batalha::getNavesConserto(){
    return this->navesConserto;
}

Pilha* Batalha::getNavesEsperandoBatalha(){
    return this->navesEsperandoBatalha;
}

void Batalha::setNavesBatalha(ListaEncadeada* navesBatalha){
    this->navesBatalha = navesBatalha;
}

void Batalha::setNavesConserto(Fila* navesConserto){
    this->navesConserto = navesConserto;
}

void Batalha::setNavesEsperandoBatalha(Pilha* navesEsperandoBatalha){
    this->navesEsperandoBatalha = navesEsperandoBatalha;
}

