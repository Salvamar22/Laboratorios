//Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
//se repite dicho número en el arreglo

#include "iostream"
#include "stdio.h"
using namespace std;
int main (void)
{
    int arr[50], i=0, c=0, n=0,  buscar=0;
    cout << "¿Cuantos numeros desea ingresar?"<<endl;
    cin >>   n ; 
    for(i=0;i<n;i++)
    {   cout << "ingrese el elemento " << i+1 << endl;
        cin >> arr[i] ; 
    
    }

        cout <<"que numero desea buscar"<<endl;
        cin >> buscar;
     for (i=0;i<n;i++)
     {
         if(arr[i]==buscar)
         c++;
     }
     if(c!=0)
     {
         cout<< "el numero " << buscar << " aparace " << c << " veces"   ;
        
     } else
     {
        cout << "El numero " << buscar << " no aparace en el arreglo"  << endl;
     }
     







}
