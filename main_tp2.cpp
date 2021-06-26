#include "leer_y__procesar_archivo.h"
#include "Objeto_generico.h"
#include "Creador.h"
#include "Contador.h"
#include "Matriz.h"
#include "Menu.h"

#include<iostream>

using namespace std;

//COMENTARIO: En el archivo leer_y__procesar_archivo.cpp hay una expliacion de porque tengo la ultima linea del archivo vacia

int main(){
    //Inicializamos objetos

    Objeto_generico** cola_creacion;
    Lector wachin;
    Matriz* tablero_juego;
    tablero_juego = new Matriz;
    Contador* contador;
    contador  = new Contador;
    Creador* mago;
    mago = new Creador;
    Menu* menu;
    menu = new Menu;
    int cant_objetos;


    //Implementaciones basicas para el funcionamiento
    wachin.leer_archivo(tablero_juego);
    tablero_juego -> inicializar_casilleros();
    cola_creacion = wachin.devolver_cola_creacion();
    cant_objetos = wachin.devolver_cantidad_objetos();
    mago -> crear_objetos(cola_creacion, cant_objetos, tablero_juego, contador);
    contador -> calcular_porcentajes();

    cout << "BIENVENIDO AL JUEGO DE NOSFERATU!" << endl;
    menu -> empezar_juego(tablero_juego, contador, mago);
    cout << "Espero que te hayas divertido, has salido del juego" << endl;

    delete[] contador;
    delete[] mago;
    delete[] menu;
    return 0;
}