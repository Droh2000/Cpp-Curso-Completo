#include<iostream>
#include<conio.h>
// Libreria estandar para las cadenas
#include<string.h>

using namespace std;

int main(){
    //                          Diferentes formas de Guardado
    // En este caso no se pone el numero de elementos por que se lo asignamos directamente
    char palabra[] = "Diego";
    char palabra2[] = {'D','i','e','g','o'};

    cout<<palabra<<endl;
    cout<<palabra2<<endl;

    // Pedirle al usuario la cadena
    char nombre[30]; // Le ponemos un espacio a la cadena
    cout<<"Ingrese su nombre: ";
    //cin>>nombre; -> Este en cuanto encuentre un espacio corta y deja de guardar
    //gets_s(nombre); -> Este toma espacios extras para almacenar la cadena y no le importa lo que le hayamos asignado
    cin.getline(nombre,20,'\n'); // NombreVari,EspacioTotal,TermineCuandoPrecionemos \n

    cout<<nombre<<endl;

    getch();
    return 0;
}