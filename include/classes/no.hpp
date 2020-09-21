#ifndef TP_NO
#define TP_NO
#include "classes/nave.hpp"

namespace TP {
    
    class No {
        private:
            
            Nave* item;
            Nave* naveAnterior;
            Nave* naveProximo;

        public:

            No(Nave* item, Nave* naveAnterior, Nave* naveProximo);

            Nave* getProx();
            Nave* getAnterior();
            Nave* getItem();

            void setProx(Nave* naveProx);
            void setAnterior(Nave* naveAnterior);
            void setItem(Nave* item);

    };
}

#endif