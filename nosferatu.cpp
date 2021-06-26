//
// Created by agustin on 4/6/21.
//

#include "nosferatu.h"
#include <iostream>

Nosferatu::Nosferatu(int posicion_x, int posicion_y, string tipo, int cantidad): Vampiro(posicion_x, posicion_y, tipo, cantidad) {}

void Nosferatu::mostrar() {
    cout << "Hola, soy Nosferatu. Tapate el cuello porque no soy muy amigable" << endl;
}