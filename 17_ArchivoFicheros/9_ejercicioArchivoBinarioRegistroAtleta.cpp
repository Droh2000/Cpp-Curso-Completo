#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

void menu();
void escribirPulsacion();
void agregarPulsacion();
void mostrarPulsaciones();

struct Registro{
    float hora; // La parte entera sera la hr y la decimal los minutos
    int pulsaciones;
};

int main(){

    menu();

    getch();
    return 0;
}

void menu(){
    int opcion;

    do{
        cout<<"\tMenu"<<endl;
        cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
        cout<<"2. Agregar mas pulsaciones"<<endl;
        cout<<"3. Mostrar las pulsaciones regitradas"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        cin.ignore(INT_MAX,'\n');

        switch (opcion){
        case 1:
            escribirPulsacion();
            break;
        case 2:
            agregarPulsacion();
            break;
        case 3:
            mostrarPulsaciones();
            break;                
        default:
            break;
        }
        cout<<endl;
        //system("pause");
    } while (opcion != 4);
    
}

void escribirPulsacion(){
    ofstream archivoB;

    archivoB.open("Pulsaciones.dat", ios::out | ios::binary);

    if (archivoB.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    Registro pulso;

    cout<<"\nIngrese los datos: "<<endl;
    cout<<"Hora y minutos (Hr.Min): ";cin>>pulso.hora;
    cout<<"Numero de Pulsaciones: ";cin>>pulso.pulsaciones;
    
    // Mandamos la informacion de tipo char y el lugar de memoria donde se almacena
    archivoB.write((char *)&pulso, sizeof(Registro));

    archivoB.close();    
}

void agregarPulsacion(){
    ofstream archivoB;

    archivoB.open("Pulsaciones.dat", ios::app | ios::binary);

    if(archivoB.fail()){
        cout<<"No se pudo agregar texto en el archivo";
        exit(1);
    }

    Registro pulso;

    cout<<"\nIngrese los datos:"<<endl;
    cout<<"Hora y minutos (Hr.Min): ";cin>>pulso.hora;
    cout<<"Numero de Pulsaciones: ";cin>>pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(Registro));

    archivoB.close();
}

void mostrarPulsaciones(){
    ifstream archivoB;

    archivoB.open("Pulsaciones.dat", ios::in | ios::binary);

    if(archivoB.fail()){
        cout<<"No se pudo agregar texto en el archivo";
        exit(1);
    }

    Registro pulso;

    // Como son mas datos vamos a usar un bucle
    cout<<"\n.Datos Leidos del archivo binario."<<endl;
    while(!archivoB.eof()){
        archivoB.read((char *)&pulso, sizeof(Registro));

        // Condicional para que nos repita el utlimo registro
        if(!archivoB.eof()){
            cout<<"\nHora/Minutos: "<<pulso.hora<<endl;
            cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
        }
    }
    
    archivoB.close();
}