//
// Created by agustin on 4/6/21.
//

#include "humano.h"
#include <iostream>

Humano::Humano(int posicion_x, int posicion_y, string tipo, int cantidad) : Ser(posicion_x, posicion_y, tipo, cantidad) {}

void Humano::mostrar() {
    cout << "Hola, soy un humano. ¡Por favor zombi no comas mi cerebro!" << endl;
}