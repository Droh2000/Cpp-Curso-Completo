#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[1];
    char club[20];
} c1;

int main(){

    string cat;
    //char categoria[20];

    cout<<"Ingresa los datos del corredor: "<<endl;
    cout<<"Nombre: ";cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: ";cin>>c1.edad;
    //fflush(stdin);
    //cin.ignore(INT_MAX,'\n');
    //cin.clear();
    cout<<"Sexo(M/F): ";cin.getline(c1.sexo,1,'\n');
    cout<<"Club: ";cin.getline(c1.club,20,'\n');

    if(c1.edad <= 18){
        cat = "Juvenil";
        //strcpy(categoria, "juvenil");
    }else if(c1.edad <= 40){
        cat = "Senor";
        //strcpy(categoria, "Senior");
    }else if(c1.edad > 40){
        cat = "Veterano";
        //strcpy(categoria, "Veterano");
    }

    cout<<"Categoria de competicion: "<<cat<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo(M/F): "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;

    getch();
    return 0;
}