//palabra es mayor a 10 caracteres, par o impar
#include "iostream"
using namespace std;
int main()
{string palabra ;
cout<<"Ingrese su palabra"<<endl;
cin>>palabra;
palabra.length();
palabra.length();
cout<<palabra.length()<<endl;
if (palabra.length()>10 && palabra.length()%2==0  ){
    cout<< "Tu palabra tiene mas de 10 caracteres y es par "<<endl;
}else if (palabra.length()<10 && palabra.length()%2==0 )
{cout<< "Tu palabra tiene menos de 10 caracteres y es par"<<endl;
}else if(palabra.length()> 10 && palabra.length()%2 == 1 ){
cout<< "Tu palabra tiene mas de 10 caracteres y es impar"<<endl;}
else if(palabra.length()< 10 && palabra.length()%2 == 1 ){
cout<< "Tu palabra tiene menos de 10 caracteres y es impar"<<endl;}
return 0;
}