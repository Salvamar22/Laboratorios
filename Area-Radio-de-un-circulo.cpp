#include "iostream"
#include "cmath"
using namespace std;
 
 int main ()
{
    float r, Pi=3.1416, multi, pot, d=2.0;

    cout << "Encontrar el perimetro y el area de un circulo." << endl << endl;

  cout << "Digite el valor de r: ";
  cin >> r;
  
  multi = d*Pi*r;
  cout << "Su perimetro es: " << multi << endl;

  pot = pow(r,d);
  cout << "Su area es: " << pot * Pi<<endl;

  cout << "Formulas: Perimetro = 2*Pi*r y Area = Pi*r^2 " << endl;
  
}