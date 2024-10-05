#include<iostream>
#include<conio.h>
#include<iterator>
#include<map>// Para el map y Multimap
#include<string>
using namespace std;

// Para no tener que estar especificando: pair<clave, valor>
// Con esto definimos una estructura y la llamamos con un alias para solo usar el nombre
typedef pair<int, string> par;

int main(){
    // Almacenar elementos con clave (Clave:Valor)
    // Se le especifica <Clave, Valor>
    map<int, string> valores; // Estos se orden segun la clave

    // Agregando elementos
    // Por la forma se agrega la estructura "pair" indicandole el tipo de dato de la clave y valor
    // entre parentesis se pasa el contenido a almacenar
    valores.insert(pair<int, string>(5,"Abeja"));
    valores.insert(pair<int, string>(2,"Becerro"));
    valores.insert(pair<int, string>(1,"Obeja"));
    // Usando solo la estructura
    valores.insert(par(3,"Borrego"));

    // Aqui no podemos insertar claves duplicadas si lo hacemos no pasa nada
    valores.insert(par(3,"Mariposa"));

    // Modificar un valor de una clave existente
    // Modifcando la clave 1
    valores[3] = "Mariposa";
    
    // Tambien de esta forma podemos insertar nuevo valores
    valores[4] = "Polilla"; // Lo mejor es solo usar esta forma para modificar

    // Conforme vayamos insertando los elementos se ordenan automaticamente segun la clave
    // Mostrar el Map en pantalla
    // Creamos un iterador
    map<int, string>::iterator i;
    // Usnaod bucle For
    for (i = valores.begin(); i  != valores.end(); i++){
        // La estructura Pair tiene dos partes (La primera y la segunda)
        // Primera(First) es la clave y la segunda(Second) es el valor
        cout<<"Clave: "<<i->first<<", Valor: "<<i->second<<endl; 
    }
    cout<<endl;

    // Buscar un determinado valor 
    // Usamos el iterador que ya habiamos creado anteriormente
    i = valores.find(2);// Buscamos el valor que tiene la clave 2

    if(i != valores.end()){
        cout<<"Valor encontrado "<<i->second<<endl;
    }else{
        cout<<"Valor no encontrado "<<endl;
    }

    // Elminar un elemento del Map
    // Se borra segun la clave
    valores.erase(1);

    getch();
    return 0;
}