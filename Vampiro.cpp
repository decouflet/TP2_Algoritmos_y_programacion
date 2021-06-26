//
// Created by agustin on 6/6/21.
//

#include "Vampiro.h"

Vampiro::Vampiro(int posicion_x, int posicion_y, string tipo, int cantidad): Ser(posicion_x, posicion_y, tipo, cantidad) {}

void Vampiro::mostrar() {
    cout << "Hola, soy un vampiro y me encanta la sangre, en especial la de tipo AB-" << endl;
}