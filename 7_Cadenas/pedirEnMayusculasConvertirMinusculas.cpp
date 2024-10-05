#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char nom[20];
    char nomM[20];

    do{
        cout<<"Ingrese su nombre en mayusculas: ";
        cin.getline(nom,20,'\n');

        strcpy(nomM, nom);
        strupr(nomM);

    }while(strcmp(nom,nomM) != 0);

    /*if(nom[0]=='A'){
        strlwr(nom);
    }*/

    // Comparar un caracter de la cadena segun la pocicion indicada
    if(strncmp(nom, "A", 1)==0){
        strlwr(nom);
    }

    cout<<"Su nombre es "<<nom<<endl;


    system("pause");
    return 0;
}