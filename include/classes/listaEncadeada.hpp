#ifndef TP_LISTA
#define TP_LISTA
#include "classes/no.hpp"

namespace TP {
    
    class ListaEncadeada {
        private:
            
            No* primeiroNo;
            No* ultimoNo;
            No* no;

        public:

            ListaEncadeada();

            No* getPrimeiro();
            No* getUltimoNo();
            No* getNo();

            void setPrimeiroNo(No* primeiroNo);
            void setUltimoNo(No* ultimoNo);
            void setNo(No* no);
    };
}

#endif