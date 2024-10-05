/*
                PLANTILLA DE CLASES
    Permiten definir versiones de una misma clase que difieren en el tipo de dato de algunos de sus
    miembros (Atributps y Metodos), es decir se crea el modelo de una clase el cual permitira definir distintas instancias de la 
    misma para diferentes tipos de casos

    Ejemplo de Declaracion:
        template<class T>
        class PlantillaClase{
            private:
                T atributo
            public:
                PlantillaClase(){...}
                T Metodo1(){...}
                void Metodo2(T valor){...}
        };
    Al momento de instancias un objeto de una plantilla de clase ya cambia la cosa
*/
#include<iostream>
#include<stdlib.h>
#include "1_PlantillaClase.h"

using namespace std;

int main(){
    // INSTANCIA DE UN OBJETO DE UNA PLANTILLA DE CLASE
    // Al momento de crear un objeto ya le debemos indicar que tipo de datos va a ser
    // Entre <> ponemos los tipos de datos que vamos a utilizar
    // Aqui todo lo que tenga T1 sera entero y T2 sera Float
    PlantillaClase <int,float> obj1(5,9.845);

    obj1.mostrarDatos();
    obj1.setDato1(3);
    obj1.setDato2(69.362);
    cout<<endl;
    obj1.mostrarDatos();


    system("pause");
    return 0;
}