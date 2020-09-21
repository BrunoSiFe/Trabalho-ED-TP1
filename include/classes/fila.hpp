#ifndef TP_FILA
#define TP_FILA
#include "classes/no.hpp"

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
    };
}

#endif