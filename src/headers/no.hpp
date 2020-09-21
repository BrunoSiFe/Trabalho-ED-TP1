#ifndef TP_NO
#define TP_NO
#include "nave.hpp"

namespace TP {
    
    class No {
        private:
            
            Nave* item;
            No* noAnterior;
            No* noProximo;

        public:

            No();
            No(Nave* item, No* noAnterior, No* noProximo);

            Nave* getItem();
            No* getAnterior();
            No* getProx();

            void setItem(Nave* item);
            void setAnterior(No* noAnterior);
            void setProx(No* noProximo);

    };
}

#endif