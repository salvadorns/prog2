//
// Created by Exequiel on 5/30/2023.
//
#include <iostream>
using namespace std;
#include "tablero.cpp"
#include <string>


class Jugador
{
private:
    string nombre;
    string nom;
    Tablero* tablero;
    int puntaje;
public:
    Jugador(string,Tablero*);
    void setnom(string);
    string getnom();
    void PintarTablero();
    void Recibir(int,int);
    void Atacar(Jugador,int,int);
    bool hayBarco(int,int);
};

Jugador::Jugador(string n, Tablero* t)
{
    nombre=n;
    tablero=t;
}
void Jugador :: setnom(string nombre){
    nom = nombre;
}
string Jugador :: getnom(){
    return nom;
}
void Jugador::PintarTablero(){
    string Texto="Tabla De ";
    Texto.append(nombre);
    int z = Texto.length();
    z=(44-z)/2;

    cout<<"+-------------------------------------------+"<<endl;
    if (z%2==0)
    {
        cout<<"|"<<string(z,' ')<<Texto<<string(z,' ')<<"|"<<endl;
    }else
    {
        cout<<"|"<<string(z,' ')<<Texto<<string(z-1,' ')<<"|"<<endl;
    }
    cout<<"+-------------------------------------------+"<<endl;

    tablero->PintarTablero();
}


void Jugador::Recibir(int x,int y){

    tablero->Recibir(x,y);

    tablero->PintarTablero();
}


void Jugador::Atacar(Jugador enemigo,int x,int y){
    cout<<"Atacando a "<<"El enemigo"<<endl;
    enemigo.Recibir(x,y);
}
bool Jugador::hayBarco(int x, int y){
    return tablero-> hayBarco(x,y);
}