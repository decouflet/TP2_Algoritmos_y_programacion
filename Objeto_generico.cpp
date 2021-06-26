//
// Created by agustin on 4/6/21.
//

#include "Objeto_generico.h"

string Objeto_generico::devolver_tipo_objeto() {
    return this -> tipo_objeto;
}

int Objeto_generico::devolver_coordenada_x() {
    return this -> coordenada_x;
}

int Objeto_generico::devolver_coordenada_y() {
    return this -> coordenada_y;
}

int Objeto_generico::devolver_cantidad() {
    return this -> cantidad;
}

void Objeto_generico::asignar_tipo_objeto(string nombre) {
    this -> tipo_objeto = nombre;
}

void Objeto_generico::asginar_coordenada_x(int coordenada_x) {
    this -> coordenada_x = coordenada_x;
}

void Objeto_generico::asignar_coordenada_y(int coordenada_y) {
    this -> coordenada_y = coordenada_y;
}

void Objeto_generico::asignar_cantidad(int cantidad) {
    this -> cantidad = cantidad;
}
