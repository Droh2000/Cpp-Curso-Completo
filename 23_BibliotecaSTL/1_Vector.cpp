/*
                    Vector
    Representa al arreglo clasico de elementos en donde todos los elementos contenidos estan contiguos en la memoria
    Esta caracteritica permite mayor velocidad de acceso a los elementos debido a que para acceder a cualquiera de 
    ellos, solo se debe calcular la posicion relativa al primer elemento
    (Aqui almacenamos como un arreglo de elementos dinamico agregando al final)
*/
#include<iostream>
#include<conio.h>
// Importamos el contenedor a usar
#include<vector>
using namespace std;

int main(){
    // Creamo vector INT
    vector<int> numeros;

    // Agregamos elementos desde el final:
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);

    // Mostrar los elementos
    for (int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<" | ";
    }

    // Crear con el vector con una cantidad Limite de elementos
    vector<int> num(5); // Solo podremos almacenar 5 elementos

    // Cuando limitamos el numero de elementos ya no podemos usar el Push back
    // Se agrega de la forma tradicional lo nuevo:
    num[0] = 1;
    num[1] = 2;
    num[2] = 3;
    num[3] = 4;
    num[4] = 5;

    // Eliminar los elementos
    numeros.pop_back(); // Nos borra el ultimo elemento del arreglo

    // Eliminar los elementos de alguna posicion en concreto
    // Le pasamos las pocicones de donde hasta donde queremos borrar
    // Posicionamos desde el inicio sumandole desde la pocicion a borrar
    // hasta la pocicion final que NO toma en cuenta
    // Aqui elimina: 1 hasta 2 (La 3 no la toma en cuenta)
    numeros.erase(numeros.begin()+1, numeros.begin()+3);

    // Modificamos elemento
    // Detectamos en cual posicion esta y lo igualamos al nuevo valor
    numeros[2] = 7;

    getch();
    return 0;
}