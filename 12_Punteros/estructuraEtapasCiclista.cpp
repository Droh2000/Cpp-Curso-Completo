#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>

using namespace std;

struct Etapa{
    int horas;
    int minutos;
    int segundos;
} etapas[3], *dirEtapas = etapas; // Solo sera para 3 etapas

void pedirDatos();
void calcularTiempoTotal(Etapa *);

int main(){

    pedirDatos();
    calcularTiempoTotal(dirEtapas);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el tiempo de un ciclista en recorrer cada etapa"<<endl;
    for (int i = 0; i < 3; i++){
        cout<<"Etapa "<<i+1<<": "<<endl;
        cout<<"Horas: ";cin>>(dirEtapas+i)->horas;
        cout<<"Minutos: ";cin>>(dirEtapas+i)->minutos;
        cout<<"Segundos: ";cin>>(dirEtapas+i)->segundos;
        cout<<endl;
    }
}

void calcularTiempoTotal(Etapa *e){
    int hr=0, min=0, seg=0;
    for (int i = 0; i < 3; i++){
        hr += (e+i)->horas;
        min += (e+i)->minutos;
        /*
            if(min >= 60){
                min -= 60;
                hr++;
            }
        */
        seg += (e+i)->segundos;
        /*
            if(seg >= 60){
                seg -= 60;
                min++;
            }
        */

    }

    cout<<"Tiempo Total empleado por el Ciclista "<<endl;
    hr = (min/60)+hr;
    min = ((seg/60)+min)%60;
    seg %= 60;
    cout<<"Horas: "<<hr<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;
}