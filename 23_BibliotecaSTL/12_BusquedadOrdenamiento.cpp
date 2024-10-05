#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;

int numerosAleatorios(){
    return rand()%30;
}

// Funcion logica para calcular si un numero es par
template<typename T>
bool esPar(T valor){
    return (valor%2 == 0);
}

int main(){
    vector<int> valores(10);

    // Generar valores aleatorios
    generate(valores.begin(), valores.end(), numerosAleatorios);// Con esto ya le metemos datos al vector

    // Mostrar en pantalla el vector
    // ESta funcion toma desde una posicion inicial y nos lo manda a una posicion final
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout,"|"));

    // Este vector nos va almacenar los numeros pares que encontremos dentro del vector "valores"
    vector<int> pares;
    // Iterador para recorrer el vector "valores"
    vector<int>::iterator i = valores.begin(); // Comienze al inicio
    // Recorrer vector "valores" buscando numeros pares    
    // Con esta funcion podemos buscar todos los elementos pares (Los que complan con la funcion logica)
    // Primero le pasamos el rango de donde a donde del arreglo (En este caso como ya lo estamos inicializando desde el inicio el iterador "i") 
    // no hace falta ponerle a la funcion "find_if" que vaya desde "valore.begin()" porque consumiria mas recursos y recorreria mas, por ultimo se le pasa la funcion a ejecutar
    // El "i" va a ir buscando todas las coincidencias correctas verdaderas con la funcion logica
    while((i = find_if(i, valores.end(),esPar<int>)) != valores.end()){
        // Metemos el elemento Par
        pares.push_back(*i);
        i++;
    }

    // Ordenar el arreglo (Porque conforme encuentra los valores en el vector valores los va metiendo al vector pares)
    // Solo se le pasa a la funcion de donde a donde queremos ordenarlo
    sort(valores.begin(), valores.end());

    // Mostramos el vector pares en pantalla
    cout<<"\nArreglo de numeros Pares:"<<endl;
    copy(valores.begin(), valores.end(),ostream_iterator<int> (cout, "|"));

    getch();
    return 0;
}