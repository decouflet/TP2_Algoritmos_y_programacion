//
// Created by agustin on 10/6/21.
//

#ifndef TP2_ALGO2_MENU_H
#define TP2_ALGO2_MENU_H

#include <iostream>
#include "Matriz.h"
#include "Contador.h"
#include "Creador.h"
using namespace std;

class Menu {
    public:

        //PRE: Recibe la matriz, el caontador, y el creador
        //POST: Empieza el juego
        void empezar_juego(Matriz*, Contador*, Creador*);

        //PRE: Recibe la matriz, el contador, y el creador
        //POST: Devuelve la opcion que se eligio
        int desplegar_menu(Matriz*, Contador*, Creador*);

        //PRE: -
        //POST: Muestra el menu de opciones
        void desplegar_opciones();
};


#endif //TP2_ALGO2_MENU_H
