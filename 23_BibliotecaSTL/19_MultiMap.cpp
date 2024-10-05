// En este si podemos agregar clave repitidas
#include<iostream>
#include<conio.h>
#include<iterator>
#include<map>// Para el map y Multimap
#include<string>
using namespace std;

typedef pair<int, string> par;

int main(){
    multimap<int, string> valores;

    // Insertar Valores
    valores.insert(par(3, "nada"));
    valores.insert(par(1, "noda"));
    valores.insert(par(5, "desde"));
    valores.insert(par(4, "noade"));

    // Agregando claves repetidas (De igual forma los va ordenando por clave)
    valores.insert(par(1, "verses"));
    valores.insert(par(5, "desfer"));
    valores.insert(par(5, "quiensabe"));

    // Mostrar en pantalla
    multimap<int, string>::iterator i;
    for (i = valores.begin(); i  != valores.end(); i++){
        cout<<"Clave: "<<i->first<<", Valor: "<<i->second<<endl; 
    }
    cout<<endl;

    // Contar cuantas veses aparece una determinada clave
    // Ademas podemos podemos mostrar todos los valores que tiene esa clave
    int clave = 5; // Esta es la clave a contar
    cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave);
    // Mostrar los elementos
    // lower_bound -> Nos retorna un iterador apuntando a la primera coincidencia de la clave que estamos buscando
    // upper_bound -> Para seleccionar el elemento siguiente despues de encontrar la clave (llegue hasta la ultima coincidencia donde esta la clave)
    for (i = valores.lower_bound(clave); i  != valores.upper_bound(clave); i++){
        cout<<"Valor: "<<i->second<<endl; 
    }
    cout<<endl;

    return 0;
}