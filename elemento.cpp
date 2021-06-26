//
// Created by agustin on 4/6/21.
//

#include "elemento.h"

Elemento::Elemento(int posicion_x, int posicion_y, string tipo, int cantidad) {
    this -> posicion_x = posicion_x;
    this -> posicion_y = posicion_y;
    this -> tipo = tipo;
    this -> cantidad = cantidad;
}