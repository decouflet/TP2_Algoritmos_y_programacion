//
// Created by agustin on 7/6/21.
//

#ifndef TP2_ALGO2_MATRIZ_H
#define TP2_ALGO2_MATRIZ_H

#include "objetos.h"
#include "Constantes.h"
#include "Contador.h"

#include <iostream>
using namespace std;


class Matriz {
    private:
        Objetos*** tablero;
        int filas, columnas;
    public:

        //PRE: -
        //POST: Crea el objeto Matriz
        Matriz();

        //PRE: -
        //POST: Coloca a cada posicion de la matriz apuntando a null
        void inicializar_casilleros();

        //PRE: Recibe la linea del archivo que tiene la cantidad de filas y columnas
        //POST: Asigna las dimensiones de la matriz
        void asignar_dimenasiones(string);

        //PRE: Recibe un puntero de tipo Objetos
        //POST: Lo agrega a la matriz
        void agregar_al_tablero(Objetos*);

        //PRE: -
        //POST: Muestra la matriz
        void mostrar_tablero();

        //PRE: -
        //POST: Informa si el objeto est{a en el cuadrante
        void busqueda_cuadrante();

        //PRE: -
        //POST: Devuelve el tipo de objeto elegido
        string elegir_objeto();

        //PRE: -
        //POST: Devuelve el cuadrante elegido
        string elegir_cuadrante();

        //PRE: Recibe la posicion x e y del objeto
        //POST: Muestra la informacion del objeto elegido
        void mostrar_objeto(int, int);

        //PRE: -
        //POST: Devuelve el numero de filas
        int devolver_numero_filas();

        //PRE: -
        //POST: Devuelve el numero de columnas
        int devolver_numero_columnas();

        //PRE: Recibe la posicion x e y del objeto y el contador
        //POST: Hace la baja del objeto elegido
        void baja_tablero(int, int, Contador*);

        //PRE: -
        //POST: Destruye la matriz
        ~Matriz();
};


#endif //TP2_ALGO2_MATRIZ_H
