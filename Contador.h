//
// Created by agustin on 8/6/21.
//

#ifndef TP2_ALGO2_CONTADOR_H
#define TP2_ALGO2_CONTADOR_H

#include "Constantes.h"
#include <iostream>
#include <iomanip>

class Contador {
    private:
        float cantidades[CANTIDAD_OBJETOS_PARCIAL];
        float porcentajes[CANTIDAD_OBJETOS_PARCIAL];
    public:

        //PRE: -
        //POST: Crea el objeto Contador
        Contador();

        //PRE: -
        //POST: Incrementa la cantidad de humanos
        void incrementar_humano();

        //PRE: -
        //POST: Incrementa la cantidad de zombis
        void incrementar_zombi();

        //PRE: -
        //POST: Incrementa la cantidad de vampiros
        void incrementar_vampiro();

        //PRE: Recibe la cantidad de unidades de agua
        //POST: Incrementa la cantidad de aguas
        void incrementar_agua(int);

        //PRE: Recibe la cantidad de unidades de balas
        //POST: Incrementa la cantidad de balas
        void incrementar_bala(int);

        //PRE: -
        //POST: Incrementa la cantidad de estacas
        void incrementar_estaca();

        //PRE: -
        //POST: Incrementa la cantidad de escopetas
        void incrementar_escopeta();

        //PRE: -
        //POST: Incrementa la cantidad de cruces
        void incrementar_cruz();

        //PRE: -
        //POST: Incremeneta la cantidad de humanos
        void decrementar_humano();

        //PRE: -
        //POST: Incrementa la cantidad de zombis
        void decrementar_zombi();

        //PRE: -
        //POST: Incrementa la cantidad de vampiros
        void decrementar_vampiro();

        //PRE: Recibe la cantidad de aguas del objeto
        //POST: Decrementa la cantidad de aguas
        void decrementar_agua(int);

        //PRE: Recibe la cantidad de balas del objeto
        //POST: Decrementa la cantidad de balas
        void decrementar_bala(int);

        //PRE: -
        //POST: Decrementa la cantidad de estacas
        void decrementar_estaca();

        //PRE: -
        //POST: Decrementa la cantidad de escopetas
        void decrementar_escopeta();

        //PRE: -
        //POST: Decrementa la cantidad de cruces
        void decrementar_cruz();

        //PRE: -
        //POST: Calcula los porcentajes sobre el total de los objetos
        void calcular_porcentajes();

        //PRE: -
        //POST: Imprime la tabla de porcentajes
        void mostrar_tabla_porcentajes();
};


#endif //TP2_ALGO2_CONTADOR_H
