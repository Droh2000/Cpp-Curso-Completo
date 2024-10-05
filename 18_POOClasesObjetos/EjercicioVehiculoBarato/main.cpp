#include<iostream>
#include<conio.h>
#include<string>
#include "Vehiculo.h"

using namespace std;

int main(){
    // Se comento por el uso del metodo estaticp
    int n;//, pos=0;
    string marca, modelo;
    float precio;//, menor;
    Vehiculo *v;

    cout<<"Ingrese la cantidad de Vehiculos que quiere: ";
    cin>>n;
    cin.ignore(INT_MAX,'\n'); // Si se pune en medio de pedir los dato al final no muestra completa la informacion

    v = new Vehiculo[n];    

    cout<<"\n\tIngrese la informacion"<<endl;
    for (int i = 0; i < n; i++){
        cout<<"\nIngrese la Marca: ";
        getline(cin, marca);//(v+i)->setMarca(marca);
        cout<<"Ingrese el modelo: ";
        getline(cin, modelo);//(v+i)->setModelo(modelo);
        cout<<"Ingrese el precio: ";
        cin>>precio;//(v+i)->setPrecio(precio);
        cin.ignore(INT_MAX,'\n');

        // Usando el constructor que asigna los datos
        v[i] = Vehiculo(marca,modelo,precio);
        
        /*if(i==0){
            menor=(v+i)->getPrecio();
            pos=i;
        }
        if(i>=1){
            if((v+i)->getPrecio() < menor){
                menor=(v+i)->getPrecio();
                pos=i;
            }
        }*/
    }

    // Uso del metodo estatico
    int indice = Vehiculo::indiceBarato(v, n);

    cout<<"\n\tEl Coche mas Barato es:"<<endl;
    cout<<"Marca: "<<(v+indice)->getMarca()<<endl;
    cout<<"Modelo: "<<(v+indice)->getModelo()<<endl;
    cout<<"Precio: "<<(v+indice)->getPrecio()<<endl;

    delete[] v;
    getch();
    return 0;
}