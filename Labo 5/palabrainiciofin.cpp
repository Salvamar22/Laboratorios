//Determinar si una palabra inicia y finaliza con la misma letra
#include "iostream"
using namespace std;
int main()
{string palabra ;
cout<<"Ingrese su palabra"<<endl;
cin>>palabra;
palabra.at(0);
palabra.length();
cout<<"tus letras inicial y final son: "  <<palabra.at(0) << " y " << palabra.at(palabra.length()-1);
return 0;
}