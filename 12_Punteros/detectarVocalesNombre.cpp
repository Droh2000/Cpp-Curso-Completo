#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>

using namespace std;

void pedirNombre();
int contarVocales(string *);
//int contarVocales(char *); -> Aqui le pasamos la pocicion inicial donde empieza la cadena 

string nombre, *dirNom;
//char nombre[30];

int main(){

    pedirNombre();
    cout<<"Tiene: "<<contarVocales(dirNom)<<" vocales"<<endl;
    // Con Char
    // contarVocales(nombre) -> Le tenemos que enviar una pocicion de memoria pero una cadena de tipo Char
    //                          es como si fuera un arreglo como: nombre = &nombre[0] -> aqui ya por defecto 
    //                          le pasamos como si declararamos la variable asi

    system("pause");
    return 0;
}

void pedirNombre(){
    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
    //cin.getline(nombre, 30, '\n')
    //strupr(nombre); -> Convertiendo a mayusulas todo

    dirNom = &nombre; // Aqui almacenamos la direccion de memoria
}

int contarVocales(string *nom){
    int cont = 0;
    for(char& c : *nom) {
        char *letra = strlwr(&c); // Convertir todo a minusculas
        switch(*letra){
            case 'a':
                cont++;
                break;
            case 'e':
                cont++;
                break;    
            case 'i':
                cont++;
                break;
            case 'o':
                cont++;
                break;
            case 'u':
                cont++;
                break;    
            default:
                break;
        }
    }
    // En el caso de trabajar con Char
    /*
        while(*nombre){ // Mientra el nombre no sea nulo '\0' -> este es el simbolo con el que terminan
            switch(*nombre){
                ...
            }
            nombre++;
        }
    */
    return cont;
}