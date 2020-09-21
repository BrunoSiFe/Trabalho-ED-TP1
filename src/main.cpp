#include <iostream>
#include <cstdlib>
#include <string>
#include "headers/batalha.hpp"

using namespace TP;


int main() {

    int quantidadeNaves = 0;
    int aux = 0;
    
    std::cin >> quantidadeNaves;

    Batalha* batalha = new Batalha();

    for(int i =quantidadeNaves;i>0;i--){

        std::cin >> aux;
        
        batalha->adicionarNaveParaPreparacao(aux);
    }

    while(std::cin >> aux){
        batalha->receberComando(aux);
    }

    return 0;
}