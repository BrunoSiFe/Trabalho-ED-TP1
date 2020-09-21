#ifndef TP_NAVE
#define TP_NAVE
#include <string>

namespace TP {
    
    class Nave {
        private:
            
            int id;

        public:

            Nave();

            Nave(int id);

            int getId();

            void setId(int id);
    };
}

#endif