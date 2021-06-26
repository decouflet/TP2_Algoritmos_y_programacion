//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_ELEMENTO_H
#define TP2_ALGO2_ELEMENTO_H

#include "objetos.h"
#include <iostream>


class Elemento: public Objetos {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Elemento(int, int, string, int);

        //PRE: -
        //POST: -
        virtual void mostrar(){};
};


#endif //TP2_ALGO2_ELEMENTO_H
