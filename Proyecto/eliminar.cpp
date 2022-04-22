#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>
#include "eliminar.h"

using namespace std;

void eliminar :: EliminarRecluso(){

 system ("cls");

        string codigo, edad, ced;
        string  nombre, ape, tiempo, a;
        string codmod;
        string nombremod, apemod ;
        string edadmod, tiempomod, amod ;
        string cedmod ;

        ifstream leer ;

        leer.open ("Ingreso_Recluso. txt", ios :: in);

        ofstream mod ("modificar_Recluso.txt", ios :: out );
        if (leer.is_open())
        {
            cout << " Ingrese el codigo del recluso a eliminar" << endl;
            cin >> codmod;
            leer >> codigo ;

            while (!leer.eof()) 
            {
            leer >> nombre;
            leer >> ape;
            leer >> ced;
            leer >> edad;
            leer >> tiempo;
            leer >> a;

                if (codigo == codmod)
                {
                   cout <<" Recluso Eliminado del Sistema " << endl;
                   Sleep (1500);
                }else {
                    mod << codigo <<" " << nombre <<" " << ape <<" " << ced <<" " << edad << " " << tiempo << " " << a<<"\n " ;
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
}
