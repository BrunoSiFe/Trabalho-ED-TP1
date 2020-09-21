#ifndef TP_PILHA
#define TP_PILHA
#include "classes/no.hpp"

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
    };
}

#endif