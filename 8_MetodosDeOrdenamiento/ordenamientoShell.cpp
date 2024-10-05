/*
    Es una mejora del ordenamiento por insercion donde en lugar de estar
    comparando pocicion a pocicion en este caso las coparacion son mayores dando
    un salto de n/2 siendo n el numero de elementos del arreglo

    Pasos:
    - Se dividie la lista original en n/2 grupos, considernado un incremenento o salto entre los elementos n/2
    - Se clasifica cada grupo por separado, comparando las parejas de elementos y si no estan ordenados se intercambian
    - Se divide ahora la lista en la mitad de los grupos n/4, con un salto entre los elementos tambien mitad n/4
        y nuevamente se clasifica cada grupo por separado
    - Asi sucesivamente se sigue dividiendo la lista en la mitad de grupos que en el recorrido anterior con un salto
        decreciente en la mitad que el salto anterior y luego clsificando cada grupo por separado
    - El algoritmo termina cuando el tamano del salto es igual a 1

    Arreglo:
        6     1    5    2     3    4   0
        a[j]           a[k]
    Salto: n/2 = 3
    Condicion:
    Si(a[j] <= a[k]) Entonces
        Arreglo ordenado
    Sino
        Intercambio
    En esa posicion de a[j] y a[k] se avanza una posicion en cada uno al mismo tiempo y se comparan

    Se van haciendo intercambio o no, que si se hacen varios intercambios entonces no se cambia el numero del salto
    hasta que no haya intercambios

    Cuando ya no haya intercambios ahora el salto:
    Salto 3/2= 1
    Ahora con esa distancia de salto se hace la condicion de la misma manera
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

// Funcion
void ordenacionShell(float a[], int n){ // Le pasamos el arreglo y el numero de elementos que tiene
    // Salto para delimitar cuatas casillas saltaremos y delimitar los elemenots
    // el j es para tomar el primer elemento a comparar y el k sera para el segundo elemento a comparar
    int salto, i, j, k; // El i solo es el indice para dar vueltas en el arreglo
    salto = n/2; // Salto inicial

    while(salto>0){
        // Aqui delitamos el salto para comparar    
        for (i = salto; i < n; i++){
            //Saber el indice j que es el del primer elemento
            j = i - salto;
            // Controla las vueltas hasta que ya no haya intercambios
            while(j>=0){ // esto para no dar saltos demas
                k = j + salto; // Saber el elemento de la derecha con el que comparamos
                // CONDICIONAL BASE
                if(a[j] <= a[k]){ // significa que el par de elementos esta ordenado
                    j = -1; // Asi es como salimos del bucle while
                }else{ // par de elementos estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto; // para no darle la vuetla completa al arreglo
                }
            }
        }
        // Volver a iniciar otro salto
        salto /= 2;
    }
}

// Aqui le pasamos los parametros por referencia
void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

int main(){

    float arr[] = {4,5,6,8,7,9,1,2,3,5,10,1,0};

    ordenacionShell(arr, 13);

    cout<<"Ordenacion del arreglo: ";
    for (int i = 0; i < 13; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    system("pause");
    return 0;
}

