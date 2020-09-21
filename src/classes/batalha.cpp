#include "classes/batalha.hpp"

using namespace TP;

Batalha::Batalha(){

    this->navesConserto = new Fila();
    this->navesBatalha = new ListaEncadeada();
    this->navesEsperandoBatalha = new Pilha();

}

void enviarNaveConserto(int idNave){
}

void Batalha::receberComando(int comando){
    switch (comando){

    case Entrar_Em_Batalha:
        enviarNaveParaBatalha();
        break;
    case Nave_Consertada:
        tirarNaveDoConserto();
        break;

    case Printar_Fila:
        printarPilha();
        break;

    case Printar_Pilha:
        printarFila();
        break;

    default:
        enviarNaveConserto(comando);
        break;
    }
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

