#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char cad1[30], cad2[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(cad1,30,'\n');
    cout<<"Ingrese otra palabra: ";
    cin.getline(cad2,30,'\n');

    strupr(cad1); strupr(cad2);

    if(strcmp(cad1,cad2) == 0){
        cout<<"Las cadenas son iguales"<<endl;
    }else{
        cout<<"Las cadenas no son iguales"<<endl;
    }

    system("pause");
    return 0;
}