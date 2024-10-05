#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char word[30], arr[30], arr2[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(word,30,'\n');

    for (int i = 0; i < strlen(word); i++){
        arr[i] = word[i];
    }

    cout<<"\nCadena en el arreglo: ";
    for (int i = 0; i < strlen(word); i++){
        cout<<arr[i]<<" - ";
    }

    // Si lo usamos con arr, al final sale la palabra con una caracter extrano
    strcpy(arr2, word);

    cout<<"\nArreglo Copiado: "<<arr2<<endl;    

    system("pause");
    return 0;
}