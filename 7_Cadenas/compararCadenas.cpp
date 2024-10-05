
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char word1[]="Hola";
    char word2[]="hola";

    // 0 -> es por si sin iguales
    // 1 -> si las cadenas son diferentes o != 0

    if(strcmp(word1,word2)==0){ 
        cout<<"Ambas cadenas son iguales";
    }else{
        cout<<"Las cadenas no son iguales";
    }

    // La funcion tambien compara cual cadena es mayor a otra alfabeticamente
    char word1[]="becerro";
    char word2[]="avion";

    // Con < seria si word2 es mayor a word1 alfabeticamente
    if(strcmp(word1,word2) > 0){
        cout<<word1<< "Esta despues alfabeticamente";
    }

    getch();
    return 0;
}