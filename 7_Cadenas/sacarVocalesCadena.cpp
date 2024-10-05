#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char cad[30];
    int con=0;

    cout<<"Ingrese una cadena de caracteres: ";
    cin.getline(cad,30,'\n');
    strlwr(cad);

    for(int i=0;i<strlen(cad);i++){
        switch (cad[i])
        {
        case 'a':
            cout<<"Tiene la vocal A"<<endl;
            ++con;
            break;
        case 'e':
            cout<<"Tiene la vocal E"<<endl;
            ++con;
            break;
        case 'i':
            cout<<"Tiene la vocal I"<<endl;
            ++con;
            break;
        case 'o':
            cout<<"Tiene la vocal O"<<endl;
            ++con;
            break;
        case 'u':
            cout<<"Tiene la vocal U"<<endl;
            ++con;
            break;              
        default:
            break;
        }
    }

    cout<<"La cadena ingresada en total tiene "<<con<<" vocales"<<endl;

    system("pause");
    return 0;
}