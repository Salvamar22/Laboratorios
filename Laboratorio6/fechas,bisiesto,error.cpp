#include "iostream"
using namespace std;
int main (){
    int dia,mes,anio,dsiguiente,msiguiente,asiguiente;
    string c;
    cout<< "digite su dia del mes ejemplo: 26"<<endl;
    cin>> dia;
    cout<< "digite su mes del anio ejemplo: 10"<<endl;
    cin>> mes;
    cout<< "digite su anio ejemplo: 2000"<<endl;
    cin>> anio;
    if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((anio % 4 != 0) || (anio % 100) == 0) && (anio % 400) != 0) || dia == 31)
    {mes = mes+1;
    dia=1;
    }
    else
    {
        dia= dia+1;
        mes= mes;

    }
    if (dia==1 && mes==13)
    {
        mes =1;
        anio=anio+1;
    }
    else
    {
        anio= anio;
    }
   if (anio%4 !=0 || (anio%100 == 0 && anio % 400 != 0))
    cout<< "Tu año no es bisiesto"<<endl;
    else
    cout<<"Tu año es bisiesto"<<endl;
    




    if(dia<10){ cout<<0;}
    cout <<dia;
    cout<< ":" ;
    if(mes<10){ cout<<0;}
    cout<<mes;
    cout<< ":" ;
    if(anio<10){ cout<<0;}
    cout<<anio<<endl;
    
    
    return 0;
}