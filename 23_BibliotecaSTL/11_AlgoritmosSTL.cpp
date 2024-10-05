#include<iostream>
#include<conio.h>
#include<list> // Para crear una lista  
#include<iterator>
#include<algorithm> // Acceder a las funciones
#include<cstdlib> // Para poder usar el Rand
using namespace std;

int numeroAleatorio(){
    return rand()%10;// Numeros entre 1 y 10
}

int main(){
    list<int> valores(10); // Lista de 10 elementos enteros

    // Generar 10 numeros aleatorios para meterlos dentro de la lista
    // Pasar RangoInicio y RangoFinal del contenedor y despues pasarle 
    // una funcion que nos genere los elementos (No se especifican los parentesis, solo se pasa el nombre de la funcion)
    generate(valores.begin(), valores.end(), numeroAleatorio);
    
    // Con lo de arriba ya tenemos en la lista 10 elementos

    // Mostrar los elementos en pantalla
    // Para eso vamos a usar el iterador
    // ostream -> es para la salida de datos por pantalla por eso se le pasa el "cout"
    ostream_iterator<int> salida(cout,"|");// Este iterador nos va apuntar a un ddeterminado contenedor

    // Funcion para copiar valor de un determinad inicio a un final
    // y le indicamos hacia donde los queremos copiar
    copy(valores.begin(), valores.end(), salida);

    // Buscamos la primera aparicion del numero 8 en la lista (Vamos a buscar un numero en la lista)
    // Ahora requerimos un iterador que nos recorra la lista (El de arriba solo es para mostrar de salida)
    list<int>::iterator i;
    // Esta funcion nos retorna un iterador
    // Le pasamos desde que parte a que destino de la lista va a buscar y le pasamos el elemento a buscar
    i = find(valores.begin(), valores.end(), 8);// ESta funcion solo nos encuentra la primera concidiencia 

    // Analizamos si el iterador no sobrepasa los rangos de la lista
    // El iterador tiene la pocicon del elemento que estamos buscando
    if(i != valores.end()){
        cout<<"\nElemento "<<*i<<" si se encontro en la lista"<<endl;
    }else{
        cout<<"\nEl elemento no se encontro"<<endl;
    }

    getch();
    return 0;
}