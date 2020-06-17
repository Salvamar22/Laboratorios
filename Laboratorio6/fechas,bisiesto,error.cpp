#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
bool is_bisiesto(int);
int dia_mes(int,int,int,bool);
int main(){
	int dia,mes,anio,resultado;
    bool bisiesto;
	cout<<"Ingrese el a"<<(char)164<<"o: "<<endl;
	cin>>anio;
	cout<<"Ingrese el mes: "<<endl;
	cin>>mes;
	cout<<"Ingrese el dia: "<<endl;
	cin>>dia;
	
	cout<<"La fecha ingresada es:"<<dia<<"-"<<mes<<"-"<<anio<<endl;	
	bisiesto = is_bisiesto(anio);
	
	if(bisiesto){		
		cout<<"Es a"<<(char)164<<"o bisiesto"<<endl;
	}else{
		cout<<"No es a"<<(char)164<<"o bisiesto"<<endl;
	}
	
	if(mes>12 || mes<1){
		cout<<"ERROR: El mes ingresado es incorrecto"<<endl;
		system("PAUSE");
		return 0;
	}else{
		if(dia>31 || dia<1){
			cout<<"ERROR: El dia ingresado es incorrecto"<<endl;
			system("PAUSE");
			return 0;
		}else{
			resultado = dia_mes(mes,dia,anio,bisiesto);
			if(resultado == 1){
				cout<<"La siguiente fecha es:"<<"01-01-"<<anio+1<<endl;
			}else if(resultado == 2){
				cout<<"La siguiente fecha es:"<<dia+1<<"-"<<mes<<"-"<<anio<<endl;
			}else if(resultado == 3){
				cout<<"La siguiente fecha es:"<<"01-"<<mes+1<<"-"<<anio<<endl;
			}else{
				cout<<"Febrero no puede contener esos dias"<<endl;
			}
		}		
	}
	system("PAUSE");
}

bool is_bisiesto(int anio){
    if(anio%4==0 and anio%100!=0 or anio%400==0)
        return true;
    else
        return false;
}
int dia_mes(int mes,int dia,int anio,bool bisiesto){
	int respuesta;
	if(mes == 12){
		//Este es diciembre en caso de ser 31 sera un nuevo aï¿½o
		if(dia == 31){
			respuesta = 1; //es año nuevo
		}else{
			respuesta = 2; //solo se aumenta en 1 al dia
		}
	}else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 ){
		//Estos meses contienen 31 dias
		if(dia == 31){
			respuesta = 3; //cambia de al primer dia del siguiente mes
		}else{
			respuesta = 2; //solo se aumenta en 1 al dia
		}		
	}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		//Estos meses contienen 30 dias
		if(dia == 30){
			respuesta = 3; //cambia de al primer dia del siguiente mes
		}else{
			respuesta = 2; //solo se aumenta en 1 al dia
		}		
	}else{
		if(dia > 29 || (!bisiesto && dia > 28)){
			return 4; //Error en los dias de febrero
		}else{
			//Este es febrero ya que no contiene ni 30 ni 31 dias
			if(bisiesto){
				if(dia == 29){
					respuesta = 3; //Cambia de al primer dia del siguiente mes
				}else{
					respuesta = 2; //Solo se aumenta en 1 al dia
				}						
			}else{
				if(dia == 28){
					respuesta = 3; //Cambia de al primer dia del siguiente mes
				}else{
					respuesta = 2; //Colo se aumenta en 1 al dia
				}			
			}			
		}
	}
	return respuesta;
}