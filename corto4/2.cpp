#include<iostream>
using namespace std;
float estatura(float general[], float resultado){
    float estatura;
    int arribamedia = 0, bajomedia = 0, igualmedia=0; 
    estatura = resultado / 25;
      for(int j = 0; j < 25; j++){
        if(general[j] > estatura)
            arribamedia++;
        else if(general[j] < estatura)
            bajomedia++;
            else if(general[j] =  estatura)
            igualmedia++;
       }
    cout.precision(3);
    cout << "El promedio es: " << estatura << " metros" <<endl;
    cout << "Se tienen " << arribamedia << " estaturas arriba del promedio" << endl;
    cout << "Se tienen " << bajomedia << " estaturas por debajo del promedio.\n";
    cout << "Se tienen " << igualmedia << " estaturas igual al promedio.\n";

    return 0;
}

int main(){
    float alumnos[25], resultado;
    
    cout << "Ingrese la estatura de los 25 alumnos en metros: " << endl;
    for (int i = 0; i < 25; i++)
    {
        cout << "Alumno " << i + 1 << ": "; cin >> alumnos[i];
        resultado = resultado + alumnos[i];
    }
    cout << resultado;
   estatura(alumnos, resultado);
    return 0;
}