//
// Created by Exequiel on 5/18/2023.
//

#include "jugador.h"
#include <iostream>

using namespace std;
//////////////sub clase persona/////////
persona :: persona(){
    nom = " ";
}
persona :: persona (string nombre){
    nom=nombre;
}
void persona ::setn(string nombre) {
    nom = nombre;
}
string persona::getn() {
    return nom;
}

//////// clase jugador//////////////////
jugador :: jugador() {
}
jugador::jugador(string ,int filas,int columnas) {

        this->filas = filas;
        this->columnas = columnas;

        // Reservar memoria para el tablero
        tablero = new int*[filas];
        for (int i = 0; i < filas; i++) {
            tablero[i] = new int[columnas];
            for (int j = 0; j < columnas; j++) {
                tablero[i][j] = 0; // 0 indica celda vacía
            }
        }
    }

jugador::~jugador() {
    for (int i = 0; i < filas; i++) {
        delete[] tablero[i];
    }
    delete[] tablero;
}
bool jugador:: sePuedeColocarBarco(int fila, int columna, int orientacion, int tamano){
    for (int i = 0; i < tamano; i++) {
        if ((orientacion == 0 && columna + i >= columnas) || (orientacion == 1 && fila + i >= filas) ||
            tablero[fila + (orientacion * i)][columna + ((1 - orientacion) * i)] != 0) {

            return false;
        }
    }
    return true;

}
void jugador::colocarBarcos() {

    int numBarcos = 7;
    int barcosRestantes[7] = {1, 1, 1, 1, 1, 1, 1};
    int tamaniosBarcos[7] = {1, 2, 2, 3, 3, 3, 4};

    while (numBarcos > 0) {
        cout<<numBarcos<<endl;
        cout<<barcosRestantes[numBarcos - 1]<<endl;
        int fila, columna;
        cout << "Ingrese la posicion inicial (fila columna) del barco de tamano " << tamaniosBarcos[numBarcos - 1] << ": ";
        cin >> fila >> columna;

        int orientacion;
        cout << "Ingrese la orientacion del barco (0: horizontal, 1: vertical): ";
        cin >> orientacion;

        int tamano = tamaniosBarcos[numBarcos - 1];

        // Verificar si se puede colocar el barco en las coordenadas
        if (sePuedeColocarBarco(fila, columna, orientacion, tamano)) {
            for (int i = 0; i < tamano; i++) {


                if (orientacion == 0) {
                    tablero[fila][columna + i] = 1; // 1 indica barco
                } else {
                    tablero[fila + i][columna] = 1; // 1 indica barco
                }

            }

            barcosRestantes[numBarcos - 1]--;
            if (barcosRestantes[numBarcos - 1] == 0) {
                numBarcos--;
            }
            mostrarTablero(); // Mostrar el tablero actualizado después de colocar cada barco
        } else {
            cout << "No se puede colocar el barco en esa posición. Intente nuevamente." << endl;
        }
    }
}




void jugador::mostrarTablero() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}



