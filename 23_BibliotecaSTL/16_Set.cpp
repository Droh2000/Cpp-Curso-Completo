#include<iostream>
#include<conio.h>
#include<iterator>
#include<algorithm>
#include<set>// Para Set y MultiSet
using namespace std;

int main(){
    /*
        Set es conjunto
        Vamos a poder agregar elementos y esos elementos conforme se inserten
        se van a ir ordenando automaticamente y ademas una caracterstica de este
        conjunto es que no podemos agregar valores duplicados
    */
    set<int> valores; // Creando un conjunto de datos

    // Insertando elementos
    // Aqui solo existe el insert
    valores.insert(5);
    valores.insert(3);
    valores.insert(21);
    valores.insert(1);
    valores.insert(6);

    // Si insertamos un valor que ya existe lo ignora
    valores.insert(3);
    valores.insert(1);

    // Motrando por pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    cout<<endl;

    // Busquedad de un determinado valor
    // Al iterador le damos la posicion inicial 
    // Con la funcion "find()" buscamos que nos retorna un iterador (La posicion donde esta elemento)
    set<int>::iterator i = valores.find(3);

    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<<" si se encontro";
    }else{
        cout<<"\nEl elemento no se encontro";
    }

    // Elminacion de un elemento
    valores.erase(1);
    // Mostramos
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    cout<<endl;

    getch();
    return 0;
}