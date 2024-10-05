#include<iostream>
#include<conio.h>
#include<string>
#include "Deportista.h"
#include "Alumno.h"
#include "BecadoDeporte.h" 

using namespace std;

int main(){
    Alumno *alumnoJuan = new Alumno("Sistemas");
    Alumno *alumnoPedro = new Alumno("Industrial");
    Deportista *deporteLuis = new Deportista("Julio Cesar");
    BecadoDeporte *bdAna = new BecadoDeporte("Sistemas","Juan Gomez",296.99);
    BecadoDeporte *bdCarmen = new BecadoDeporte("Gestion","Julio Cesar", 399.99);

    cout<<"Alumnos:"<<endl;
    cout<<"Juan: ";
    alumnoJuan->mostrarDatos();
    cout<<"Pedro: ";
    alumnoPedro->mostrarDatos();
    cout<<"\nDeportistas"<<endl;
    cout<<"Luis: ";
    deporteLuis->mostrarDatos();
    cout<<"\nDeportistas Becados"<<endl;
    cout<<"Ana: "<<endl;
    bdAna->mostrarDatos();
    cout<<"Carmen: "<<endl;
    bdCarmen->mostrarDatos();

    string nom;
    cout<<"Ingrese el nombre de la carrera para Juan: ";
    getline(cin, nom);
    alumnoJuan->setNombreCarrera(nom);
    cout<<"Ingrese el nombre de la carrera para Ana: ";
    getline(cin, nom);
    bdAna->setNombreCarrera(nom);
    cout<<"\nCarreras:"<<endl;
    cout<<"Juan: "<<alumnoJuan->getNombreCarrera()<<endl;
    cout<<"Ana: "<<bdAna->getNombreCarrera()<<endl;

    cout<<"Ingrese el nombre del entrenador para Luis: ";
    getline(cin, nom);
    deporteLuis->setNombreEntrenador(nom);
    cout<<"Ingrese el nombre del entrenador para Carmen: ";
    getline(cin, nom);
    bdCarmen->setNombreEntrenador(nom);
    cout<<"\nEntrenadores: "<<endl;
    cout<<"Luis: "<<deporteLuis->getNombreEntrenador()<<endl;
    cout<<"Carmen: "<<bdCarmen->getNombreEntrenador()<<endl;

    float procentaje;
    cout<<"Ingrese el nuevo porcentaje del monto de la beca: ";
    cin>>procentaje;
    bdAna->setMontoBeca(procentaje);
    bdCarmen->setMontoBeca(procentaje);
    cout<<"\nNuevo monto de la beca:"<<endl;
    cout<<"Ana: "<<bdAna->getMontoBeca();
    cout<<"Carmen: "<<bdCarmen->getMontoBeca()<<endl;

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporteLuis;
    delete bdAna;
    delete bdCarmen;
    getch();
    return 0;
}