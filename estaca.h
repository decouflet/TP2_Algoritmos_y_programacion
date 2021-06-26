//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_ESTACA_H
#define TP2_ALGO2_ESTACA_H

#include "elemento.h"

class Estaca: public Elemento{
    public:

        //PRE: Recibe la posicion x e y, el tipo, y la cantidad del objeto
        //POST: Crea el objeto
        Estaca(int, int, string, int);

        //PRE: -
        //POST: Muestra la informacion del objeto
        void mostrar();
};


#endif //TP2_ALGO2_ESTACA_H
