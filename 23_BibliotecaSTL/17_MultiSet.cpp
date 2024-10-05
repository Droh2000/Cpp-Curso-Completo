#include<iostream>
#include<conio.h>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    // La variacion de este es que si podemos agregar valores duplicados
    multiset<int> valores;// Multi Conjunto

    // Agregando Valores
    valores.insert(2);
    valores.insert(5);
    valores.insert(10);
    valores.insert(56);
    valores.insert(15);

    // Agregando valores duplicados o mas
    valores.insert(10);
    valores.insert(15);
    valores.insert(2);
    valores.insert(2);

    //Mostrando en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));
    
    // Buscar un elemento (Encuentra la primera coincidencia ignorando los demas duplicados)
    // Creamos un iterador
    multiset<int>::iterator i = valores.find(2);

    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<<" si se encontro"<<endl;
    }else{
        cout<<"\nEl elemento no se encontro"<<endl;
    }

    // Lo que se puede hacer en el Multiset es hacer un Conteo 
    // Esto no se puede hacer en el SET
    // Contar cuantas veses aparece un determinado elemento
    cout<<"El numero 3 aparece "<<valores.count(3)<<" veces en el MultiSet"<<endl;

    // Eliminar un elemento
    // Si eleminamos un elemento que se repite entonces se borra todas sus repeticiones tambien
    valores.erase(2);
    //Mostrando
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));

    getch();
    return 0;
}