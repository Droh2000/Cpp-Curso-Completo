#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char cat[30], cat2[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(cat,30,'\n');

    strcpy(cat2, cat);

    if(strcmp(strrev(cat),cat2)==0){
        cout<<"Las palabras son Polindromas";
    }else{
        cout<<"Las palabras no son polindromas";
    }

    cout<<endl;
    system("pause");
    return 0;
}