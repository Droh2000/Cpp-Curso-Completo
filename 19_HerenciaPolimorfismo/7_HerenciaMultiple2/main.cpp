/*
            Caracteristicas de la Herencia Multiple

    La herencia multiple plantea diferentes problemas tales como la ambiguedad por el uso
    de nombres indenticos en diferentes clases bases
    
    El Problema mas grande que tiene la herencia multiple es la ambiguedad que es la confucion de C++
    cuando quremos utilizar metodos o atributos porque se pueden repetir (llamarse igual)

    Los problemas son:
        * Colision de nombres: De diferentes clases padres como que tengan el mismo identificador para
        algun elemento de su interfaz. Se resuelve con el operador de ambito "::"
        * Herencia Repetida: Esto se da cuando una clase puede heredar indirectamente dos copias de una clase
        padre. Se resuelve con el operador de resolucion de ambito "::". 
        (Esto se da cuando dos clases se conectan entre si pero se vuelve a conectar una o mas clases ya conectadas con la clase hija)

    Esto nos puede llegar a generar el problema del Diamante, por eso no todos los lenguajes tienen soportado
    la herencia multiple
*/
#include<iostream>
#include<stdlib.h>
#include "ClaseDerivada.h" 

using namespace std;

int main(){
    ClaseDerivada *c = new ClaseDerivada(10,14,15);

    cout<<"X: "<<c->getx()<<endl;



    delete c;
    cout<<endl;
    system("pause");
    return 0;
}