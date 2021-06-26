//
// Created by agustin on 4/6/21.
//

#include <iostream>
#include "vampirella.h"

Vampirella::Vampirella(int posicion_x, int posicion_y, string tipo, int cantidad): Vampiro(posicion_x, posicion_y, tipo, cantidad) {}

void Vampirella::mostrar() {
    cout << "Hola soy Vampirella y me encanta la sangre fresca" << endl;
}