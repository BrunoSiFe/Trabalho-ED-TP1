#ifndef TP_PILHA
#define TP_PILHA

#include "no.hpp"
#include <string>

namespace TP {
    
    class Pilha {
        private:
            
            No* primeiroNo;
            No* ultimoNo;
            No* no;

        public:

            Pilha();

            No* getPrimeiro();
            No* getUltimoNo();
            No* getNo();

            void setPrimeiroNo(No* primeiroNo);
            void setUltimoNo(No* ultimoNo);
            void setNo(No* no);

            No* retirarPilha();

            void empilha(No* no);
    };
}

#endif