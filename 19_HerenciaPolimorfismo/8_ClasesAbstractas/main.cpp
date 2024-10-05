/*
                CLASES ABSTRACTAS
    
    Se utilizan solo como clase padre
    No se pueden instancias objetos
    Sirven para proporcionar una clase padre apropiada a partir de la cual 
    heredan otras clases

    METODOS VIRTUALES
        Tenemos un metodo muy generico que no se puede desarrollar en su clase y por
        consecuencias estaria en la clase abstracta de la cual van a heredar hijas para 
        entonces si poder implementar ese metodo segun el contexto

        Entonces como ese metodo es muy generico y no se puede implementar pero nesecitamos
        definirlo, por tanto este metodo sera UN METODO VIRTUAL

        Los metodos virtuales si se tendra que definir dentro de la clase pero NO implementado
        y por tanto se implementara pero en las clases hijas, ademas una clase automaticamente 
        al tener un metodo virutal pasa a ser una clase abstracta (Nos sirve como un bosquejo para clases hijas)

        Resulta que si de la clase abstracta principal hereda otra clase la cual por consecuencia obtiene el mismo metodo
        virtual pero resulta que este metodo no se podra implementar tampoco en la clase hija porque queda muy generico por
        tanto el metodo se queda como virutal y la clase hija pasaria a ser clase abstracta entonces de ahi saldrian hijas 
        que si podrian implementar ese metodo
*/
#include<iostream>
#include<conio.h>
#include "Planta.h" 
#include "AnimalCarnivoro.h" 
#include "AnimalHerbivoro.h" 

using namespace std;

int main(){
    Planta *p = new Planta();
    AnimalCarnivoro *ac = new AnimalCarnivoro();
    AnimalHerbivoro *ah = new AnimalHerbivoro();

    p->alimentarse();
    ac->alimentarse();
    ah ->alimentarse();
    
    delete p;
    delete ac;
    delete ah;
    getch();
    return 0;
}