//
// Created by agustin on 4/6/21.
//

#include "humanocv.h"

Humanocv::Humanocv(int posicion_x, int posicion_y, string tipo, int cantidad): Humano(posicion_x, posicion_y, tipo, cantidad){}

void Humanocv::mostrar() {
    cout << "Hola, soy un humano pero tengo la habilidad para matar zombis y vampiros" << endl;
}