//
// Created by Exequiel on 5/2/2023.
//

#include "datos.h"
#include <string>
#include <iostream>
using namespace std;
datos :: datos(){
    nom = "";
    d = "";
    ape = "";
    ma = "";
}
datos ::datos(string nombre, string dni, string apellido, string mail) {
    nom = nombre;
    d = dni;
    ape = apellido;
    ma = mail;
}

void datos::setnom(string nombre) {
    nom = nombre;
}
void datos::setd(string dni) {
    d = dni;
}
void datos::seta(string apellido) {
    ape = apellido;
}
void datos :: setm(string mail){
    ma = mail;
}

string datos :: getnom() {
    return nom;
}
string datos :: getd() {
    return d;
}
string datos :: geta(){
    return ape;
}
string datos :: getm() {
    return ma;
}

profesor :: profesor (){
    tit = "";
}
profesor ::profesor(string titulo) {
    tit = titulo;
}

void profesor::sett(string titulo) {
    tit = titulo;

}
string profesor::gett() {
    return tit;
}
void profesor :: agregar_materiap(const std::string& materia){
    for (int i = 0; i < 10; i++) {
        if (materiass[i].getname() == "") { // materia en esta posición no está inicializada
            materiass[i].setname(materia); // guardar la materia aquí
            break;
        }
    }
}
void profesor ::mostrar_materiasp() {
    for (int i = 0; i <10;i++) {
        if (materiass[i].getname() != "") {
            cout << "Materia " << i+1 << ": " << materiass[i].getname() << endl;
        }
    }
}

alumno :: alumno (){
    c  = "";
}
alumno :: alumno (string carrera,int edad){
    c = carrera;
    e = edad;
}

void alumno::sete(int edad) {
    e = edad;

}
void alumno::setc(string carrera) {
    c = carrera;

}
string alumno :: getc(){
    return c;
}
int alumno :: gete(){
    return e;
}

void alumno::mostrar_materias() {
    for (int i = 0; i <10;i++) {
        if (materias[i].getname() != "") {
            cout << "Materia " << i+1 << ": " << materias[i].getname() << endl;
        }
    }
    }

void alumno::agregar_materia(const std::string& materia) {//const std::string& es una referencia constante a un objeto de tipo std::string. Esto significa que materia es un parámetro de función que hace referencia a un objeto std::string que no se modificará dentro de la función agregar_materia().
    for (int i = 0; i < 10; i++) {
        if (materias[i].getname() == "") { //aca todavia no hay materia inicilaizada
            materias[i].setname(materia); // aca se gaurda la materia
            notas[i] = 0; // inicializar la nota en 0
            nummat++;
            break;
        }
    }
}
int alumno :: getnummat(){
    return nummat;
}
void alumno :: setnott(int n,float nota){
    notas[n]=nota;
}
float alumno :: getnott(int nummat){//El const se utiliza para indicar que un método o función no modificará el estado interno del objeto o variable al que se aplica.
    return notas[nummat];
}




materia :: materia(){
    co = ""; //Se puede poner como no
    nam = "";
}

materia ::materia(float nota, string code,string name) {
    n = nota;
    co = code;
    nam = name;
}

void materia::setn(float nota) {
    n = nota;

}
void materia :: setco(string code){
    co = code;
}
float materia :: getn(){
    return n;
}
string materia :: getco(){
    return co;
}
string materia :: getname(){
    return nam;
}
void materia :: setname(string name){
    nam = name;
}
