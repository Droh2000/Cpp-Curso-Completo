#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct etapa{
    int horas;
    int minutos;
    int segundos;
};

int main(){
    int n, hr=0, min=0, seg=0;
    cout<<"Ingrese el numero de etapas: ";
    cin>>n;

    etapa *tiempo = new etapa[n];

    cout<<"Ingrese los datos de cada Etapa: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<"Horas: ";
        cin>>tiempo[i].horas;
        cout<<"Minutos: ";
        cin>>tiempo[i].minutos;
        cout<<"Segundos: ";
        cin>>tiempo[i].segundos;
    }

    cout<<"tiempo total de la etapa: "<<endl;
    for (int i = 0; i < n; i++){
        seg += tiempo[i].segundos;
        min += tiempo[i].minutos;
        hr += tiempo[i].horas;
    }

    int aux=0;
    aux = seg / 60; // Sacamos minutos Extras
    seg %= 60;

    min += aux;
    aux = min / 60; // Sacamos Horas Extras
    min %= 60;

    hr += aux;
    aux = hr / 24; // Aqui tenemos Dias
    hr %= 24;

    cout<<"Tiempo total en recorrer todas las etapas: "<<endl;
    if(aux>0){
        cout<<"Dias: "<<aux<<endl;
    }
    cout<<"Horas: "<<hr<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    delete[] tiempo;
    system("pause");
    return 0;
}