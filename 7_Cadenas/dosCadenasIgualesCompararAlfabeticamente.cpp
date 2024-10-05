#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char word1[30], word2[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(word1,30,'\n');

    cout<<"Ingrese otra palabra: ";
    cin.getline(word2,30,'\n');

    if(strcmp(word1, word2) == 0){
        cout<<"Ambas cadenas con iguales";
    }else{
        if(strcmp(word1, word2) > 0){
            cout<<"La palabra "<<word1<<" es mayor alfabeticamente"<<endl;
        }else{
            cout<<"La palabra "<<word2<<" es mayor alfabeticamente"<<endl;
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}