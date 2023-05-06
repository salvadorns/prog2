//
// Created by Exequiel on 5/2/2023.
//

#ifndef DATOS_HERENCIA_DATOS_H
#define DATOS_HERENCIA_DATOS_H

#include <string>
#include <iostream>
using namespace std;
class datos {
    string nom,d,ape,ma;

public:
    datos();
    datos (string nombre,string dni,string apellido,string mail);
    void setnom (string nombre);
    void setd (string dni);
    void seta(string apellido);
    void setm (string mail);
    string getnom();
    string getd();
    string geta();
    string getm();

};
class materia :public datos{
    float n;
    string co,nam;
public:
    materia();
    materia (float nota,string code,string name);
    void setn(float nota);
    void setco(string code);
    float getn();
    string getco();
    string getname();
    void setname(string name);


};
class profesor : public datos{
    string tit;
    materia materiass[10];


public:
    profesor();
    profesor(string titulo);
    void sett(string titulo);
    string gett();
    void agregar_materiap(const std::string& materia);
    void mostrar_materiasp();

};
class alumno : public datos{
    string c;
    int e;
    materia materias[10];//utilizar un arreglo de objetos de tipo materia dentro de la clase alumno
    float notas[10];
    int nummat;
    float nott;
public:
    alumno();
    alumno(string carrera,int edad);
    void sete(int edad);
    void setc(string carrera);
    int gete();
    string getc();
    void agregar_materia(const std::string& materia);
    void mostrar_materias();
    int getnummat();
    void setnott(int n,float nota);
    float getnott(int nummat);
};



#endif //DATOS_HERENCIA_DATOS_H
