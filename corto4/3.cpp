#include<iostream>
using namespace std;
float arr(int s){
    float resultado[40], total[40][5];
    cout << "¿Cuantos alumnos quiere registrar?: "; cin >> s;
    cout << "Ingrese sus 5 notas \n";

        for (int i = 0; i < s; i++){
        for(int j = 0; j < 5; j++){
        cout << "Ingrese la nota " << j+1 << " de su alumno " << i+1 << " ";
        cin >> total[i][j];
        }
        cout << "\n";
    }
        for (int p = 0; p < s; p++)
    {
        for (int r = 0; r < 5; r++)
        {
         resultado[p] =   (resultado[p] + total[p][r] * (0.20));
        }
    }
        for (int a = 0; a < s; a++)
    {
        if (resultado[a] >= 6){
        cout.precision(2);
        cout << "Su alumno " << a+1 << " aprobo  obteniendo " << resultado[a] << endl;}
        else{
        cout.precision(2);
        cout << "Su alumno " << a+1 << " reprobo obteniendo " << resultado[a] << endl;}
    }

         return 0;
}

        int main(){
         int s;
        arr(s);  
        return 0;
}