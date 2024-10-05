#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char word[]="Hello";

    // Sacar cual es la longitud de la cadena
    int longitud=0;
    longitud = strlen(word);

    cout<<"Numero de caracteres de la cadena: "<<longitud<<endl;

    system("pause");
    return 0;
}