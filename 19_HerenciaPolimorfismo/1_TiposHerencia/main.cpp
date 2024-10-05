/*
        Tipos de Herencia

    Ya habiamos visto los tipos de accesos Publicos, Privada, Protegida, pues en relacion a esto
    existen los tres tipos de herencias:

    Herencia Publica:
        Significa que una clase derivada tiene acceso a los elementos publicos
        y protegidos de su clase base. Los elementos publicos se heredan como 
        elementos publicos, los elementos protegidos permanecen protegidos y los
        privados no se heredan

        Ejemplo de aplicacion:
            class NombreClase : public ClasePadre{
                private:

                public:

                protected:
            }
        En pocas palabras todo los publico de la clase padre y todo lo protegido se herdan de la clase hija
        excepto los privados (Hay que entender que los atributos privados no se pueden acceder directamente pero si se pueden
        modificar por medio de los metodos setters y getters)
    
    Herencia Privada:
        Los miembros publicos y protegidos de la clase padre se vuelven privados de la clase hija. La clase hija
        no tiene acceso a las facilidades proporcionadas por la clase base, los miembros privados de la clase padre
        son inaccesibles a las funciones miembro de la clase hija

        Ejemplo:
            class ClaseHija : private ClasePadre{
                private:

                public:

                protected:
            }
        Todo los publico y protected de la clase padre se hereda como privado y lo que este privado de la clase padre
        van a ser inaccesibles
    
    Herencia Protegida:
        Lo que este como protegido y publico de la clase padre se convierte en protegidos para la clase
        hija y lo que este como privado en la padre se vuelven inaccesibles

        Ejemplo:
            class ClaseHija : protected ClasePadre{
                private:

                public:

                protected:
            }
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){


    system("pause");
    return 0;
}