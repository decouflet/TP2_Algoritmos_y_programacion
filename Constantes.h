//
// Created by agustin on 4/6/21.
//

#ifndef TP2_ALGO2_CONSTANTES_H
#define TP2_ALGO2_CONSTANTES_H

#include <string>
using namespace std;

const string HUMANO = "humano";
const string ZOMBI = "zombi";
const string VAMPIRO = "vampiro";
const string VAMPIRELLA = "Vampirella";
const string NOSFERATU = "Nosferatu";
const string HUMANOCV = "humanoCV";
const string AGUABENDITA = "agua";
const string CRUZ = "cruz";
const string ESTACA = "estaca";
const string ESCOPETA = "escopeta";
const string BALA = "bala";
const string VANESA = "Vanesa";
const int CANTIDAD_OBJETOS_TOTAL = 12;
const int CANTIDAD_OBJETOS_PARCIAL = 8; //No cuenta nosferatu, vampirella, vanesa, ni humanocv
const string NO = "NO";
const string NE = "NE";
const string SO = "SO";
const string SE = "SE";
const string ARCHIVO = "estado.txt";

enum tipo_objetos_parcial {Humano_enum, Zombi_enum, Vampiro_enum, Agua_bendita_enum, Cruz_enum, Estaca_enum, Escopeta_enum, Bala_enum};

enum tipo_objetos_total {Humano_enum_total, Zombi_enum_total, Vampiro_enum_total, Vampirella_enum_total, Vanesa_enum_total, Nosferatu_enum_total,
                        Humanocv_enum_total, Agua_bendita_enum_total, Cruz_enum_total, Estaca_enum_total, Escopeta_enum_total, Bala_enum_total};

enum cuadrantes {Noroeste, Noreste, Suroeste, Sureste};

#endif //TP2_ALGO2_CONSTANTES_H
