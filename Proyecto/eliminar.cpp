#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>
#include "eliminar.h"

using namespace std;

void eliminar :: EliminarRecluso(){

 system ("cls");

        string codigo, edad, ced;
        string  nombre, ape, tiempo, celda ;
        string code;
      

        ifstream leer ;

        leer.open ("Ingreso_Recluso. txt", ios :: in);

        ofstream mod ("modificar_Recluso.txt", ios :: out );

        if (leer.is_open())
        {
            cout << " Ingrese el codigo del recluso a eliminar" << endl;
            cin >> code;
            leer >> codigo ;

            while (!leer.eof()) 
            {
            leer >> celda;
            leer >> nombre;
            leer >> ape;
            leer >> ced;
            leer >> edad;
            leer >> tiempo;
         

                if (codigo == code)
                {
                   cout <<" Recluso Eliminado del Sistema " << endl;
                   Sleep (1500);
                }else {
                    mod << codigo <<" " << celda << " " << nombre <<" " << ape <<" " << ced <<" " << edad << " " << tiempo << " " <<"\n " ;
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
