#include<iostream>
#include<conio.h>
#include "ClaseDerivada.h" 

using namespace std;

int main(){
    // Con esto vemos el orden con el que se ejecutan los constructores
    // El de la clase padre se ejecuta primero y despues el de la clase hija
    ClaseDerivada *obj = new ClaseDerivada(5,10);

    cout<<endl;

    // El primer Destructor que se utiliza es el de la clase hija y despues
    // el de la clase padre (Se llaman los destructores aunque solo estemos eliminando el de la hija)
    // esto es porque los constructores y destructores van juntos (Todo constructor tiene su destructor)
    delete obj;

    getch();
    return 0;
}