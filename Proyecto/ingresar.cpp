#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>

using namespace std;

bool verifica (string Cod ){

    ifstream leer ("Ingreso_Recluso. txt", ios :: in );

    string codigo, edad, ced;
    string  nombre, ape, tiempo ;

    leer >> codigo;

    while (!leer.eof())
    {
            leer >> ced ;
            leer >> nombre ;
            leer >> ape ;
            leer >> ced ;
            leer >> edad ;
            leer >> tiempo ;
        if (codigo == Cod){

            cout <<" Codigo existente" << endl;
            system ("pause");
            leer.close ();
            return false ;

        }
            leer >> codigo;
    }
    leer.close ();
    return true ;
}


void ingresarreclusos (){

    string codigo, edad, ced;
    string  nombre, ape, tiempo ;
    char op ;

    ofstream agg;


    agg. open ("Ingreso_Recluso. txt", ios :: out | ios :: app);

    do
    {
        system ("cls");

        cout << " \t \t Ingreso de Reclusos " << endl;
        cout << " -----------------------------" << endl ;

        cout << " Codigo del Recluso: " << endl ;
        cin.ignore();
        cin >> codigo;
        
        cout << " Primer Nombre y Primer Apellido del Recluso : " << endl ;
        cin.ignore();
        cin >> nombre >> ape;

        cout << " Ingrese N° de cedula " << endl;
        cin.ignore();
        cin>>ced;
		
        cout << " Edad : " << endl ;
        cin.ignore();
        cin >> edad;
  
        cout << " Tiempo de Sentencia : " << endl ;
        cin.ignore();
        cin >> tiempo;

         if (verifica (codigo))

        agg << codigo << " " << nombre << " " << ape << " " << ced <<" " << edad << " " << tiempo <<"\n " ;


        cout << " Desea seguir ingresando reclusos? s/n " << endl;
        cin >> op ;
        
    } while ((op == 'S') || (op == 's'));
    agg.close();
    
}
