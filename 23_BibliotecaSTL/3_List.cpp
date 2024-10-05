/*
                        Lista (List)

    Las listas son los contenedores adecuados cuando se requieren operaciones de
    insercion o eliminacion en cualquier parte de la lista. Estan implementadas como
    listas doblemente enlazadas, esto es cada elemento (nodo) que contiene las direcciones
    del nodo siguiente y del anterior, ademas del valor especifico almacenado

        - Cada nodo apunta a su elemento siguiente y a su nodo anteior
    
    Podemos insertar elementos tanto por la parte trasera, delantera y entre cualquiera de los nodos

    La ventaja de esta implementacion es que la insercion o eliminacion de un elemento se 
    reduce a ordenar los punteros del siguiente y anterior de cada nodo. Pero la desventaja 
    es que ya no se puede tener acceso aleatorio a los elementos, sino que se tiene un acceso
    secuencial en forma bidireccional, es decir, se puede recorrer el contenedor desde el principio
    hasta el final o viceversa (Pero ya no se puede acceder a un elemento desde los corchetes como 
    en el vector o la pila)

    Para poder recorrer listas es necesario utilizar iteradores, como ya dijimos los iteradores son 
    objetos similares a los punteros que indican una posicion dentro de un contenedor. Todos los contenedores
    proporcionan dos iteradores que establecen el rango del recorrido: Begin y End
        - Begin: Apunta al primer elemento de la lista
        - End: Apunta a NULL que va a ser la que esta despues del ultimo elemento de la lista
*/
#include<iostream>
#include<conio.h>
#include<list> // Importamos el contenedor
using namespace std;

int main(){
    // Creamos la lista
    list<int> datos;

    // Agregar elementos
    // Por el final de la lista
    datos.push_back(5); // 5
    datos.push_back(1); // 5 1
    datos.push_back(6); // 5 1 6
    // Por el inicio de la lista
    datos.push_front(2); // 2 5 1 6
    datos.push_front(7); // 7 2 5 1 6

    // Hemos ingresados nuestros datos desordenados
    // Ordenar Elementos (Una funcion hace el trabajo por nosotros)
    datos.sort(); // De menor a mayor

    // Mostrar los datos de la lista
    // Necesitamos crear un iterador
    list<int>::iterator i;
    // El iterador hay que inicializarlo en alguna posicion 
    // Como queremos que nos recorra toda la lista lo ponemos al inicio de esta
    i = datos.begin();
    
    while(i != datos.end()){ // Recorremos la lista
        // Recordemos que i es un puntero por lo que apuntas hacia la posicion de memoria donde esta el elemnto
        // Como queremos mostrar el dato que hay en esa posicion entonces lo desreferenciarlo al igual que un puntero
        cout<< *i <<" | ";

        i++;
    }
    cout<<endl;

    // Eliminar elementos de la lista
    datos.pop_back(); // Borrar al final
    datos.pop_front(); // Borrar al inicio

    getch();
    return 0;
}