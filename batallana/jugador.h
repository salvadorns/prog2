//
// Created by Exequiel on 5/18/2023.
//

#ifndef BATALLANA_JUGADOR_H
#define BATALLANA_JUGADOR_H
#include <iostream>
#include <string>
#include "tablero.h"
using namespace std;

class jugador {
    int filas = 9;
    int columnas = 9;
    int** tablero;
    Tablero t;

public:
    jugador();
    jugador(string ,int filas,int columnas);
    ~jugador();
    void mostrarTablero();
    void colocarBarcos();
    bool sePuedeColocarBarco(int fila, int columna, int orientacion, int tamano);

};
class persona :public jugador{
    string nom;

public:
    persona();
    persona (string nombre);
    void setn(string nombre);
    string getn();
};


#endif //BATALLANA_JUGADOR_H
