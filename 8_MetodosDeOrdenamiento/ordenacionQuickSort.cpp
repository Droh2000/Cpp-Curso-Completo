/*
    Aplica la tecnica de divide y venceras en varias secciones el arreglo
    Este es el mas eficiente de todos los algoritmos de ordenacion
    tiene menos lines de codigo

    El algoritmo divide los n elementos de la lista a ordenar en dos partes o particiones
    separadas por un elementos, una particion izquierda, un elemento central denominado pivote
    y una particion derecha

    Los elementos que esten a la izquierda del pivote van a ser menoreas al pivote
    y los elementos que esten a la derecha van ser mayores al pivote (Estas dos serian sublistas)

    Pasos:
    -   Seleccionamos el elemento central del arreglo como el pivote
    -   Dividir los elementos restantes en particiones izquierda y derecha, de modo que
        ningun elemento a la izquierda tenga un valor mayor al pivote y que ningun valor 
        ala derecha tenga una clave mas pequena que la del pivote
    -   Ordenamos la particion izquierda recursivamente
    -   Despues ordenamos la sublista derecha de igual forma
    -   la solucion es particion izquierda seguida del pivot y la particion derecha

    Ejemplo:
    Sacar centro: (primero+ultimo)/2
    pivote = a[central]

    Se empieza dos indice en cada una de la sublistas y se comparan con el pivote
        - Si los dos elementos no cumplen las condiciones de ser menores los de IZQ 
            y mayores los de DER se intercambian los dos valores
        - Si un elementos si cumple la condicion se su sublista entonce avanza ese iterador
        - Mientras no compla un elemento no vamos al iterador contrario y se sigue comparado 
            si es menor o mayor cuando no cumpla entonces se intercambian cuando los iteradores no cumplan

    Despues de divide el arreglo en dos partes y se ordenan de la misma manera con recursividad y se encuentra el pivote

    Este ordenamiento termina cuando los iteradores esten en el pivote o esten en la misma posicion
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void quickShort(float a[], int primero, int ultimo){
    // i controla la parte IZQ, j controla la parte DER
    int i, j, central;
    float pivote;

    central = (primero+ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do{
        // Mientras sea menor seguimos avanzando
        while(a[i] < pivote) ++i;
        // En el derecha seguimos avanzando hasta que no se cumpla la condicion
        while(a[i] > pivote) --j;

        // Verificamos que no se hayan cruzado los indices
        if(i<=j){
            // Hacemos el intercambio de los valores que no le corresponden en la sub lista que estan
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    }while (i<=j); // Cuando estos valores se cruzen ya tenemos ordenado el arreglo
    
    // Aplicamos recursividad para cuando se tenga que seguir dividiendo el arreglo
    if(primero < j){
        quickShort(a, primero, j); // Ordenamos la sublista IZQ
    }
    if(i < ultimo){
        quickShort(a, i, ultimo); // Ordenamos la sublista DER
    }
}

void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

int main(){

    float a[] = {4,5,8,9,7,40,2,6,5,9,8,20,1,0,56};

    quickShort(a, 0, 15);

    cout<<"Arreglo Ordenado: ";
    for (int i = 0; i < 15; i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    system("pause");
    return 0;
}