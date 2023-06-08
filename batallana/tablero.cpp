//
// Created bfilas Exequiel on 6/5/2023.
//

#include "tablero.h"
Tablero::Tablero() {

}
void Tablero ::mostrar()
{
       /* for(int i=0; i<filas; i++)
        {
            for(int j=0; j<columnas; j++)
            {
                matriz[i][j] = ' ';
            }
        }
        matriz[0][2]='x';
        char num = '0';
        for(int i=6; i<columnas; i+=4)
        {
            matriz[0][i] = num++;
        }
        char val= 'A';

        for(int i=2; i<filas; i+=2)
        {
            matriz[i][2] = val++;
        }

        for(int i=0; i<filas; i++)
        {
            if(i > 0 && i%2==1)
            {
                for(int j=0; j<columnas; j++)
                {
                    matriz[i][j] = '-';
                }
            }
            for(int j=0; j<columnas; j+=4)
            {
                matriz[i][j] = '|';
            }
        }*/
    cout<<"La matriz es de [9] columnas por [9] filas"<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j]=0;

            cout << matriz[i][j];
        }
        cout << endl;
    }



}


/*
bool Tablero:: sePuedeColocarBarco(int fila, int columna, int orientacion, int tamano){
    for (int i = 0; i < tamano; i++) {
        if ((orientacion == 0 && columna + i >= columnas) || (orientacion == 1 && fila + i >= filas) ||
            tablero[fila + (orientacion * i)][columna + ((1 - orientacion) * i)] != 0) {
            return false;
        }
    }
    return true;
}
void Tablero::ingresarBarcos() {
    int numBarcos = 7;
    int barcosRestantes[4] = {1, 3, 2, 1};
    int tamaniosBarcos[4] = {4, 3, 3, 2};

    while (numBarcos > 0) {
        int fila, columna;
        cout << "Ingrese la posición inicial (fila columna) del barco de tamaño " << tamaniosBarcos[numBarcos - 1] << ": ";
        cin >> fila >> columna;

        int orientacion;
        cout << "Ingrese la orientación del barco (0: horizontal, 1: vertical): ";
        cin >> orientacion;

        int tamano = tamaniosBarcos[numBarcos - 1];

        // Ver si se puede colocar el barco en las coordenadas
        if (sePuedeColocarBarco(fila, columna, orientacion, tamano)) {
            for (int i = 0; i < tamano; i++) {
                tablero[fila + (orientacion * i)][columna + ((1 - orientacion) * i)] = 1;
            }

            barcosRestantes[numBarcos - 1]--;
            if (barcosRestantes[numBarcos - 1] == 0) {
                numBarcos--;
            }
        }
        else {
            cout << "No se puede colocar el barco en esa posición. Intente nuevamente." << endl;
        }
    }
}*/
