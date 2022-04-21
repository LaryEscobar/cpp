#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>

using namespace std;

void verRecluso(ifstream & Leer ){//parametro y recibimiento por referencia 
    
    system ("cls");

    string codigo, edad, ced;
    string  nombre, ape, tiempo ;

    ifstream Leer ;


    Leer.open ("Ingreso_Recluso.txt", ios :: in);
    if (Leer.is_open()){

        cout << "---------- Reclusos Registrados-------------" << endl << endl;

        Leer >> codigo;

        while (!Leer.eof())
        {
            Leer >> nombre;
            Leer >> ape;
            Leer >> ced;
            Leer >> edad;
            Leer >> tiempo;

            cout <<" Codigo --------- : " << codigo << endl;
            cout <<" Nombre y Apellido  --------- : " << nombre << ape << endl;
            cout <<" N° de cedula  --------- : " << ced << endl;
            cout <<" Edad --------- : " << edad << endl;
            cout <<" Tiempo de sentencia --------- : " << tiempo << endl;
            cout <<" --------------------------- : " << endl;


            Leer >> codigo;  
        }

        Leer.close ();
    } else cout <<" Error " << endl;
    system ("pause");
}