#ifndef SENECA_TAGLIST_H_
#define SENECA_TAGLIST_H_

#include <iostream>

namespace seneca {
    class TagList {


        public: 
        void set();
        void set(int num);
        void add(const NameTag& nt);
        void print();
        void cleanup();

    };
    






}



#endif //!SENECA_TAGLIST_H