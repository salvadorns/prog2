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
    tablero* tablero;

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
