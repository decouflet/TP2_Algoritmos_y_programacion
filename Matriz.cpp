//
// Created by agustin on 7/6/21.
//

#include "Matriz.h"


Matriz::Matriz() {
    this -> filas = 0;
    this -> columnas = 0;
}

void Matriz::inicializar_casilleros() {
    //hacemos que cada casillero apuntee a null
    this -> tablero = new Objetos**[this -> filas];
    for (int i = 0; i < (this -> filas); i++)
        this -> tablero[i] = new Objetos*[this -> columnas];

    for (int x = 0; x < (this -> filas); x++)
        for (int y = 0; y < (this -> columnas); y++)
            this -> tablero[x][y] = nullptr;
}

void Matriz::asignar_dimenasiones(string linea) {
    string fila_str;
    string columna_str;
    long tamanio;

    for (long i = 0; i < linea.size(); i++)
        if (linea[i] == ' '){
            for(long x = 0; x < i; x++)
                fila_str += linea[x];
            this -> filas += stoi(fila_str);

            tamanio = linea.size() - 1; // Le resto 1 porque el size cuenta a partir de 1 y yo cuento la primer posicion como 0
            for (long z = i + 1; z < tamanio; z++)
                columna_str += linea[z];
            this -> columnas = stoi(columna_str);
            }
}

void Matriz::agregar_al_tablero(Objetos* ficha) {
    if (tablero[ficha -> devolver_posicion_x()][ficha -> devolver_posicion_y()] == nullptr)
        tablero[ficha -> devolver_posicion_x()][ficha -> devolver_posicion_y()] = ficha;
    else
        cout << "Este casillero esta ocupado, la proxima vez intente en otra posicion" << endl;
}

void Matriz::mostrar_tablero() {
    for (int x = 0; x < this -> filas; x++) {
        cout << endl;
        for (int y = 0; y < this -> columnas; y++)
            if (this -> tablero[x][y] == nullptr)
                cout << "  *  ";
            else {
                if (this->tablero[x][y] -> devolver_tipo() == HUMANO)
                    cout << "  h  ";

                else if (this->tablero[x][y] -> devolver_tipo() == ZOMBI)
                    cout << "  z  ";

                else if (this->tablero[x][y] -> devolver_tipo() == VAMPIRO)
                    cout << "  v  ";

                else if (this->tablero[x][y] -> devolver_tipo() == VAMPIRELLA)
                    cout << "  V  ";

                else if (this->tablero[x][y] -> devolver_tipo() == NOSFERATU)
                    cout << "  N  ";

                else if (this->tablero[x][y] -> devolver_tipo() == VANESA)
                    cout << "  W  ";

                else if (this->tablero[x][y] -> devolver_tipo() == HUMANOCV)
                    cout << "  H  ";

                else if (this->tablero[x][y] -> devolver_tipo() == AGUABENDITA)
                    cout << "  a  ";

                else if (this->tablero[x][y] -> devolver_tipo() == ESTACA)
                    cout << "  e  ";

                else if (this->tablero[x][y] -> devolver_tipo() == ESCOPETA)
                    cout << "  E  ";

                else if (this->tablero[x][y] -> devolver_tipo() == BALA)
                    cout << "  b  ";

                else if (this->tablero[x][y] -> devolver_tipo() == CRUZ)
                    cout << "  c  ";
            }
    }
    cout << endl;
    cout << endl;
}

string Matriz::elegir_objeto() {
    int eleccion;
    string objeto_elegido;

    cout << "1. " << HUMANO << endl;
    cout << "2. " << ZOMBI << endl;
    cout << "3. " << VAMPIRO << endl;
    cout << "4. " << VAMPIRELLA << endl;
    cout << "5. " << VANESA << endl;
    cout << "6. " << NOSFERATU << endl;
    cout << "7. " << HUMANOCV << endl;
    cout << "8. " << AGUABENDITA << endl;
    cout << "9. " << CRUZ << endl;
    cout << "10. " << ESTACA << endl;
    cout << "11. " << ESCOPETA << endl;
    cout << "12. " << BALA << endl;
    cout << endl;

    cout << "Ingrese el numero que identifica al objeto: ";
    cin >> eleccion;

    switch (eleccion - 1) {
        case Humano_enum_total:
            objeto_elegido = HUMANO;
            return HUMANO;

        case Zombi_enum_total:
            objeto_elegido = ZOMBI;
            break;

        case Vampiro_enum_total:
            objeto_elegido = VAMPIRO;
            break;

        case Vampirella_enum_total:
            objeto_elegido = VAMPIRELLA;
            break;

        case Vanesa_enum_total:
            objeto_elegido = VANESA;
            break;

        case Nosferatu_enum_total:
            objeto_elegido = NOSFERATU;
            break;

        case Humanocv_enum_total:
            objeto_elegido = HUMANOCV;
            break;

        case Agua_bendita_enum_total:
            objeto_elegido = AGUABENDITA;
            break;

        case Cruz_enum_total:
            objeto_elegido = CRUZ;
            break;

        case Estaca_enum_total:
            objeto_elegido = ESTACA;
            break;

        case Escopeta_enum_total:
            objeto_elegido = ESCOPETA;
            break;

        case Bala_enum_total:
            objeto_elegido = BALA;
            break;
    }

    return objeto_elegido;
}


string Matriz::elegir_cuadrante() {
    int eleccion;
    string cuadrante_elegido;

    cout << "1. " << NO << endl;
    cout << "2. " << NE << endl;
    cout << "3. " << SO << endl;
    cout << "4. " << SE << endl;

    cout << "Ingrese el numero que identifica al cuadrante: ";
    cin >> eleccion;

    switch (eleccion - 1) { // el -1 es porque en realidad empieza de 0 la cuenta
        case Noroeste:
            cuadrante_elegido = NO;
            break;

        case Noreste:
            cuadrante_elegido = NE;
            break;

        case Suroeste:
            cuadrante_elegido = SO;
            break;

        case Sureste:
            cuadrante_elegido = SE;
            break;
    }

    return cuadrante_elegido;
}

void Matriz::busqueda_cuadrante() {
    string objeto_elegido;
    string cuadrante;
    bool encontrado = false;

    cout << "Que objeto queres buscar?" << endl;
    objeto_elegido = this -> elegir_objeto();

    cout << "Y en que cuadrante queres buscarlo? " << endl;
    cuadrante = this -> elegir_cuadrante();

    if (cuadrante == NO) {
        for (int x = 0; x < (this -> filas / 2); x++)
            for (int y = 0; y < (this -> columnas / 2); y++)
                if (this -> tablero[x][y] != nullptr)
                    if ((this -> tablero[x][y]) -> devolver_tipo() == objeto_elegido)
                        encontrado = true;
    }

    else if (cuadrante == NE) {
        for (int i = 0; i < (this -> filas / 2); i++)
            for (int j = this -> columnas / 2; j < this -> columnas; j++)
                if (this -> tablero[i][j] != nullptr)
                    if ((this -> tablero[i][j]) -> devolver_tipo() == objeto_elegido)
                        encontrado = true;
    }

    else if (cuadrante == SO) {
        for (int p = this -> filas / 2; p < this -> filas; p++)
            for (int q = 0; q < this -> columnas / 2; q++)
                if (this -> tablero[p][q] != nullptr)
                    if ((this -> tablero[p][q]) -> devolver_tipo() == objeto_elegido)
                        encontrado = true;
    }

    else if (cuadrante == SE) {
        for (int a = this -> filas / 2; a < this -> filas; a++)
            for (int b = this -> columnas / 2; b < this -> columnas; b++)
                if (this -> tablero[a][b] != nullptr)
                    if ((this -> tablero[a][b]) -> devolver_tipo() == objeto_elegido)
                        encontrado = true;
    }

    if (encontrado)
        cout << "Hay un/a " << objeto_elegido << " en el cuadrante: " << cuadrante << endl;
    else
        cout << " No hay un/a " << objeto_elegido << " en el cuadrante: " << cuadrante << endl;
}

void Matriz::mostrar_objeto(int posicion_x, int posicion_y) {
    if (this -> tablero[posicion_x][posicion_y] != nullptr)
        this -> tablero[posicion_x][posicion_y] -> mostrar();
    else
        cout << "No hay ningun objeto en el casillero que eligio" << endl;
}

int Matriz::devolver_numero_filas() {
    return this -> filas;
}

int Matriz::devolver_numero_columnas() {
    return this -> columnas;
}

void Matriz::baja_tablero(int posicion_x, int posicion_y, Contador* contador) {
    if (this->tablero[posicion_x][posicion_y] != nullptr) {
        if (this->tablero[posicion_x][posicion_y] -> devolver_tipo() == HUMANO ||
            this->tablero[posicion_x][posicion_y] -> devolver_tipo() == HUMANOCV ||
            this->tablero[posicion_x][posicion_y] -> devolver_tipo() == VANESA)
            contador->decrementar_humano();

        else if (this->tablero[posicion_x][posicion_y] -> devolver_tipo() == ZOMBI)
            contador->decrementar_zombi();

        else if (this->tablero[posicion_x][posicion_y] -> devolver_tipo() == VAMPIRO ||
             this->tablero[posicion_x][posicion_y] -> devolver_tipo() == VAMPIRELLA ||
             this->tablero[posicion_x][posicion_y] -> devolver_tipo() == NOSFERATU)
            contador -> decrementar_vampiro();

        else if (this->tablero[posicion_x][posicion_y]->devolver_tipo() == AGUABENDITA)
            contador->decrementar_agua(this->tablero[posicion_x][posicion_y]->devolver_cantidad());

        else if (this->tablero[posicion_x][posicion_y]->devolver_tipo() == BALA)
            contador->decrementar_bala(this->tablero[posicion_x][posicion_y]->devolver_cantidad());

        else if (this->tablero[posicion_x][posicion_y]->devolver_tipo() == ESTACA)
            contador->decrementar_estaca();

        else if (this->tablero[posicion_x][posicion_y]->devolver_tipo() == ESCOPETA)
            contador->decrementar_escopeta();

        else if (this->tablero[posicion_x][posicion_y]->devolver_tipo() == CRUZ)
            contador->decrementar_cruz();

        delete this->tablero[posicion_x][posicion_y];
        this -> tablero[posicion_x][posicion_y] = nullptr;
    }

    else
        cout << "Lo siento, la posicion que eligio para dar de baja no contiene a ningun objeto" << endl;
}


Matriz::~Matriz() {
    for (int i = 0; i < this -> filas; i++) {
        for (int j = 0; j < this -> columnas; j++)
            if (this -> tablero[i][j] != nullptr)
                delete this -> tablero[i][j];
        delete[] this -> tablero[i];
    }

    delete[] this -> tablero;
}