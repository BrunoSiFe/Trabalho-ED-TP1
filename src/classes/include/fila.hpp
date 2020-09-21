#ifndef TP_FILA
#define TP_FILA
#include "no.hpp"

namespace TP {
    
    class Fila {
        private:
            
            No* primeiroNo;
            No* ultimoNo;
            No* no;

        public:

            Fila();

            No* getPrimeiro();
            No* getUltimoNo();
            No* getNo();

            void setPrimeiroNo(No* primeiroNo);
            void setUltimoNo(No* ultimoNo);
            void setNo(No* no);

            No* retirarFila();
            void enfileira(No* no);

            void printar();
    };
}

#endif