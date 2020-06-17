//Hallar el mcd de 2 numeros
#include "iostream"
using namespace std;

int MCD (int numero1, int numero2)
{
    if(numero1==0){
        return numero2;
    }
    return MCD (numero2%numero1, numero1);

} int main () {
    int numero1, numero2;
    cout<<"Ingrese su primer numero"<<endl;
    cin>> numero1;
    cout<<"Ingrese su segundo numero"<<endl;
    cin>> numero2;
    cout<<"El MCD es:" << MCD (numero1,numero2);
    return 0;
}
