#include<iostream>
#include<conio.h>
#include<string>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

int main(){
    int op;
    Persona *p[3];

    p[0] = new Futbolista("Juan","Ramirez",23,16,"Delantero");
    p[1] = new Entrenador("Bochaca","Lopez",45,"Estar sentado");
    p[2] = new Medico("Matews","Williams",30, 5, "Medico General");

    do{
        cout<<"\t\nMENU"<<endl;
        cout<<"1. Viajar en Equipo"<<endl;
        cout<<"2. Entrenamiento"<<endl;
        cout<<"3. Partido Futbol"<<endl;
        cout<<"4. Planificar Entrenamiento"<<endl;
        cout<<"5. Entrevista"<<endl;
        cout<<"6. Curar Lesion"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>op;

        switch (op){
        case 1:
            cout<<"Futbolista: "<<endl;
            cout<<p[0]->getNombre()<<endl;
            p[0]->viajar();
            cout<<"Entrenador"<<endl;
            cout<<p[1]->getNombre()<<endl;
            p[1]->viajar();
            cout<<"Medico: "<<endl;
            cout<<p[2]->getNombre()<<endl;
            p[2]->viajar();
            break;
        case 2:
            cout<<"Futbolista: "<<endl;
            cout<<p[0]->getNombre()<<endl;
            p[0]->entrenamiento();
            cout<<"Entrenador"<<endl;
            cout<<p[1]->getNombre()<<endl;
            p[1]->entrenamiento();
            cout<<"Medico: "<<endl;
            cout<<p[2]->getNombre()<<endl;
            p[2]->entrenamiento();
            break;
        case 3:
            cout<<"Futbolista: "<<endl;
            cout<<p[0]->getNombre()<<endl;
            p[0]->partidoFutbol();
            cout<<"Entrenador"<<endl;
            cout<<p[1]->getNombre()<<endl;
            p[1]->partidoFutbol();
            cout<<"Medico: "<<endl;
            cout<<p[2]->getNombre()<<endl;
            p[2]->partidoFutbol();
            break;
        case 4:
        // Para los metodos que son de cada una de las respectivas clases hijas, por defecto nos dara ERROR 
        // porque por defecto al meterlo en el arreglo de tipo Persona los demas objetos instanciados se comportaran 
        // como un objeto de persona y esta clase no tiene los metodos que tienen las clases hijas
        // Por defecto hicimos un UpCasting para que la clase hija tome la forma de la clase padre
        // Solucion es hacer un DownCasting 
            cout<<"Entrenador"<<endl;
            cout<<p[1]->getNombre()<<endl;
        // Aplicacion del Downcasting indicando que se regrese a ser del tipo de la clase que le corresponde
        // el estedisco es por ser puntero y despues y encerrado entre los parentesis la variable a convertir    
            ((Entrenador *)p[1])->planificarEstrategia();
            break;
        case 5:
            cout<<"Futbolista: "<<endl;
            cout<<p[0]->getNombre()<<endl;
        // Asi accedemos a los metodos de la clase derivada
            ((Futbolista *)p[0])->entrevista();
            break;
        case 6:
            cout<<"Medico: "<<endl;
            cout<<p[2]->getNombre()<<endl;
            ((Medico *)p[2])->curarLesion();
            break;            
        default:
            cout<<"Opcion incorrecta";
            break;
        }


    }while(op >=1 && op<=6);

    delete[] p;
    getch();
    return 0;
}