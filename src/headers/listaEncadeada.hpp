#ifndef TP_LISTA
#define TP_LISTA
#include "no.hpp"
#include <string>

namespace TP {
    
    class ListaEncadeada {
        private:
            
            No* primeiroNo;
            No* ultimoNo;
            No* no;

        public:

            ListaEncadeada();
            ListaEncadeada(No* no,No* ultimoNo,No* primeiroNo);

            No* getPrimeiro();
            No* getUltimoNo();
            No* getNo();


            void setPrimeiroNo(No* primeiroNo);
            void setUltimoNo(No* ultimoNo);
            void setNo(No* no);
            
            void adicionar(No* no);
            No* retirar(int idNave);
    };
}

#endif