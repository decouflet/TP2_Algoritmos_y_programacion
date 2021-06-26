//
// Created by agustin on 4/6/21.
//

#include "cruz.h"


Cruz::Cruz(int posicion_x, int posicion_y, string tipo, int cantidad): Elemento(posicion_x, posicion_y, tipo, cantidad) {}

void Cruz::mostrar() {
    cout << "Soy una cruz y sirvo para mantener vampiros alejados" << endl;
}