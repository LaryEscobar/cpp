#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>
#include "modificar.h"

using namespace std;

void modificar ::  ModificarRecluso(){

        system ("cls");

        string codigo, edad, ced, celda;
        string  nombre, ape, tiempo;
        string codmod;
        string nombremod, apemod, celdamod ;
        string edadmod, tiempomod;
        string cedmod ;

        ifstream leer ;

        leer.open ("Ingreso_Recluso. txt", ios :: in);

        ofstream mod ("modificar_Recluso.txt", ios :: out );

        if (leer.is_open())
        {
            cout << " Ingrese el codigo del recluso a modificar " << endl;
            cin >> codmod;
            leer >> codigo ;

            while (!leer.eof()) 
            {
            leer >> celda;
            leer >> nombre;
            leer >> ape;
            leer >> ced;
            leer >> edad;
            leer >> tiempo;

                if (codigo == codmod)
                {
                    cout <<" Modifique los datos " << endl;
                    cout <<" ------------------- " << endl;

                    cout << " Ingrese Numero de Celda: " << endl ;
                    cin.ignore();
                    cin >> celdamod;

                    cout << " Ingrese Primer Nombre del Recluso: " << endl ;
                    cin.ignore();
                    cin >> nombremod;

                    cout << " Ingrese  Primer Apellido del Recluso: " << endl ;
                    cin.ignore();
                    cin >> apemod;
                    

                    cout << " Ingrese Numero de cedula: " << endl;
                    cin.ignore();
                    cin>>cedmod;
                    
                    cout << " Ingrese Edad: " << endl ;
                    cin.ignore();
                    cin >> edadmod;
            
                    cout << " Ingrese Años de Sentencia en numeros: " << endl ;
                    cin.ignore();
                    cin >> tiempomod;

                    mod << codigo <<" " << celdamod << " " << nombremod << " " << apemod <<" " << cedmod << " " << edadmod << " " << tiempomod <<"\n " ;
                }else {
                    mod << codigo <<" " << celda << " " << nombre <<" " << ape <<" " << ced <<" " << edad << " " << tiempo <<"\n " ;
                }
                
                leer >> codigo ;
            }

            leer.close();
            mod.close();
            
        }else {
            cout <<" Error" << endl;
        }
        remove("Ingreso_Recluso. txt");
        rename("modificar_Recluso.txt", "Ingreso_Recluso. txt");
        system ("pause");
} 
