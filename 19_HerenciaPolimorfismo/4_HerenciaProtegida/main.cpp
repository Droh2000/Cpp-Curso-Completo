#include<iostream>
#include<stdlib.h>
#include "Furgoneta.h"

using namespace std;

int main(){
    Furgoneta *f1 = new Furgoneta("Kia", "Negro", "AS15", 1200);

    cout<<"Carga: "<<f1->getCarga()<<endl;

    // Cualquier acceso de los demas metodos de la clase padre ahora son protegidos
    // no los podemos acceder directamente desde el objeto, nos tendremos que ir a modificar la clase
    cout<<"Color: "<<f1->obtenerColor()<<endl;

    /* 
        Esto puede parecer similar a la Herencia Privada

        Pero en el caso de las clases hijas que tengan herencia privada con otra clase
        por lo cual si esta clase hija tiene herencia con otras clases, estas clases hijas
        no tendran niguna conexion con la herencia que tienen su clase padre.

        En cambio en este caso como tenemos una herencia protegida si creamos clases
        hijas de esta clase Forgoneta todo lo protegido que heredamos de su clase padre
        tambien se podrian seguir utilizando en las clases hijas que tenga
            
        - Herencia Protegida: En herencias posterirores se podran seguir utilizando los protegido 
        - Herencia Privada: solo la primera herencia tendra acceso, las hijas de la hija Ya NO
    */

    delete f1;
    system("pause");
    return 0;
}