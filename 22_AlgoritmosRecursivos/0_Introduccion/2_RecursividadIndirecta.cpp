/*
    Recursividad Directa

    Es lo que habiamos anteriormente donde cada funcion se llamaba a si misma pero
    dentro de la misma funcion

Recursividad Indirecta (Funciones Mutuamente Recursivas)

    Ya no se puede hacer con una sola funcion sino que se requieren de dos a mas funciones, esta recursividad se produce
    cuando una funcion llama a otra que eventualmente terminara llamando de nuevo a la primera funcion, supongamos
    tenemos una funcion1 y esta va a llamar a funcion2 y esta funcion2 a su vez va a llamar a la funcion1 y asi se va a dar
    un bucle recursivo, esto se tiene que detener en algun momento cuando lleguen a la caso base y saldra el resultado

    Ejemplo:
        Hacer un programa que muestre al alfabeto caracter a caracter, utilizando recursividad mutua o indirecta (Se le llama como estos dos nombres)
        
*/
#include<iostream>
#include<conio.h>
using namespace std;

void funcionA(char);
void funcionB(char);

int main(){
    cout<<"Alfabeto: "<<endl;
    funcionA('Z'); // Empezamos con la ultima letra
    cout<<endl;

    getch();
    return 0;
}

void funcionA(char letra){
    // Aqui el caso base esta escondido porque siempre que letra sea mayor a A 
    // se manda a llamar a la funcionB pero cuando sea igual a A -> ese sera el caso Base
    // ahi ya no entra a la condicion imprimiendonos el valor de A y continuando imprimiendo
    // todos los demas valores que quedaron en el aire
    if(letra > 'A'){
        funcionB(letra);
    }

    // Imprimimos todas las letras que vamos dejando por el camino
    cout<<letra<<endl;
}

void funcionB(char letra){
    // le vamos a disminuir la letra que el usario nos a enviado en 1
    funcionA(--letra); // Asi si empieza con la Z se disminuye a la Y y continua
}