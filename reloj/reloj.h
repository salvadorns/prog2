//
// Created by Exequiel on 4/20/2023.
//

#ifndef RELOJ_RELOJ_H
#define RELOJ_RELOJ_H


class reloj {
int seg,m,h;
int seg2,m2,h2;
int t, al;

public:
    reloj();
    reloj(int hora,int minutos,int segundos);
    void alarma();
    void tiempo ();
    int gett ();
    int getal ();

    void setseg (int segundos);
    void setm (int minutos);
    void seth (int hora);

    void setseg2 (int segundos2);
    void setm2 (int minutos2);
    void seth2 (int hora2);
    void operator++ (int);
    int geth();
    int getm();
    int gets();

};


#endif //RELOJ_RELOJ_H
