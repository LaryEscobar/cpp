#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>
#include "visualizar.h"


using namespace std;

void  visualizar:: verRecluso(){
    
    
    system ("cls");

    string codigo, edad, ced, celda ;
    string  nombre, ape, tiempo;

    ifstream Leer ;

    Leer.open ("Ingreso_Recluso. txt", ios :: in);
    if (Leer.is_open()){


        cout << "---------- Reclusos Registrados-------------" << endl << endl;

        Leer >> codigo;

        while (!Leer.eof())
        {
            Leer >> celda;
            Leer >> nombre;
            Leer >> ape;
            Leer >> ced;
            Leer >> edad;
            Leer >> tiempo;

            cout <<" Codigo --------------------- : " << codigo << endl;
            cout <<" Numero de celda ------------ : " << celda << endl;
            cout <<" Primer Nombre -------------- : " << nombre << endl;
            cout <<" Primer Apellido  ----------- : " << ape << endl;
            cout <<" Numero de cedula  -----------: " << ced << endl;
            cout <<" Edad ---------.............. : " << edad << endl;
            cout <<" Años de sentencia -----------: " << tiempo << endl;
            cout <<" --------------------------------------------------------- : " << endl;


            Leer >> codigo;  
        }

        Leer.close ();
    } else cout <<" Error " << endl;
    system ("pause");
}