#include "leer_y__procesar_archivo.h"

using namespace std;


Lector::Lector(){
    this -> cant_objetos = 0;
}

void Lector::leer_archivo(Matriz* tablero_juego){
    string linea;
    ifstream archivo(ARCHIVO);
    if (!archivo){
        cout << "Se produjo un error" << endl;
    }
    else{
        Objeto_generico* objeto_generico;
        int primera_linea = 0;

        while(getline(archivo, linea)){
            if (primera_linea == 0) {
                tablero_juego -> asignar_dimenasiones(linea);
                primera_linea++;
            }
            else {
                objeto_generico = new Objeto_generico;
                identificar_caracteristicas(objeto_generico, linea);
                cargar_cola_creacion(objeto_generico);
            }
        }
    }
    archivo.close();
}

int Lector::buscar_coordenada_x(long primer_espacio, string linea){
    string coordenada_x;
    long posicion_coordenada_x;
    char letra;
    for (long i = primer_espacio + 1; i < linea.size(); i++){
        if (linea[i] == ' '){
            posicion_coordenada_x = i;
            primer_espacio += 2;
            for (long x = primer_espacio; x < posicion_coordenada_x - 1; x++){ //le agregue el -1 al posicion_coordenada_x porque este es el espacio y antes va la coma
                letra = linea[x];
                coordenada_x += letra;
            }
        }
    }
    return stoi(coordenada_x);
}

//COMENTARIO: El archivo tiene la ultima linea vacia, porque las demas lineas tienen como ultimo valor /r (al saltar de linea).
// Y para que pueda reutilizar mis funciones que toman las coordenadas le agregue este caracter (/r) a la ante ultima linea para
// no tener que hacer una funcion a parte para esta ante ultima linea la cual sin este salto de linea que le agregue seria distinta
// a las demas

int Lector::buscar_coordenada_y(long primer_espacio, string linea){
    string coordenada_y;
    long posicion_coordenada_y;
    char letra;
    long tamanio;
    int contador_espacios = 0;
    for (long i=primer_espacio - 1; i < linea.size(); i++){
        if (linea[i] == ' ' && contador_espacios == 0){
            contador_espacios += 1;
            }
        else if (linea[i] == ' ' && contador_espacios == 1){
            posicion_coordenada_y = i;
            tamanio = linea.size() - 2;
            for (long x = posicion_coordenada_y + 1; x < tamanio; x++){
                letra = linea[x];
                coordenada_y += letra;
            }
        }
    }
    return stoi(coordenada_y);
}

void Lector::identificar_caracteristicas(Objeto_generico* objeto_generico, string linea){
    int coordenada_x;
    int coordenada_y;
    char letra;
    string cuantas;
    long primer_espacio;
    string nombre;
    int espacio_encontrado = 0;
    for (long i = 0; i < linea.size(); i++){
        if (linea[i] == ' ' && espacio_encontrado == 0){
            primer_espacio = i;
            for (long x = 0; x<i; x++){
                letra = linea[x];
                nombre += letra;
            }
            espacio_encontrado += 1;
        }
    }

    if (nombre == AGUABENDITA || nombre == BALA) {
        cuantas += linea[primer_espacio + 1];
        if (isdigit(linea[primer_espacio + 2])) {
            cuantas += linea[primer_espacio + 2];
        }
        primer_espacio += 3;
    }

    coordenada_x = buscar_coordenada_x(primer_espacio, linea);
    coordenada_y = buscar_coordenada_y(primer_espacio, linea);

    this -> agregar_caracteristicas(objeto_generico, nombre, coordenada_x, coordenada_y, cuantas);

}

void Lector::agregar_caracteristicas(Objeto_generico* objeto_generico, string nombre, int coordenada_x, int coordenada_y, string cuantas){
    objeto_generico -> asignar_tipo_objeto(nombre);
    objeto_generico -> asginar_coordenada_x(coordenada_x);
    objeto_generico -> asignar_coordenada_y(coordenada_y);
    if (!cuantas.empty()){
        objeto_generico -> asignar_cantidad(stoi(cuantas));
    }
    else {
        objeto_generico -> asignar_cantidad(1); //esto es para que no quede con un valor random
    }
}

void Lector::cargar_cola_creacion(Objeto_generico* objeto_generico){
    int total_objetos = this -> cant_objetos;
    Objeto_generico** todos_los_objetos = new Objeto_generico*[total_objetos + 1];

    //Copio los objetos que tiene el vector viejo
    for (int i = 0; i < total_objetos; i++)
        todos_los_objetos[i] = this->objetos[i];
    todos_los_objetos[total_objetos] = objeto_generico;
    
    if (this -> cant_objetos != 0)
        delete [] this->objetos;

    this -> objetos = todos_los_objetos;
    this -> cant_objetos++;
}

int Lector::devolver_cantidad_objetos(){
    return this -> cant_objetos;
}

Objeto_generico** Lector::devolver_cola_creacion(){
    return this -> objetos;
}

Lector::~Lector() {
    int cant_objetos = this -> cant_objetos;

    for (int i = 0; i < cant_objetos; i++){
        delete this -> objetos[i];
        this -> cant_objetos--;
    }

    delete[] this -> objetos;
    this -> objetos = nullptr;
}
