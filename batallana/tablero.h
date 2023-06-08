//
// Created by Exequiel on 6/5/2023.
//

#ifndef BATALLANA_TABLERO_H
#define BATALLANA_TABLERO_H


#include <iostream>
using namespace std;

class Tablero {
    static const int columnas = 9;
    static const int filas = 9;
    int matriz[filas][columnas];
    int tablero[filas][columnas];

public:
    Tablero();

    void mostrar();
    void ingresarBarcos();
    bool sePuedeColocarBarco(int fila, int columna, int orientacion, int tamano);


};

#endif //BATALLANA_TABLERO_H
