#include <iostream>
#include<fstream>
#include <windows.h>
#include <cctype>
#include "ingresar.h"
#include "visualizar.h"
#include "buscar.h"
#include "menu.h"
#include "modificar.h"
#include "eliminar.h"



using namespace std;

void Menu:: menu (){

    bool salir = false;

    while(salir == false) {
        

        int opcion = 0;

         cout << "    Menu Principal " << endl ;
        cout << " 1. Ingresar Recluso " << endl ;
        cout << " 2. Visualizar Recluso " << endl ;
        cout << " 3. Buscar Recluso  " << endl ;
        cout << " 4. Modificar Reclusos " << endl ;
        cout << " 5. Eliminar Reclusos " << endl ;
        cout << " 6. Salir del sistema  " << endl ;
        cout << " Ingrese la opcion a realizar " << endl ;
        cin >> opcion;

        ofstream ingreso ;
        visualizar ver ;
        buscar bsc ;
        modificar mod;
        eliminar eli;



        switch (opcion)
        {

        case 1:
           ingresarreclusos ();
            break;
        case 2: 
           ver.verRecluso();
            break;
        case 3: 
           bsc.buscarRecluso();
            break;
        case 4: 
            mod.ModificarRecluso();
           ;
        case 5: {
            eli.EliminarRecluso();
            
        }
          
            break;
        case 6:
            salir = true;
        default:
            break;
        }

        system("cls");

    }

}

