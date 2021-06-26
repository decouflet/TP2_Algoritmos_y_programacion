//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_VAMPIRELLA_H
#define TP2_ALGO2_VAMPIRELLA_H

#include "Vampiro.h"

class Vampirella: public Vampiro {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Vampirella(int, int, string, int);

        //PRE: -
        //POST: Muestra la informacion del objeto
        void mostrar();
};


#endif //TP2_ALGO2_VAMPIRELLA_H
