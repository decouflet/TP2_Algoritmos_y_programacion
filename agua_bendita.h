//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_AGUA_BENDITA_H
#define TP2_ALGO2_AGUA_BENDITA_H

#include "elemento.h"

class Agua_bendita: public Elemento {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Agua_bendita(int, int, string, int);

        //PRE: -
        //POST: Muestra informacion del objeto
        void mostrar();

        //PRE: -
        //POST: Devuelve la cantidad del objeto
        int devolver_cantidad();

};


#endif //TP2_ALGO2_AGUA_BENDITA_H
