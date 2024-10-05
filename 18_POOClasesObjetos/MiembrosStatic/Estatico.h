#include<iostream>
#include<string>

using namespace std;

class Estatico{
    private:
        /*
            Declaracion de Atributo Estatico

            Anteriormente cuando creamos un objeto de una clase, cada uno de los objetos tomaba una copia
            tanto de atibutos como de meotodos para el solamente, siempre y cuando todo lo que contenia la clase
            no tenga algo estatico (Es decir cada objeto tiene sus Atributos y metodo propios) 
            Pero cuando hay atributos de tipo estatico entonces los objetos ya no toman ese atributo para si mismos
            y le dan el valor que quieren sino que los atributos de tipo estatico le pertenecen a la clase NO A LOS OBJETOS

            Todos los objetos tendran el mismo valor para ese atibuto statico

            Para inicializar los atributos de tipo statico No se puede hacer dentro de la clase
            asi que debemos hacerlo afuera crando otro archivo de tipo .cpp
        */
        static int contador; // Atributos Estatico
        //string nombre; // Atributo Normal
    public:
        // Vamos a hacer que cada ves que se crea un objeto, contemos cuantos se han creado
        Estatico(){
            // Cada vez que creemos un objeto, automaticmante este valo aumenta
            contador++;
        }

        int getContador(){
            return contador;
        }

        /*
                Metodos Estaticos

           El ser estatico le pertenece a la clase NO A LOS OBJETOS

           Con lo cual para utilizar los metodos estaicos ateriormente siempre para usar los metodos teniamos que
           crear un objetos e instanciar de la clase y con ese objeto llamar al meotodo, pero AHORA podemos llamar el metodo
           sin instanciar un objeto, llamando directamente la clase y al metodo
        */
       static int suma(int n1, int n2){
            return n1+n2;
       }
};