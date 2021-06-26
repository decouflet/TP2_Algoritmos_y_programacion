//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_CREADOR_H
#define TP2_ALGO2_CREADOR_H

#include <string>
#include <iostream>

#include "Objeto_generico.h"
#include "leer_y__procesar_archivo.h"
#include "Matriz.h"
#include "Constantes.h"
#include "objetos.h"
#include "Contador.h"
#include "agua_bendita.h"
#include "humano.h"
#include "humanocv.h"
#include "zombi.h"
#include "vampirella.h"
#include "Vampiro.h"
#include "vanesa.h"
#include "nosferatu.h"
#include "agua_bendita.h"
#include "bala.h"
#include "escopeta.h"
#include "cruz.h"
#include "estaca.h"

class Creador {
    public:

        //PRE: Recibe el vector con la informacion de cada objeto a crear, la cantidad de objetos, la matriz y el contador
        //POST: Crea los objetos
        void crear_objetos(Objeto_generico**, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo humano
        void crear_humano(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo zombi
        void crear_zombi(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo vampiro
        void crear_vampiro(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo Vampirella
        void crear_vampirella(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo Nosferatu
        void crear_nosferatu(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        // POST: Crea un objeto de tipo humanocv
        void crear_humanocv(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo agua
        void crear_agua(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo cruz
        void crear_cruz(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo estaca
        void crear_estaca(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo escopeta
        void crear_escopeta(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo bala
        void crear_bala(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la posicion, el tipo y la cantidad del objeto, ademas de la matriz y el contador
        //POST: Crea un objeto de tipo Vanesa
        void crear_vanesa(int, int, string, int, Matriz*, Contador*);

        //PRE: Recibe la matriz y el contador
        //POST: Da el alta de un objeto a eleccion
        void alta(Matriz*, Contador*);

        //PRE: Recibe la matriz
        //POST: Devuelve una posicion en x
        int elegir_posicion_x(Matriz*);

        //PRE: Recibe la matriz
        //POST: Devuelve la posicion en y
        int elegir_posicion_y(Matriz*);

        //PRE: Recibe la matriz y el contador
        //POST: Da la baja de un objeto a eleccion
        void baja(Matriz*, Contador*);
};


#endif //TP2_ALGO2_CREADOR_H
