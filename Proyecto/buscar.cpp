#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>
#include "buscar.h"

using namespace std;





void buscar :: buscarRecluso(){ 
    system ("cls");

    ifstream leer;

    leer.open ("Ingreso_Recluso. txt", ios :: in);

    string codigo, edad, ced, celda;
    string  nombre, ape, tiempo;
    string cod2 ;


    bool encontrado = false ;
    cout << " Ingrese el codigo del recluso " << endl;
    cin >> cod2;

    leer >> codigo;

    while (!leer.eof() && !encontrado)
    {
            leer >> celda;
            leer >> nombre;
            leer >> ape;
            leer >> ced;
            leer >> edad;
            leer >> tiempo;
        
        if (codigo == cod2)
        {
            
            cout <<" Codigo --------------------- : " << codigo << endl;
            cout <<" Numero de Celda ------------ : " << celda << endl;
            cout <<" Primer Nombre -------------- : " << nombre << endl;
            cout <<" Primer Apellido  ----------- : " << ape << endl;
            cout <<" Numero de cedula  -----------: " << ced << endl;
            cout <<" Edad ---------.............. : " << edad << endl;
            cout <<" Años de sentencia -----------: " << tiempo << endl;
            cout <<" --------------------------------------------------------- : " << endl;;
            
            encontrado = true;
        }
        leer >> codigo;
    }
    leer.close();

    if (!encontrado)
    {
        cout <<" Registro inexistente " << endl;
    }
    system("pause");
}