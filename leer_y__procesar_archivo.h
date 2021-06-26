#ifndef LEER_Y_PROCESAR_ARCHIVO_H
#define LEER_Y_PROCESAR_ARCHIVO_H

#include "Objeto_generico.h"
#include "Matriz.h"
#include "Constantes.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Lector{
    private:
        Objeto_generico** objetos;
        int cant_objetos;
    public:

        //PRE: -
        //POST: Crea el objeto
        Lector();

        //PRE: Recibe la matriz
        //POST: Lee el archivo
        void leer_archivo(Matriz*);

        //PRE: Recibe un objeto vacio y la linea a procesar del archivo
        //POST: Obtiene los las caracterisiticas del objeto generico
        void identificar_caracteristicas(Objeto_generico* objeto_generico, string);

        //PRE: Recibe un objeto vacio, el tipo de objeto, la posicion y la cantidad
        //POST: Agrega las caracteristicas al objeto generico
        void agregar_caracteristicas(Objeto_generico*, string, int, int, string);

        //PRE: Recibe el objeto generico con sus caracteristicas
        //POST: Lo agrega al vector de punteros a objetos genericos
        void cargar_cola_creacion(Objeto_generico*);

        //PRE: Recibe la posicion del primer espacio y la linea del archivo
        //POST: Devuelve la coordenada x
        int buscar_coordenada_x(long, string);

        //PRE: Recibe la posicion del primer espacio y la linea del archivo
        //POST Devuelve la posicion en y
        int buscar_coordenada_y(long, string);

        //PRE: -
        //POST: Devuelve la cantidad de objetos genericos
        int devolver_cantidad_objetos();

        //PRE: -
        //POST: Devuelve el vector con punteros a objetos genericos
        Objeto_generico** devolver_cola_creacion();

        //PRE: -
        //POST: Destruye el vector de punteros a objetos genericos
        ~Lector();
};


#endif //LEER_Y_PROCESAR_ARCHIVO_H