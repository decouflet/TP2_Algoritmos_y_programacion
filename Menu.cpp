//
// Created by agustin on 10/6/21.
//

#include "Menu.h"


void Menu::empezar_juego(Matriz* tablero_juego, Contador* contador, Creador* mago) {
    int eleccion;

    eleccion = this -> desplegar_menu(tablero_juego, contador, mago);
    while (eleccion != 0)
        eleccion = this -> desplegar_menu(tablero_juego, contador, mago);
}

int Menu::desplegar_menu(Matriz* tablero_juego, Contador* contador, Creador* mago) {
    int eleccion;
    enum opciones_menu {TABLA_PORCENTAJES, TABLERO, BUSQUEDA_CUADRANTE, ALTA, BAJA, INFORMACION_ELEMENTO};

    this -> desplegar_opciones();

    cout << "Ingresa el numero de la opcion que quieras ejecutar: ";
    cin >> eleccion;

    switch (eleccion - 1) { // Se le resta uno a la opcion que elije, porque el listado en realidad empieza de 0
        case TABLA_PORCENTAJES:
            contador -> mostrar_tabla_porcentajes();
            break;

        case TABLERO:
            tablero_juego -> mostrar_tablero();
            break;

        case BUSQUEDA_CUADRANTE:
            tablero_juego-> busqueda_cuadrante();
            break;

        case ALTA:
            mago -> alta(tablero_juego, contador);
            break;

        case BAJA:
            mago -> baja(tablero_juego, contador);
            break;

        case INFORMACION_ELEMENTO:
            int posicion_x, posicion_y;

            cout << "En que fila se encuentra el objeto del cual queres informarte? ";
            cin >> posicion_x;

            cout << "Y en que columna? ";
            cin >> posicion_y;

            tablero_juego -> mostrar_objeto(posicion_x - 1, posicion_y - 1);
            break;
    }

    return eleccion;
}

void Menu::desplegar_opciones(){
    cout << endl;
    cout << endl;

    cout << "1. Mostrar tabla de porcentajes sobre el total de objetos" << endl;
    cout << "2. Mostrar el tablero del juego" << endl;
    cout << "3. Buscar objeto por cuadrante" << endl;
    cout << "4. Dar de alta un objeto" << endl;
    cout << "5. Dar de baja un objeto" << endl;
    cout << "6. Obtener informacion de un objeto" << endl;
    cout << "0. Salir" << endl;

    cout << endl;
    cout << endl;
}