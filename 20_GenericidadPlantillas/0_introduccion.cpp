/*
            Genericidad Plantillas (Template)
    Tanto en plantillas en funciones como en clases
    Esto de la Generacidad y las plantillas principalmente nos sirven para ahorrarnos tiempo y codigo donde podemos
    usar las funciones o las clases con una sola definicion para diferentes tipos de datos

    Genericidad:
        Es una propiedad que permite definir una clase o funcion, sin especificar el tipo de datos de uno o
        mas de sus miembros (o Parametros en caso de funciones), de esta forma se puede cambiar la clase para
        adaptarla a los diferentes usos sin tener que reescribirla.

        Asi nos ahorramos un monton de codigo en el sentido que vamos a crear plantillas para funciones o clases
        de tal manera que puedan ser usadas por diferentes tipos de datos, si no tenemos que rescribir la funcion
        para distintos tipos de datos, ni redefiniendo la clase para diferentes tipos d edatos

        La razon de la generacidad se basa en que los algortimos de resolucion de numerosos problemas no dependen 
        dl tipo de dato que procesan y sin embargo cuando se implementan en un lenguaje de programacion, los
        programas que resuelven cada algoritmo seran diferentes para cada tipo de dato que procesan

    Plantillas de Funciones:
        Es un modelo de funcion que el compilador de C++ usara para construir diferentes versiones de una misma
        funcion, segun los tipos de datos que se especifiquen al invocar la misma. La plantilla permite escibir
        funciones que difieren exclusivamente en el tipo de dato que manejan.

        Asi no tenemos que crear una funcion para cada tipo de dato especifico

        Para definirlo tenemos dos sintaxis:
            1. template<class T1, class T2, ..., class Tn>
                T1 seria el nombre que queramos como identificador, indicandole que puede ser un tipo de dato generico
                (int, float, char, double, blob), cada "class Tn" serian diferentes tipos de datos genericos
            2. template<typename T1, typename T2, ..., typename Tn>
                
                Podemos usar Class o Typename porque son practicamente lo mismo pero como RECOMENDACION
                es que usemos "CLASS" cuando vayamos a crear plantillas de clases y el TYPENAME para crear
                plantillas de Funciones
*/

// Ejemplo Crear Una Plantilla de Una Funcion
// Determinar el mayor de dos elementos
#include<iostream>
#include<stdlib.h>

using namespace std;

// Plantilla de Funcion
//template<class T, class T2> // Este T seria el dato generico que puede tomar cualquier tipo de dato
//template<typename T, typename T2> // Esto es recomendado para plantillas de funcion

// Funcion con el tipo de dato generico
/*T mayor(T dato1, T2 dato2){
    if(dato1 > dato2){
        return dato1;
    }else{
        return dato2;
    }
}*/
// Las plantillas de funcion como buena practica nunca se declarar junto al MAIN sino en un archivo Header File ".h"
// como el que creamos para crear la clases
#include "0_PlantillaFuncion.h"

int main(){
     // Posible Error que nos podria ocurrir en las plantillas de Funciones
    // Aqui le mandamos un entero pero como segundo parametro un valor flotante
    // Esto dara ERROR porque solo especificamos en "template" un tipo de datos generico
    // con lo cual dato1 y dato2 deberian de ser del mismo tipo de dato ("T" solo puede tomar la forma de un solo tipo de dato)
    //cout<<"El mayor de dos numeros enteros es: "<<mayor(5, 9.56);

    // Solucion crear otro tipo de dato generico "class T2" y se cambio en la funcion que antes era solo T para los dos parametros
    cout<<"El mayor de numeros entero y numero Float es: "<<mayor(5, 9.56);
    cout<<"El mayor de dos numeros enteros es: "<<mayor(5, 9);
    cout<<"El mayor de dos numeros Reales es: "<<mayor(8.98, 4.563);
    cout<<"El mayor de dos caracteres es: "<<mayor('a', 'z');

    system("pause");
    return 0;
}