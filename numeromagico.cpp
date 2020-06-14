//numero magico

#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;
int main ()
{int x;
int num;
int cont=5;

srand((unsigned)time(NULL));
x=rand()%(100);
cout<< "Digita un numero del 1 al 100 (tines 5 intentos" << endl;
int a = 0;
while(a==0)
{
    cout<< "Dgita un numero"<<endl;
    cin>> num;
    cont--;
    if(cont==0)
    cout<<"te has quedado sin intentos a la proxima sera."<<endl;  
        
    else if(num>x)
    cout<< "El numero es menor " << "te quedan "<< cont<<" intentos" << endl;
    
    else if(num <x)
    cout<< "El numero es mayor "<<" te quedan "<< cont<<" intentos"<<endl;
    
        
    else {  
    cout<< "Adivinaste el numero"<<endl;

        
        
        system ("pause");

return 0;

}
 
}
}