#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h> 
#include <vector>

using namespace std;

extern void agregarproducto(string nombre , int codigo, double precio);

void reclusos( int opcion){

    int codigo ;
    string nombre;

    switch (opcion)
    {
    case 1:{
        cout << " ******* INGRESAR ******** " << endl; 
        cout << " N° Codigo Recluso : " << endl ;
        cin >> codigo ;
        cout << " Nombre y Apellido del Recluso :  " << endl ;
        cin >> nombre ;
        cout << " Ingrese edad: " << endl;
        cin >> edad;
        }
        break;

    case 2: {


    }
    
    default:
        break;
    }




}