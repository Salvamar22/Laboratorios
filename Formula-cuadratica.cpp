#include "iostream"
#include "cmath"

using namespace std;
 
 int main ()
{
    float X1, X2;
    float a=1, b=4, c=-5; 
    cout << "Encontrar el resultado con la formula cuadratica. " << endl << endl;

 
  
  X1 = (-b+sqrt(b*b-4*a*c))/(2*a);
  X2 = (-b-sqrt(b*b-4*a*c))/(2*a);

  cout << "El valor de X1 = " <<X1<< " y el valor de X2 = " <<X2; 

}