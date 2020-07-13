//Tienda
#include "iostream" 
using namespace std;
const int longCad=20;
struct 
{ char nombreArticulo [longCad + 1][50];
  int cantidad[50];
  float precio[50];
  float costoArticulo[50];
} proyecto;

void informacion(int narticulos){
    cout << "\tInformacion de los productos" <<endl;
    for (int i = 0; i < narticulos; i++)
    {
        cout<< "Ingrese el nombre del articulo "<< i+1 << ": " ;
        cin >> proyecto.nombreArticulo[i];
        cout<< "Ingrese la cantidad de articulos: " ;
        cin >> proyecto.cantidad[i];
        cout<< "Ingrese el precio por unidad de su articulo: $ " ;
        cin >> proyecto.costoArticulo[i];
      
    } 
return;
}

void precios(int narticulos){
    for (int i = 0; i < narticulos; i++)
    {
        proyecto.precio[i]=proyecto.costoArticulo[i]*proyecto.cantidad[i];      
    }
    return;
}
void resultado1 (int narticulos){
    cout << "\tResultados de los productos" << endl;
    for (int i = 0; i < narticulos; i++)
    {
        cout << "Producto:  " << proyecto.nombreArticulo[i] <<endl;
        cout << "Cantidad: " << proyecto.cantidad[i] <<endl;
        cout << "Costo por ariculo: $" << proyecto.costoArticulo[i] <<endl;
        cout << "Precio final del producto: $" << proyecto.precio[i] <<endl;
    }
    return;
}
void resultadototal (int narticulos){
    cout << "Total de tu cuenta" << endl;
    float total;
    for (int i = 0; i < narticulos; i++)
    {
       total+=proyecto.precio[i];
    
    }
    cout<< "\tEl total de tu cuenta es.....$" <<total ;
    return;
}
int main(){
//struct proyecto stud[20];
int narticulos=0;
cout<< "Cantidad de articulos (50 maximo)" <<endl;
cin >> narticulos;
informacion(narticulos);
precios(narticulos);
resultado1(narticulos);
resultadototal(narticulos);
}