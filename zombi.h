//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_ZOMBI_H
#define TP2_ALGO2_ZOMBI_H

#include "Ser.h"

class Zombi: public Ser {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Zombi(int, int, string, int);

        //PRE: -
        //POST: Muestra la informacion del objeto
        void mostrar();
};


#endif //TP2_ALGO2_ZOMBI_H
