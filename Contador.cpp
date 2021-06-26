//
// Created by agustin on 8/6/21.
//

#include "Contador.h"

Contador::Contador() {
    for (int i = 0; i < CANTIDAD_OBJETOS_PARCIAL; i++)
        this -> cantidades[i] = 0;
}

void Contador::calcular_porcentajes() {
    for (int i = 0; i < CANTIDAD_OBJETOS_PARCIAL; i++){
        if (i < 3)
            this -> porcentajes[i] = (cantidades[i] * 100) / (cantidades[Humano_enum] + cantidades[Zombi_enum] + cantidades[Vampiro_enum]);

        else if (i > 2 && i < 6)
            this -> porcentajes[i] = (cantidades[i] * 100) / (cantidades[Agua_bendita_enum] + cantidades[Cruz_enum] + cantidades[Estaca_enum]);

        else if (i == 6)
            this -> porcentajes[i] = (cantidades[i] * 100) / (cantidades[Bala_enum]);

        else if (i == 7)
            this -> porcentajes[i] = (cantidades[i] * 100) / (cantidades[Escopeta_enum]);
    }
}

void Contador::mostrar_tabla_porcentajes() {
    cout << setw(20) << "ELEMENTO" << setw(10) << "CANTIDAD" << setw(30) << "POCENTAJE SOBRE EL TOTAL" << endl;
    cout << setw(19) << HUMANO << setw(11) << cantidades[Humano_enum] << setw(20) << porcentajes[Humano_enum] << "%" <<  endl;
    cout << setw(18) << ZOMBI << setw(12) << cantidades[Zombi_enum] << setw(20) << porcentajes[Zombi_enum] << "%" <<  endl;
    cout << setw(20) << VAMPIRO << setw(10) << cantidades[Vampiro_enum] << setw(20) << porcentajes[Vampiro_enum] << "%" <<  endl;
    cout << setw(17) << AGUABENDITA << setw(13) << cantidades[Agua_bendita_enum] << setw(20) << porcentajes[Agua_bendita_enum] << "%" <<  endl;
    cout << setw(18) << CRUZ << setw(12) << cantidades[Cruz_enum] << setw(20) << porcentajes[Cruz_enum] << "%" <<  endl;
    cout << setw(19) << ESTACA << setw(11) << cantidades[Estaca_enum] << setw(20) << porcentajes[Estaca_enum] << "%" <<  endl;
    cout << setw(21) << ESCOPETA << setw(9) << cantidades[Escopeta_enum] << setw(20) << porcentajes[Escopeta_enum] << "%" <<  endl;
    cout << setw(17) << BALA << setw(13) << cantidades[Bala_enum] << setw(20) << porcentajes[Bala_enum] << "%" <<  endl;
    cout << endl;
}


void Contador::incrementar_humano() {
    cantidades[Humano_enum]++;
}

void Contador::incrementar_zombi() {
    cantidades[Zombi_enum]++;
}

void Contador::incrementar_vampiro() {
    cantidades[Vampiro_enum]++;
}

void Contador::incrementar_agua(int cantidad) {
    cantidades[Agua_bendita_enum] += cantidad;
}

void Contador::incrementar_cruz() {
    cantidades[Cruz_enum]++;
}

void Contador::incrementar_estaca() {
    cantidades[Estaca_enum]++;
}

void Contador::incrementar_escopeta() {
    cantidades[Escopeta_enum]++;
}

void Contador::incrementar_bala(int cantidad) {
    cantidades[Bala_enum] += cantidad;
}

void Contador::decrementar_humano() {
    cantidades[Humano_enum]--;
}

void Contador::decrementar_zombi() {
    cantidades[Zombi_enum]--;
}

void Contador::decrementar_vampiro() {
    cantidades[Vampiro_enum]--;
}

void Contador::decrementar_agua(int cantidad) {
    cantidades[Agua_bendita_enum] -= cantidad;
}

void Contador::decrementar_cruz() {
    cantidades[Cruz_enum]--;
}

void Contador::decrementar_estaca() {
    cantidades[Estaca_enum]--;
}

void Contador::decrementar_escopeta() {
    cantidades[Escopeta_enum]--;
}

void Contador::decrementar_bala(int cantidad) {
    cantidades[Bala_enum] -= cantidad;
}