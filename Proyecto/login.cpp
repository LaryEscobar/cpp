#include <iostream>

using namespace	 std;

bool login (){


    int contra ;

    string usuario = "" ;
  
    int intentos = 0;

    while (intentos <= 3)

    {
        system ("cls");

        if (intentos == 3)
        {
            cout << " Sistema Bloqueado, Reinice el Sistema " << endl;
            return false;
        }

        cout << " --------------Bienvenido al Sistema de Inicio--------------" << endl;
        cout << endl;
        cout << "\t \t \t Ingrese sus Datos" << endl;
        cout << "Ingrese su Usuario:" << endl ;
        cin >> usuario;
        cout << "Ingrese Clave de Seguridad: " << endl;
        cin >> contra;
        

        if (usuario == "admin" && contra == 2022)
        {
           return true;
            system ("cls");
        }  else {
            cout << " Datos Incorrectos " << endl;
            system("pause");
        }

        intentos++;
    }
   return false ;
}
