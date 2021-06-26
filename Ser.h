//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_SER_H
#define TP2_ALGO2_SER_H

#include "objetos.h"
#include <iostream>


class Ser: public Objetos {
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Ser(int, int, string, int);

        //PRE: -
        //POST: -
        virtual void mostrar(){};
};


#endif //TP2_ALGO2_SER_H
