#include "iostream"

using namespace std;
 
 int main ()
{
    float precio, cantidad, total;
    string producto;

    cout << "Programa que muestra el total a pagar." << endl << endl;
    

    cout << "Ingrese el nombre del producto: ";
    cin >> producto;

    cout <<"Ingrese el precio del producto: ";
    cin >> precio;

    cout <<"Ingrese cantidad a comprar del producto: ";
    cin >> cantidad;

    cout <<"La persona ha comprado " << cantidad << " unidades de " <<producto <<" y el total es de: $" << precio*cantidad; 
    
}