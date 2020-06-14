//calculo de salarios

#include "iostream"
#include "iomanip"
using namespace std;
int main()
{string empleado = "";
    int  horas=0, extra=0 ; 
    float total;
    float descuentos; 
    float renta;
    cout<<"Ingrese el nombre de su empleado"<<endl;
    cin>> empleado;
    cout<<"Ingrese horas trabajadas por su empleado en un mes, ejemplo: 160"<<endl;
    cin>>horas;
    cout<<"ingrese horas extra trabajadas por su empleado ejmplo: 50"<<endl;
    cin>> extra;
    horas = horas*1.75;
    extra = extra*2.50;
    total = horas+extra;
    cout << empleado << " gana un sueldo de: "<< horas <<" dolares al mes"<<endl;
    cout << empleado <<" gana en horas extra: "<< extra <<" dolares al mes"<<endl;
    cout << empleado << " genera un total: "<< total <<" dolares al mes"<<endl;
    descuentos= total-(total*10.25)/100; // los descuentos son 4% seguro social 6.25% AFP
    renta= total - (total*20.25)/100; //los descuentos son 4% seguro social 6.25% AFP Renta 10%
    if (descuentos<=500)
    {
    cout << "Descontando el seguro social y el AFP al empleado le queda un margen de: "  << descuentos <<" dolares"<<endl;}
    else
    {
    cout << "Descontando el seguro social el AFP y la renta al empleado le queda un margen de: "  << renta <<" dolares"<<endl;}


    return 0;
}

