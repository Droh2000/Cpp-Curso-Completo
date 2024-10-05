#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char word[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(word,30,'\n');

    if(strlen(word)>10){
        cout<<"Palabra: "<<word<<endl;
    }else{
        cout<<"No supera los 10 caracteres";
    }

    getch();
    return 0;
}