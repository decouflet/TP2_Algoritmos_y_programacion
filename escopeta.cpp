//
// Created by agustin on 4/6/21.
//

#include "escopeta.h"

Escopeta::Escopeta(int posicion_x, int posicion_y, string tipo, int cantidad): Elemento(posicion_x, posicion_y, tipo, cantidad) {}

void Escopeta::mostrar() {
    cout << "Soy una escopeta, pero mi apodo es matamostro" << endl;
}