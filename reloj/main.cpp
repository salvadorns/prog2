#include <iostream>
#include "reloj.h"
using namespace  std;

int main() {
    reloj r(0,0,0);
    int horas2,minuto2,segundo2;
cout<<"Ingrese la hora para la alarma"<<endl;
cin>>horas2;
cout<<"Ingrese los minutos para la alarma"<<endl;
cin>>minuto2;
cout<<"Ingrese los segundos para la alarma"<<endl;
cin>>segundo2;
r.seth2 (horas2);
r.setm2(minuto2);
r.setseg2(segundo2);
while(true){

    r++;
    cout<<r.geth()<<":"<<r.getm()<<":"<<r.gets()<<endl;


    r.alarma();
    for (int i = 0; i <=1000000 ; ++i) {

    }
}
}
