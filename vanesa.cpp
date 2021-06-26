//
// Created by agustin on 4/6/21.
//

#include "vanesa.h"

#include <iostream>

Vanesa::Vanesa(int posicion_x, int posicion_y, string tipo, int cantidad): Humanocv(posicion_x, posicion_y, tipo, cantidad) {}

void Vanesa::mostrar() {
    cout << "Hola, soy Vanesa y soy la lider de la resistencia" << endl;
}