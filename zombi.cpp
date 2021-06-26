//
// Created by agustin on 4/6/21.
//

#include "zombi.h"
#include <iostream>

Zombi::Zombi(int posicion_x, int posicion_y, string tipo, int cantidad): Ser(posicion_x, posicion_y, tipo, cantidad) {}

void Zombi::mostrar() {
    cout << "Hola, soy un zombi y te voy a comer los sesos" << endl;
}