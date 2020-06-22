//dos arreglos ejercicio 4

#include "iostream"
using namespace std;

void arreglo(int arreglo1[], int a){
    for(int i=0; i<a ; i++){
        cout<< "Ingrese su numero " <<
        endl;
        cin>> arreglo1[i];
    }
}
void sumatoria(int arreglo1 [],int arreglo2[], int a, int resultado[]){
    for(int i=0; i<a; i++){
        resultado[i] = arreglo1 [i] + arreglo2[i];

    }
}
void resultados (int resultado[], int a){
    for (int i=0; i<a; i++){
        cout<< "los resultados son : " << resultado[i]<<endl;
    }
}
int main (){
    int a = 2
    ;
    int arreglo1[a];
    int arreglo2[a];
    int resultado[a];
    arreglo(arreglo1,a);
    arreglo(arreglo2,a);
    sumatoria (arreglo1,arreglo2,a,resultado);
    resultados (resultado,a);

    
}