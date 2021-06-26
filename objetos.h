//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_OBJETOS_H
#define TP2_ALGO2_OBJETOS_H

#include <string>
using namespace std;

class Objetos {
    protected:
        int posicion_x;
        int posicion_y;
        string tipo;
        int cantidad;
    public:

        //PRE: -
        //POST: -
        virtual void mostrar()=0;

        //PRE: -
        //POST: Devuelve la posicion x
        int devolver_posicion_x();

        //PRE: -
        //POST: Devuelve la posicion y
        int devolver_posicion_y();

        //PRE: -
        //POST: Devuelve la cantidad
        int devolver_cantidad();

        //PRE: -
        //POST: Devuelve el tipo
        string devolver_tipo();
};


#endif //TP2_ALGO2_OBJETOS_H
