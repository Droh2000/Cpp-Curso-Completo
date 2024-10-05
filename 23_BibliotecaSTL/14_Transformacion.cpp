#include<iostream>
#include<conio.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

// Funcion para pasar las letras a mayusculas
// Se le pasa por referencia para que cambie la letra porque esta es una funcion void
void mayusculas(char &letra){ 
    if(letra >= 'a' && letra <= 'z'){
        // Seria como: letra - ('a' - 'A');
        // Cada letra tiene un numero asociado a los caracteres Asii
        // Entonces restando el valor que tiene el caracter asii de una letra minuscula menos el valor de una letra mayuscula
        // Esa resta nos da un numero y eso se lo restamos a la letra y asi la convertimos a mayuscula
        letra -= ('a' - 'A');
    }
}

// Funcion unaria para determinar si una letra es una vocal
char vocales(char letra){
    // Si lo primero es true retornamos la letra que seria la vocal sino retornamos un guion
    return (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') ? letra: '-';
}

int main(){
    vector<char> letras;

    // Generamos letras para el vector
    for (int i = 0; i < 10; i++){
        // Agregaremos a,b,c,... hasta que se completen 10 letras
        letras.push_back('a' + i);
    }

    // Mostrar el vecctor pantalla
    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout,"|"));
    cout<<endl;
    // Por la forma en que metimos los datos, el vector esta ordenado entonces podemos 
    // usar una funcion para desordenarlo

    // Desordenamos el vector letras
    cout<<"Vector desordenado:"<<endl;
    shuffle(letras.begin(), letras.end(), letras);
    // Mostramos
    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout,"|"));
    cout<<endl;

    // Funcion de transformacion individual
    // Transformacion todos los elementos a mayusculas
    // Le pasamos las delimitaciones del vector y le pasamos la funcion que nos convierte a mayusculas
    // Esta funcion toma elemento por elemento del contenedor desde donde le indiquemos y a ese elemento le aplica la funcion que le pasamos
    for_each(letras.begin(), letras.end(), mayusculas);
    cout<<"Vector en mayusculas: "<<endl;
    // Mostramos
    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout,"|"));
    cout<<endl;

    // Buscamos las vocales que hay dentro del vector
    // Imprimimos solo las vocales
    // Le pasamos de donde hasta donde comprobamos 
    // Despues le pasamos donde queremos que vaya todo lo que vamos a poner (Queremos mostrarlo por pantalla)
    // Le pasamos la funcion para que compruebe si es una vocal
    cout<<"Vocales del Vecotr"<<endl;
    transform(
        letras.begin(), letras.end(),
        ostream_iterator<char> (cout,"|"),
        vocales
    );// Compruebe cada uno de los elementos del contenedor si cumple la funcion "vocales" nos sale la letra sino es un guion

    getch();
    return 0;
}