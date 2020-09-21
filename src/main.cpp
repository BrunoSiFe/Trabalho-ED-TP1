#include <iostream>
#include <cstdlib>
#include <string>
#include "headers/batalha.hpp"

using namespace TP;


int main() {

    int quantidadeNaves = 0;
    int aux = 0;

    std::cout << "Digite o Número De Naves : " << std::endl;
    std::cin >> quantidadeNaves;

    system("clear");

    Batalha* batalha = new Batalha();

    for(int i =quantidadeNaves;i>=0;i--){

        std::cin >> aux;
        
        batalha->adicionarNaveParaPreparacao(aux);
    }

    while(1){
        std::cin >>aux;
        batalha->receberComando(aux);
    }

    return 0;
}