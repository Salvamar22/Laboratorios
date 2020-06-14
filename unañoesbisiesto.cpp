//Año bisiesto
#include "iostream"
using namespace std;

int main()
{
    int fecha;
    cout<<"escribe el año que quieres saber si es bisiesto";
    cin>>fecha;
    if (fecha%4 !=0 || (fecha%100 == 0 && fecha % 400 != 0))
    cout<< "no es bisiesto"<<endl;
    else
    cout<<"es bisiesto"<<endl;
    
    return 0;
}
    
    
    