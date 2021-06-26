//
// Created by agustin on 4/6/21.
//

#include "agua_bendita.h"

Agua_bendita::Agua_bendita(int posicion_x, int posicion_y, string tipo, int cantidad): Elemento(posicion_x, posicion_y, tipo, cantidad) {}

void Agua_bendita::mostrar() {
    cout << "Soy agua bendita, sirvo para alejar vampiros. Y tengo: " << this -> cantidad << " unidades" << endl;
}

int Agua_bendita::devolver_cantidad() {
    return this -> cantidad;
}