//
// Created by Exequiel on 5/18/2023.
//

#include "jugador.h"
#include <iostream>

using namespace std;

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


