//
// Created by Exequiel on 4/20/2023.
//
#include <iostream>
#include "reloj.h"
using namespace std;

void reloj :: setseg (int segundos){
    seg= segundos;
}
void reloj ::setm(int minutos) {
    m= minutos;
}
void reloj :: seth (int hora){
    h=hora;
}
void reloj :: setseg2 (int segundos2){
    seg2= segundos2;
}
void reloj ::setm2(int minutos2) {
    m2= minutos2;
}
void reloj :: seth2 (int hora2){
    h2=hora2;
}
int reloj :: gett (){
    return t;
}
int reloj ::getal (){
    return al;
}
void reloj :: tiempo(){
    seg++;
    //cout<<h<<":"<<m<<":"<<seg<<endl;
    if (seg ==60){
        m++;
        seg = 0;
        if (m == 60 ){
            h++;
            m=0;
            if (h ==24){
                h=0;
                m=0;
                seg = 0;
            }

        }
    }
}
void reloj::operator++(int){
    seg++;
    //cout<<h<<":"<<m<<":"<<seg<<endl;
    if (seg ==60){
        m++;
        seg = 0;
        if (m == 60 ){
            h++;
            m=0;
            if (h ==24){
                h=0;
                m=0;
                seg = 0;
            }

        }
    }
}
void reloj :: alarma(){
    if (h==h2 && m==m2 && seg==seg2){
        cout<<"ALARMA-ALARMA-ALARMA-ALARMA"<<endl;
    }
}

reloj::reloj(int hora, int minutos, int segundos) {
    h=hora;
    m=minutos;
    seg=segundos;

}

int reloj::geth() {
    return h;
}
int reloj ::getm() {
    return m;
}
int reloj :: gets(){
    return seg;
}
