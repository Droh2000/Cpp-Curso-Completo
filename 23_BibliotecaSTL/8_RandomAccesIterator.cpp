// Esto son los iteradores que se utilizan en los vectores o deque
#include<iostream>
#include<stdlib.h>
#include<vector> // Importamos el contenedor
#include<cstdlib> // Para usar Rand()
using namespace std;

// Funcion template para mostrar los elementos de un contenedor
template<class Iter> // Le vamos a pasar iteradores
void mostrarEnPantalla(Iter inicio, Iter final){ // Iterador del inicio y que apunta al final del contenedor
    while(inicio != final){
        // Mostramos el elemento que hay en esa posicion
        cout<<*inicio<<" | ";
        inicio++; // Este aumentara hasta que se topem con el final
    }
}


int main(){
    // Creamos el vector con solo 10 elementos
    vector<char> letras(10);

    //Agregando Elementos de manera Random al Vector
    for (int i = 0; i < 10; i++){
        letras[i] = 'A' + (rand() % 26); // Cualquier elemento del alfabeto desde la A-Z
    }

    // Visualizar los elementos del vector
    // El iterador que punta al inicio esta dado por la funcion begin() que apunta al inicio del contenedor
    // igualmente para el iterador del final
    mostrarEnPantalla(letras.begin(), letras.end());
    cout<<endl;

    // Anteiormente estamos avanzando secuencialmente por posicion el vector
    // pero ahora vayamos hacia atras
    // Con rbegin() apuntamo al final y nos queremos ir hacia el principio con rend()
    mostrarEnPantalla(letras.rbegin(), letras.rend());// Asi podemos ir descontando los elementos
    cout<<endl;

    // Acceder a cualquier indice del vector y mostrarlo a partir de ahi
    // Ver los elementos del medio del vector (Sera desde el 1 hasta el 8)
    // Con el +1 y -1 ya lo estamos mandando hacia una pocicion enconcreto donde queremos ir
    mostrarEnPantalla(letras.begin()+1, letras.end()-1);
    cout<<endl;

    system("pause");
    return 0;
}