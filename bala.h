//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_BALA_H
#define TP2_ALGO2_BALA_H

#include "elemento.h"

class Bala: public Elemento {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Bala(int, int, string, int);

        //PRE: -
        //POST: Muestra la informacion del objeto
        void mostrar();

        //PRE: -
        //POST: Devuelve la cantidad del objeto
        int devolver_cantidad();
};


#endif //TP2_ALGO2_BALA_H
