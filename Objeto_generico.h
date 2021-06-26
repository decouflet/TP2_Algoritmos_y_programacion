#ifndef OBJETO_GENERICO_H
#define OBJETO_GENERICO_H

#include <string>
using namespace std;


class Objeto_generico {
    private:
        int coordenada_x;
        int coordenada_y;
        string tipo_objeto;
        int cantidad;
    public:

        //PRE: -
        //POST: Devuelve la coordenada x
        int devolver_coordenada_x();

        //PRE: -
        //POST: Devuelve la coordenada y
        int devolver_coordenada_y();

        //PRE: -
        //POST: Devuelve el tipo de objeto
        string devolver_tipo_objeto();

        //PRE: -
        //POST: Devuelve la cantidad del objeto
        int devolver_cantidad();

        //PRE: Recibe el nombre del objeto
        //POST: Asigna el tipo de objeto
        void asignar_tipo_objeto(string);

        //PRE: Recibe la coordenada x
        //POST: Asigna la coordenada x
        void asginar_coordenada_x(int);

        //PRE: Recibe la coordenada y
        //POST: Asigna la coordenada y
        void asignar_coordenada_y(int);

        //PRE: Recibe la cantidad
        //POST: Asigna la cantidad
        void asignar_cantidad(int);

};

#endif //OBJETO_GENERICO_H