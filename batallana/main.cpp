#include <iostream>
#include "jugador.h"
#include "tablero.h"

using namespace std;

int main() {
    Tablero t;
    persona p;
    persona p2;
    //t.mostrar();
    string n1,n2;

        int filas = 9;
        int columnas = 9;
    cout << "\n BIENVENIDO A LA BATALLA NAVAL!" << endl;
    cout << "El jugador que alcance un puntaje de 10 sera el ganador" << endl;
    cout << "Para empezar a jugar, ingrese los nombres de los jugadores: " << endl;
    cout << "\nJugador 1: " << endl;
    cin >>n1;
    p.setn(n1) ;
    cout << "\n"
         << p.getn() << " Listo! \n"
         << endl;
    cout << "Jugador 2: " << endl;
    cin >> n2;
    p2.setn(n2);
    cout << "\n"
         << p2.getn() << " Listo!"<<endl;



  jugador j(p.getn(),filas, columnas); // objeto Jugador con filas y columnas seteadas
    cout<<"Jugador 1"<<p.getn()<<endl;

    j.colocarBarcos(); // Colocar los barcos en el tablero
    j.mostrarTablero(); // Mostrar el tablero con los barcos

    jugador j2(p2.getn(),filas,columnas); // arranca el objeto dos para el jugador con col y filas seteadas
    cout<<"AHORA: Jugador 2 "<<p2.getn()<<endl;

    j2.colocarBarcos();
    j2.mostrarTablero();

        return 0;
    }





//seteando los nombres y para que cada jugador tenga su tablero
