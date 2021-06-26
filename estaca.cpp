//
// Created by agustin on 4/6/21.
//

#include "estaca.h"

Estaca::Estaca(int posicion_x, int posicion_y, string tipo, int cantidad): Elemento(posicion_x, posicion_y, tipo, cantidad) {}

void Estaca::mostrar(){
    cout << "Soy una estaca y sirvo para matar vampiros" << endl;
}