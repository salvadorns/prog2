//*Realizar un programa que permita gestionar los datos de docentes, alumnos y sus inscripciones en
//materia de una Universidad.
//Datos Docentes: DNI, Apellido, Nombres, mail, título
//        Datos Alumnos: DNI, Apellido, Nombres, Carrera, mail, edad
//        Materia: Código, Nombre, Nota
//        Acciones a desarrollar
//Docentes
//        Anotar en Materia
//Consulta de las materias que enseña
//Modificación de datos - Consulta
//        Alumnos
//Modificación de datos - Consulta
//        Inscripción en materia - Carga de Nota
//        Sistema de Gestión:
//1. Alta (Alumnos y Docentes)
//2. Inscribir a materia (Alumnos)
//3. Anotar titular (Docente)
//4. Cargar Nota (Alumnos)
//5. Modificar Datos (Alumnos y Docentes)
//6. Salir*/

#include <iostream>
# include <string>
#include "datos.h"

using namespace std;
int main() {
    string nom,ape,dni,mail,car;
    string nom2,ape2,dni2,mail2,car2;
    int edad;
    int edad2;
    int x,q,t=0,p=0;
    int num =-1;
    int cant,cont=0;
    string mat;
    string ti;
    string ti2;
    datos d;
    materia* m = new materia [10];
    alumno* al = new alumno[10];
    profesor* pro = new profesor [10];


    do {
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "1. Alta (Alumnos y Docentes)" << endl;
        cout << "2. Inscribir a materia (Alumnos)" << endl;
        cout << "3. Anotar titular (Docente)" << endl;
        cout << "4. Cargar Nota (Alumnos)" << endl;
        cout << "5. Modificar Datos (Alumnos y Docentes)" << endl;
        cout<<  "6.Mostras datos(Alumnos o profesor)"<<endl;
        cout << "7. Salir" << endl;
        cin >> x;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

        switch (x) {
            case 1: {
                cout << "Quiere dar de alta un profesor (1) o un alumno (2)" << endl;
                cin >> q;
                if (q == 1) {
                    cout << "PROFESOR" << endl;
                    cout << "Ingrese el nommbre" << endl;
                    cin >> nom;
                    pro[t].setnom(nom);
                    cout << "Ingrese el apellido" << endl;
                    cin.ignore();
                    getline(cin,ape);
                    pro[t].seta(ape);
                    cout << "Ingrese el dni" << endl;
                    cin >> dni;
                    pro[t].setd(dni);
                    cout << "Ingrese el mail" << endl;
                    cin >> mail;
                    pro[t].setm(mail);
                    cout << "Titulo del profesor " << endl;
                    cin.ignore();
                    getline(cin, ti);
                    pro[t].sett(ti);
                } else if (q == 2) {
                    cout << "AlUMNO" << endl;
                    cout << "Ingrese el nommbre" << endl;
                    cin >> nom;
                    al[p].setnom(nom);
                    cout << "Ingrese el apellido" << endl;
                    cin.ignore();
                    getline(cin, ape);
                    al[p].seta(ape);
                    cout << "Ingrese la edad" << endl;
                    cin >> edad;
                    al[p].sete(edad);
                    cout << "Ingrese el dni" << endl;
                    cin >> dni;
                    al[p].setd(dni);
                    cout << "Ingrese el mail" << endl;
                    cin >> mail;
                    al[p].setm(mail);
                    cout << "Ingrese la carrera" << endl;
                    cin.ignore();
                    getline(cin, car);
                    al[p].setc(car);
                } else {
                    cout << "La opcion ingresada no es correcta" << endl;
                }
                p++;
                t++;
                break;
            }
            case 2: {
                cout << "Ingrese el dni del alumno" << endl;
                cin >> dni;

                for (int i = 0; i < 10; i++) {
                    if (dni == al[i].getd()) {
                        num = i;
                        break;
                    }

                }
                if (num == -1) {
                    cout << "el Dni no existe o no se encuentra en nuestra base de datos" << endl;
                    break;
                }
                cout << "En cuantas materias lo quiere inscribir" << endl;
                cin >> cant;
                while (cont != cant) {
                    cout << "En que materia le gustaria inscribir a alumno" << endl;
                    cin >> mat;
                    m[num].setname(mat);
                    cout << "Se ha inscripto a la materia " << m[num].getname() << endl;
                    // guardar la materia en el arreglo de materias del alumno
                    al[num].agregar_materia(mat);

                    cont++;
                }
                break;
            }
            case 3: {
                int cant1 = 0;
                cout << "Ingrese el dni del profesor" << endl;
                cin >> dni;
                for (int i = 0; i < 10; i++) {
                    if (pro[i].getd() == dni) {
                        num = i;
                        break;
                    }

                }
                if (num == -1) {
                    cout << "El dni ingresado no se encuentra en nuestra base de datos" << endl;
                    break;
                }
                cout << "cuantas materias sera titular el profesor" << endl;
                cin >> cant1;
                while (cant1 != cont) {
                    string mat1;
                    cout << "En que materia va ser titualar" << endl;
                    cin >> mat1;
                    m[num].setname(mat1);
                    cout << "El profesor es titualar de la materia: " << m[num].getname() << endl;
                    pro[num].agregar_materiap(mat);

                    cont++;
                }
                break;
            }
            case 4: {
                float nott;
                cout << "Ingrese el dni del alumno" << endl;
                cin >> dni;

                for (int i = 0; i < cant; i++) {
                    if (al[i].getd() == dni) {
                        num = i;
                        break;
                    }
                }
                if (num == -1) {
                    cout << "El dni ingresado no se encuentra en nuestra base de datos" << endl;
                    break;
                }
                al[num].mostrar_materias();
                for (int i = 0; i < al[num].getnummat(); i++) {
                    cout << " Que nota obtuvo en la  materia: " << i + 1 << endl;
                    cin >> nott;
                    al[num].setnott(i, nott);// guardar la nota en el arreglo notas

                }
                al[num].mostrar_materias();
                for (int j = 0; j < al[num].getnummat(); ++j) {
                    cout << "El alumno tiene una nota " << al[num].getnott(j) << " en la materia " << j + 1 << endl;
                }

                break;
            }
            case 5: {
                int o;
                cout << "Quiere modificar los datos de un profesor (1) o un alumno (2)" << endl;
                cin >> q;
                if (q == 1) {
                    cout << "Ingrese el dni del profesor" << endl;
                    cin >> dni;
                    for (int i = 0; i < 10; i++) {
                        if (pro[i].getd() == dni) {
                            num = i;
                            break;
                        }
                    }
                    if (num == -1) {
                        cout << "El dni ingresado no se encuentra en nuestra base de datos" << endl;
                    break;
                    }
                    do {
                        cout << "(1). Cambiar nombre" << endl;
                        cout << "(2). Cambiar apellido" << endl;
                        cout << "(3). Cambiar mail" << endl;
                        cout << "(4). Cambiar titulo" << endl;
                        cout << "(5). Salir" << endl;
                        cin >> o;

                        switch (o) {
                            case 1: {
                                cout << "Ingrese el nuevo nombre" << endl;
                                cin >> nom2;
                                pro[num].setnom(nom2);
                                break;
                            }
                            case 2: {
                                cout << "Ingrese el nuevo nombre" << endl;
                                cin >> ape2;
                                pro[num].seta(ape2);
                                break;
                            }
                            case 3: {
                                cout << "Ingrese el nuevo mail" << endl;
                                cin >> mail2;
                                pro[num].setm(mail2);
                                break;
                            }
                            case 4: {
                                cout << "Ingrese el nuevo titulo" << endl;
                                cin >> ti2;
                                pro[num].sett(ti2);
                                break;
                            }
                            case 5:
                                break;
                        }


                    } while (o != 5);

                } else if (q == 2) {
                    cout << "Ingrese el dni del alumno" << endl;
                    cin >> dni;
                    for (int i = 0; i < 10; i++) {
                        if (al[i].getd() == dni) {
                            num = i;
                            break;
                        }
                        if(num == -1){
                            cout<<"El dni no se encuentra en nuestra base de datos"<<endl;
                            break;
                        }
                    }
                    do {
                        cout << "(1). Cambiar nombre" << endl;
                        cout << "(2). Cambiar apellido" << endl;
                        cout << "(3). Cambiar mail" << endl;
                        cout << "(4). Cambiar edad" << endl;
                        cout << "(5). cambiar carrera" << endl;
                        cout << "(6). Salir" << endl;
                        cin >> o;

                        switch (o) {
                            case 1: {
                                cout << "Ingrese el nuevo nombre" << endl;
                                cin >> nom2;
                                al[num].setnom(nom2);
                                break;
                            }
                            case 2: {
                                cout << "Ingrese el nuevo nombre" << endl;
                                cin >> ape2;
                                al[num].seta(ape2);
                                break;
                            }
                            case 3: {
                                cout << "Ingrese el nuevo mail" << endl;
                                cin >> mail2;
                                al[num].setm(mail2);
                                break;
                            }
                            case 4: {
                                cout << "Ingrese la edad correspondiente" << endl;
                                cin >> edad2;
                                al[num].sete(edad2);
                                break;
                            }
                            case 5: {
                                cout << "Igrese la carrera que estudia" << endl;
                                cin >> car2;
                                al[num].setc(car2);
                                break;
                            }
                            case 6:
                                break;
                        }


                    } while (o != 6);

                } else {
                    cout << "La opcion ingresasa no es correcta" << endl;
                }
                break;
            }
            case 6: {
                cout << "Quiere consultar los datos un profesor (1) o un alumno (2)" << endl;
                cin >> q;
                if (q == 1) {
                    cout << "Ingrese el dni del profesor" << endl;
                    cin >> dni;
                    for (int i = 0; i < 10; i++) {
                        if (pro[i].getd() == dni) {
                            num = i;
                            break;
                        }
                    }
                    if (num == -1) {
                        cout << "El dni ingresado no se encuentra en nuestra base de datos" << endl;
                    break;
                    }
                    cout << "Los datos del profesor son: " << endl;
                    cout << "Nombre--> " << pro[num].getnom() << endl;
                    cout << "Apellido--> " << pro[num].geta() << endl;
                    cout << "mail--> "<<pro[num].getm()<<endl;
                    cout<<"Titulo--> "<<pro[num].gett()<<endl;
                    pro[num].mostrar_materiasp();
                }else if (q == 2) {
                    cout << "Ingrese el dni del alumno" << endl;
                    cin >> dni;
                    for (int i = 0; i < 10; i++) {
                        if (al[i].getd() == dni) {
                            num = i;
                            break;
                        }
                    }
                    if (num == -1) {
                        cout << "El dni ingresado no se encuentra en nuestra base de datos" << endl;
                    break;
                    }
                    cout << "Los datos del alumno son: " << endl;
                    cout << "Nombre--> " << al[num].getnom() << endl;
                    cout << "Apellido--> " << al[num].geta() << endl;
                    cout<<  "Edad--> "<<al[num].gete()<<endl;
                    cout << "mail--> "<<al[num].getm()<<endl;
                    cout<<  "Carrera--> "<<al[num].getc()<<endl;
                    al[num].mostrar_materias();
                    for (int j = 0; j < al[num].getnummat(); ++j) {
                        cout << "El alumno tiene una nota " << al[num].getnott(j) << " en la materia " << j + 1 << endl;
                    }


                }else {
            cout << "La opcion ingresada no es correcta" << endl;
        }
        break;
            }
        case 7:
            break;
        }
    }while (x != 7);

delete[] m;
delete[] al;
delete[] pro;
}