#include <iostream>

using namespace std;

double subtotal;
double total;
double imp = 0.15;

string listaproductos;

void agregarproducto(string descipcion, int cantidad, double precio)
{
    listaproductos = listaproductos + descipcion + '\n'; 
    subtotal = subtotal + (cantidad * precio); 
}

void imprimirfactura()
{
    system("cls");
    cout << "**********" << endl;
    cout << " Factura" << endl;
    cout << "**********" << endl;
    cout << endl;

    cout << " Productos: " <<endl;
    cout << listaproductos;

total = subtotal + ( subtotal* 0.15);

    cout << endl;
    cout <<"Subtotal: " << subtotal << endl;
    cout <<"Total: " << total << endl;
    cout << endl;
    cout << endl;
    system ("pause");

}