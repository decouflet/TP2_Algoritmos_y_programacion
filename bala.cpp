//
// Created by agustin on 4/6/21.
//

#include "bala.h"


Bala::Bala(int posicion_x, int posicion_y, string tipo, int cantidad): Elemento(posicion_x, posicion_y, tipo, cantidad) {}

void Bala::mostrar() {
    cout << "Soy una bala, ando bien en escopetas recortadas. Y tengo: " << this -> cantidad << " unidades" << endl;
}

int Bala::devolver_cantidad() {
    return this -> cantidad;
}