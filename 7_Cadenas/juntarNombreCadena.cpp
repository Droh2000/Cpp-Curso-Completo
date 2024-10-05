#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char cad1[]="Hola que tal ";
    char nom[20];

    cout<<"Ingresa tu nombre: ";
    cin.getline(nom, 20, '\n');

    strcat(cad1, nom);

    cout<<cad1<<endl;

    system("pause");
    return 0;
}