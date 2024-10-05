#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>

using namespace std;

void pedirCadena();
void sacarVocales(string *);

string cadena, *c;

int main(){

    pedirCadena();
    sacarVocales(c);

    getch();
    return 0;
}

void pedirCadena(){
    cout<<"Ingrese una cadena de texto: ";
    getline(cin, cadena);

    c = &cadena;
}

void sacarVocales(string *cad){
    int contA = 0,contE = 0,contI = 0,contO = 0,contU = 0;
    for(char& c: *cad){
        char *letra = strlwr(&c);
        switch (*letra){
        case 'a':
            contA++;
            break;
        case 'e':
            contE++;
            break;
        case 'i':
            contI++;
            break;
        case 'o':
            contO++;
            break;
        case 'u':
            contU++;
            break;                
        default:
            break;
        }
    }
    cout<<"Vocales en el Texto: "<<endl;
    cout<<"A: "<<contA<<endl;
    cout<<"E: "<<contE<<endl;
    cout<<"I: "<<contI<<endl;
    cout<<"O: "<<contO<<endl;
    cout<<"U: "<<contU<<endl;
}