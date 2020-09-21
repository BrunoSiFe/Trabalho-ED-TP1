#ifndef TP_BATALHA
#define TP_BATALHA

#include "listaEncadeada.hpp"
#include "pilha.hpp"
#include "fila.hpp"
#include "enums/enumComandos.hpp"

namespace TP {
    
    class Batalha {
        private:
            
            ListaEncadeada* navesBatalha;
            Fila* navesConserto;
            Pilha* navesEsperandoBatalha;

            void enviarNaveParaBatalha();
            void tirarNaveDoConserto();
            void printarPilha();
            void printarFila();
            void enviarNaveConserto(int idNave);

        public:

            Batalha();

            ListaEncadeada* getNavesBatalha();
            Fila* getNavesConserto();
            Pilha* getNavesEsperandoBatalha();

            void receberComando(int comando);

            void setNavesBatalha(ListaEncadeada* navesBatalha);
            void setNavesConserto(Fila* navesConserto);
            void setNavesEsperandoBatalha(Pilha* navesEsperandoBatalha);
    };
}

#endif