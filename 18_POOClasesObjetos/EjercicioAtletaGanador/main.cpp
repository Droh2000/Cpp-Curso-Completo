#include<iostream>
#include<conio.h>
#include<string>
#include "Atleta.h"

using namespace std;

int main(){
    int n, numAtle;
    Atleta *a;
    float tiempo;
    string nombre;

    cout<<"Ingrese la cantidad de Atletas a registrar: ";
    cin>>n;

    a = new Atleta[n];

    cout<<"\n\tRegistre Los Datos"<<endl;
    for (int i = 0; i < n; i++){
        cout<<"\n"<<(i+1)<<". Atleta:"<<endl;
        cout<<"Numero del Atleta: ";cin>>numAtle;
        cin.ignore(INT_MAX,'\n');
        cout<<"Nombre:";getline(cin,nombre);
        cout<<"Tiempo: ";cin>>tiempo;

        a[i] = Atleta(numAtle, nombre, tiempo);
    }

    int indice=Atleta::getAtletaGanador(a, n);

    cout<<"\n\tEl Atleta Ganador es:"<<endl;
    cout<<"Nombre: "<<(a+indice)->getNombre()<<endl;
    cout<<"Numero: "<<(a+indice)->getNumero()<<endl;
    cout<<"Tiempo: "<<(a+indice)->getTiempoCarrera()<<endl;

    delete[] a;
    _getch();
    return 0;
}