//
// Created by agustin on 6/6/21.
//

#ifndef TP2_ALGO2_VAMPIRO_H
#define TP2_ALGO2_VAMPIRO_H

#include "Ser.h"

class Vampiro: public Ser {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Vampiro(int, int, string, int);

        //PRE: -
        //POST: Muestra la informacion del objeto
        void mostrar();
};


#endif //TP2_ALGO2_VAMPIRO_H
