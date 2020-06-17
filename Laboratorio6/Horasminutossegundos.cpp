//Horas minutos y segundos
#include "iostream"
using namespace std;

int main()
{
    int h, m,s;
    string c;
    cout<<"digita una hora en el horario de 24 horas, por ejemplo: 23"<<endl;
    cin>> h ;
    cout<<"digita los minutos de tu hora, por ejemplo: 32"<<endl;
    cin>>   m ;
    cout<<"digita los segundos de tu hora, por ejemplo: 04"<<endl;
    cin>>  s;
    s=s+1;
    if (s>=60){
        s=0;
        m=m+1;
        if(m>60){
            m=0;
            h=h+1;
            if(h>=24){
                h=0;
            }
        }
    }
    if(h<10){ cout<<0;}
    cout <<h;
    cout<< ":" ;
    if(m<10){ cout<<0;}
    cout<<m;
    cout<< ":" ;
    if(s<10){ cout<<0;}
    cout<<s;
    cout<< endl;
    
}
