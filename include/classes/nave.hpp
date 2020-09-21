#ifndef TP_NAVE
#define TP_NAVE
#include <string>

namespace TP {
    
    class Nave {
        private:
            
            std::string id;

        public:

            Nave(std::string id);

            std::string getId();

            void setId(std::string id);
    };
}

#endif