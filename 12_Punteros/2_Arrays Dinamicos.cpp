/*
    Asignacion dinamica de arreglos

    new: Reserva el numero de bytes solicitados por la declaracion
    delete: Libera un Bloque de bytes reservados con anterioridad

    Ejercicio:
    Pedir al usuario N calificacion y almacenarlas en un arreglo dinamico
*/

#include<iostream>
#include<stdlib.h> // Con esta libreria funciona New y Delete

using namespace std;

// Prototipo de Funcion
void pedirCalificacionees();
void mostrarNotas();

// Creamos arreglo dinamico con Punteros
int numCalif, *calif;

int main(){

    pedirCalificacionees();
    mostrarNotas();

    // Ahora la memoria Reservada la tenemos que LIBERAR
    delete[] calif; // Quitamos los bytes usados anteriormente (Siempre se pone cuando usemos el NEW)

    system("pause");
    return 0;
}

void pedirCalificacionees(){
    cout<<"Ingrese la cantidad de calificaciones: ";
    cin>>numCalif;

    // new -> Reservamos memoria de tipo INT
    // Entre los [] le pasamos la cantidad de valores
    calif = new int[numCalif]; // Ademas le estamos indicandole la primera pocicion

    cout<<"Ingrese las calificaciones: "<<endl;
    for (int i = 0; i < numCalif; i++){
        cout<<"Calificacion "<<i+1<<": ";
        cin>>calif[i];
        // Aqui no desperdiciamos memoria con espacios extras
        // Esta memoria se reserva tomando 'numCalif' multiplicando por INT (que tiene 4 bytes)
        // por lo tanto si son 10 calificacion serian 40 bytes reservados
    }
}

void mostrarNotas(){
    cout<<"\nMostrando Calificaciones: "<<endl;
    for (int i = 0; i < numCalif; i++){
        cout<<"Calificacion "<<(i+1)<<": "<<calif[i]<<endl;
    }
}