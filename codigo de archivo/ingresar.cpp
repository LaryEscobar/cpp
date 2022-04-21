#include <iostream>
#include <fstream>
#include <windows.h>
#include <cctype>


using namespace std;

int menu (){

    system ("cls");
        int opcion ;

        cout << " Menu Principal " << endl ;
        cout << " 1. Ingresar Recluso " << endl ;
        cout << " 2. Visualizar Reclusos " << endl ;
        cout << " 3. Buscar Reclusos " << endl ;
        cout << " 4. Modificar Recluso  " << endl ;
        cout << " 5. Eliminar Recluso  " << endl ;
        cout << " 6. Salir del sistema  " << endl ;
        cout << " Ingrese la opcion a realizar " << endl ;
        cin >> opcion;
    return opcion ;    
}

bool verifica (string Cod ){

    ifstream leer ("recluso.txt", ios :: in );

    string cod ;
    string nombre;
    string edad;
    string ced;

    leer >> cod ;

    while (!leer.eof())
    {
            leer >> ced ;
            leer >> nombre ;
            leer >> edad ;
        if (cod == Cod){

            cout <<" Codigo existente" << endl;
            system ("pause");
            leer.close ();
            return false ;

        }
            leer >> cod;
    }
    leer.close ();
    return true ;
    

}

void agregar (ofstream & ag){

    system ("cls");

    string nombre;
    string edad;
    string ced;
    string cod ;

    ag.open ("recluso.txt", ios :: out | ios :: app);
    
    cout << " Ingrese codigo " << endl;
    cin >> cod;

    cout << " Primer nombre " << endl;
   cin >> nombre;
    
    cout << " Edad " << endl;
    cin >> edad;

    cout << " Ingrese cedula " << endl ; 
    cin >> ced;

    if (verifica (cod))

    ag << cod << " " << nombre <<" " << edad << " " << ced <<"\n " ;

    ag.close();


}

void verRecluso(ifstream & Leer){
    system ("cls");
    string nombre;
    string edad;
    string ced;
    string cod ;

    Leer.open ("recluso.txt", ios :: in);
    if (Leer.is_open()){

        cout << "---------- Reclusos Registrados-------------" << endl << endl;

        Leer >> cod;

        while (!Leer.eof())
        {
            Leer >> nombre;
            Leer >> edad;
            Leer >> ced;
            cout <<" Codigo --------- : " << cod << endl;
            cout <<" Nombre --------- : " << nombre << endl;
            cout <<" Edad --------- : " << edad << endl;
            cout <<" Cedula --------- : " << ced << endl;
            cout <<" --------------------------- : " << endl;


            Leer >> cod;  
        }

        Leer.close ();
    } else cout <<" Error " << endl;
    system ("pause");
}

void buscarRecluso(ifstream & leer){ //parametro y recibimiento por referencia 
    system ("cls");

    leer.open ("recluso.txt", ios :: in);

    string nombre;
    string edad;
    string ced;
    string cod , cod2 ;

    bool encontrado = false ;
    cout << " Ingrese el codigo del recluso " << endl;
    cin >> cod2;

    leer >> cod ;

    while (!leer.eof() && !encontrado)
    {
        leer >> nombre;
        leer >> edad;
        leer >> ced;
        if (cod == cod2)
        {
            cout <<" Codigo --------- : " << cod << endl;
            cout <<" Nombre --------- : " << nombre << endl;
            cout <<" Edad --------- : " << edad << endl;
            cout <<" Cedula --------- : " << ced << endl;
            cout <<" --------------------------- : " << endl;
            encontrado = true;
        }
        leer >> cod;
    }
    leer.close();

    if (!encontrado)
    {
        cout <<" Registro inexistente " << endl;
    }
    system("pause");
}

void  ModificarRecluso( ifstream & leer){

        system ("cls");

        string nombre;
        string edad;
        string ced;
        string cod ;
        string codmod;
        string nombremod ;
        string edadmod ;
        string cedmod ;

        leer.open ("recluso.txt", ios :: in);

        ofstream mod ("modificar.txt", ios :: out );
        if (leer.is_open())
        {
            cout << " codigo " << endl;
            cin >> codmod;
            leer >> cod ;

            while (!leer.eof()) 
            {
                leer >> nombre ;
                leer >> edad ;
                leer >> ced ;
                if (cod == codmod)
                {
                    cout <<" Modifique los datos " << endl;
                    cout <<" ------------------- " << endl;
                    cout << " Primer nombre " << endl;
                    cin >> nombremod;
                        
                    cout << " Edad " << endl;
                    cin >> edadmod;

                    cout << " Ingrese cedula " << endl ; 
                    cin >> cedmod;

                    mod << cod <<" " << nombremod <<" " << edadmod << " " << cedmod <<"\n " ;
                }else {
                    mod << cod <<" " << nombre <<" " << edad << " " << ced <<"\n " ;
                }
                
                leer >> cod ;
            }

            leer.close();
            mod.close();
            
        }else {
            cout <<" Error" << endl;
        }
        remove("recluso.txt");
        rename("modificar.txt", "recluso.txt");
}

void  EliminarRecluso(ifstream & leer){

      system ("cls");

        string nombre;
        string edad;
        string ced;
        string cod ;
        string codmod;
        string nombremod ;
        string edadmod ;
        string cedmod ;

        leer.open ("recluso.txt", ios :: in);

        ofstream mod ("modificar.txt", ios :: out );
        if (leer.is_open())
        {
            cout << " codigo " << endl;
            cin >> codmod;
            leer >> cod ;

            while (!leer.eof()) 
            {
                leer >> nombre ;
                leer >> edad ;
                leer >> ced ;
                if (cod == codmod)
                {
                    cout <<" Recluso Eliminado" << endl;
                    Sleep (1500);
                }else {
                    mod << cod <<" " << nombre <<" " << edad << " " << ced <<"\n " ;
                }
                
                leer >> cod ;
            }

            leer.close();
            mod.close();
            
        }else {
            cout <<" Error" << endl;
        }
        remove("recluso.txt");
        rename("modificar.txt", "recluso.txt");

}

int main(int argc, char const *argv[])
{

    ofstream ingreso ;
    ifstream leer;
    int op ;

     do
     {
         system ("cls");

         op = menu();

         switch (op)
         {
         case 1 :
             agregar (ingreso);

             break;
        case 2 :
            verRecluso(leer);
            break;
        case 3 :
            buscarRecluso(leer);
            break;
        case 4:
            ModificarRecluso(leer);
            break;
        case 5:
            EliminarRecluso(leer);
            break;
        
         
         default:
             break;
         }

        
     } while (op != 6 );
    
    return 0;
}

