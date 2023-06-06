//
// Created by Exequiel on 6/5/2023.
//

#ifndef BATALLANA_TABLERO_H
#define BATALLANA_TABLERO_H


#include <iostream>
using namespace std;

class tablero
{
private:
    int l;
    int x=45, y=16;
    int recibido[100];
    char matriz[16][45]; //Esta Matriz esta invertida su x e y
    void pintar(int,int);
    bool Flota[10][7]={false}; //esta es una matriz espejo que nos va a indicar donde estan los barcos
    void pintar(int x, int y,char vr);
    void ponerBarco(int);


public:
    tablero();
    void PintarTablero();
    void Recibir(int x, int y);
    void crearMatriz();
    void crearFlota();
    bool hayBarco(int x, int y);
};



#endif //BATALLANA_TABLERO_H
