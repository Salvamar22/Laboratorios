//arreglo 1

#include<iostream>
#include<string.h>
using namespace std;

        void cambiar(int amplitud, char murcielago[], string palabrafrase){
        for (int i=0; i < amplitud ; i++) {  
        if( palabrafrase[i] == 'm')
            palabrafrase[i] = murcielago[0];
        else if (palabrafrase[i] == 'u')
            palabrafrase[i] = murcielago[1];
        else if( palabrafrase[i] == 'r')
            palabrafrase[i] = murcielago[2];
        else if( palabrafrase[i] == 'c')
            palabrafrase[i] = murcielago[3];
        else if( palabrafrase[i] == 'i')
            palabrafrase[i] = murcielago[4];
        else if( palabrafrase[i] == 'e')
           palabrafrase[i] = murcielago[5];
        else if( palabrafrase[i] == 'l')
            palabrafrase[i] = murcielago[6]; 
        else if( palabrafrase[i] == 'a')
            palabrafrase[i] = murcielago[7];
        else if( palabrafrase[i] == 'g')
            palabrafrase[i] = murcielago[8];
        else if( palabrafrase[i] == 'o')
            palabrafrase[i] = murcielago[9];
        else if( palabrafrase[i] == '-')
            palabrafrase[i] = '-';
     }
        cout << palabrafrase << endl;
}
        int main(){
        char murcielago[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; 
        string palabrafrase;
        cout << "Ingrese una palabra (solo con letras minusculas); Si es una oracion o parrafo , unirlas por un -  : "<<endl; 
        cin >> palabrafrase;
        int amplitud = palabrafrase.length();


        cambiar(amplitud, murcielago, palabrafrase);}




