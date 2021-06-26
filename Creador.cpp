//
// Created by agustin on 4/6/21.
//


#include "Creador.h"

using namespace std;


void Creador::crear_objetos(Objeto_generico** cola_creacion, int cant_objetos, Matriz* tablero_juego, Contador* contador){
    string nombre_objeto;
    int posicion_x, posicion_y, cantidad;

    for (int i = 0; i < cant_objetos; i++){
        nombre_objeto = cola_creacion[i] -> devolver_tipo_objeto();
        posicion_x = cola_creacion[i] -> devolver_coordenada_x();
        posicion_y = cola_creacion[i] -> devolver_coordenada_y();
        cantidad = cola_creacion[i] -> devolver_cantidad();

        if (nombre_objeto == HUMANO)
            crear_humano(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == HUMANOCV)
            crear_humanocv(posicion_x, posicion_x, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == ZOMBI)
            crear_zombi(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == VAMPIRO)
            crear_vampiro(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == VAMPIRELLA)
            crear_vampirella(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == VANESA)
            crear_vanesa(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == NOSFERATU)
            crear_nosferatu(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == AGUABENDITA)
            crear_agua(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == BALA)
            crear_bala(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == ESTACA)
            crear_estaca(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == ESCOPETA)
            crear_escopeta(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);

        else if (nombre_objeto == CRUZ)
            crear_cruz(posicion_x, posicion_y, nombre_objeto, cantidad, tablero_juego, contador);
    }
}

void Creador::crear_agua(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Agua_bendita* agua;
    agua = new Agua_bendita(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(agua);
    contador -> incrementar_agua(agua -> devolver_cantidad());
}

void Creador::crear_humano(int posicion_x, int posicion_y, string tipo, int cantidad,  Matriz* tablero_juego, Contador* contador) {
    Humano* humano;
    humano = new Humano(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(humano);
    contador -> incrementar_humano();
}

void Creador::crear_zombi(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Zombi* zombi;
    zombi = new Zombi(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(zombi);
    contador -> incrementar_zombi();
}

void Creador::crear_vampiro(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Vampiro* vampiro;
    vampiro = new Vampiro(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(vampiro);
    contador -> incrementar_vampiro();
}

void Creador::crear_nosferatu(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Nosferatu* nosferatu;
    nosferatu = new Nosferatu(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(nosferatu);
    contador -> incrementar_vampiro();
}

void Creador::crear_vampirella(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Vampirella* vampirella;
    vampirella = new Vampirella(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(vampirella);
    contador -> incrementar_vampiro();
}

void Creador::crear_vanesa(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Vanesa* vanesa;
    vanesa = new Vanesa(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(vanesa);
    contador -> incrementar_humano();
}

void Creador::crear_humanocv(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Humanocv* humanocv;
    humanocv = new Humanocv(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(humanocv);
    contador -> incrementar_humano();
}

void Creador::crear_cruz(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Cruz* cruz;
    cruz = new Cruz(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(cruz);
    contador -> incrementar_cruz();
}

void Creador::crear_escopeta(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Escopeta* escopeta;
    escopeta = new Escopeta(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(escopeta);
    contador -> incrementar_escopeta();
}

void Creador::crear_estaca(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Estaca* estaca;
    estaca = new Estaca(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(estaca);
    contador -> incrementar_estaca();
}

void Creador::crear_bala(int posicion_x, int posicion_y, string tipo, int cantidad, Matriz* tablero_juego, Contador* contador) {
    Bala* bala;
    bala = new Bala(posicion_x, posicion_y, tipo, cantidad);
    tablero_juego -> agregar_al_tablero(bala);
    contador -> incrementar_bala(bala -> devolver_cantidad());
}

int Creador::elegir_posicion_x(Matriz* tablero_juego) {
    int posicion_x;

    cout << endl;
    cout << "Tene en cuenta que no puede ser menor a 1, ni mayor a " << tablero_juego -> devolver_numero_filas() << " : ";
    cin >> posicion_x;

    while (posicion_x > tablero_juego -> devolver_numero_filas() || posicion_x < 1) {
        cout << "Por favor, ingrese un valor valido: ";
        cin >> posicion_x;
    }

    return posicion_x - 1; //se le resta 1 porque en realidad la matriz se maneja desde 0
}

int Creador::elegir_posicion_y(Matriz* tablero_juego) {
    int posicion_y;

    cout << endl;
    cout << "Tene en cuenta que no puede ser menor a 1, ni mayor a " << tablero_juego -> devolver_numero_columnas() << " : ";
    cin >> posicion_y;

    while (posicion_y > tablero_juego -> devolver_numero_columnas() || posicion_y < 1) {
        cout << "Por favor, ingrese un valor valido: ";
        cin >> posicion_y;
    }

    return posicion_y - 1; //se le resta 1 porque en realidad la matriz se maneja desde 0
}

void Creador::alta(Matriz* tablero_juego, Contador* contador) {
    int posicion_x, posicion_y;
    string tipo;
    int cantidad = 1;

    cout << "Que objeto queres dar de alta? " << endl;
    tipo = tablero_juego -> elegir_objeto();

    cout << "Elegi la fila en la que queres colocar el objeto" << endl;
    posicion_x = this -> elegir_posicion_x(tablero_juego);

    cout << "Elegi la columna en la que queres colocar el objeto" << endl;
    posicion_y = this -> elegir_posicion_y(tablero_juego);

    if (tipo == HUMANO)
        crear_humano(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);

    else if (tipo == ZOMBI)
        crear_zombi(posicion_x, posicion_y, tipo, cantidad,  tablero_juego, contador);

    else if (tipo == VAMPIRO)
        crear_vampiro(posicion_x, posicion_y, tipo, cantidad,  tablero_juego, contador);

    else if (tipo == VAMPIRELLA)
        crear_vampirella(posicion_x, posicion_y, tipo, cantidad,  tablero_juego, contador);

    else if (tipo == VANESA)
        crear_vanesa(posicion_x, posicion_y, tipo, cantidad,  tablero_juego, contador);

    else if (tipo == NOSFERATU)
        crear_nosferatu(posicion_x, posicion_y, tipo, cantidad,  tablero_juego, contador);

    else if (tipo == AGUABENDITA) {
        cout << "Ingresa la cantidad de dosis de agua bendita que queres crear: ";
        cin >> cantidad;
        crear_agua(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);
    }

    else if (tipo == BALA) {
        cout << "Ingresa la cantidad de balas que queres crear: ";
        cin >> cantidad;
        crear_bala(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);
    }
    else if (tipo == ESTACA)
        crear_estaca(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);

    else if (tipo == ESCOPETA)
        crear_escopeta(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);

    else if (tipo == CRUZ)
        crear_cruz(posicion_x, posicion_y, tipo, cantidad, tablero_juego, contador);

    cout << "El alta se realizo con exito!" << endl;
}

void Creador::baja(Matriz* tablero_juego, Contador* contador) {
    int posicion_x, posicion_y;

    cout << "Elegi la fila en donde se encuentra el objeto a dar de baja" << endl;
    posicion_x = this -> elegir_posicion_x(tablero_juego);

    cout << "Elegi la columna en donde se encentra el objeto a dar de baja" << endl;
    posicion_y = this -> elegir_posicion_y(tablero_juego);

    tablero_juego -> baja_tablero(posicion_x, posicion_y, contador);

    cout << "La baja se realizo con exito!" << endl;
}


