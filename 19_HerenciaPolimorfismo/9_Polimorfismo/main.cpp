/*
                    POLIMORFISMO
    
    Permite que diferentes objetos respondan de modo diferente al mismo mensaje.
    El polimorfismo adquiere su maxima potencia cuando se utiliza en union de la herencia

    Para usarlo se deben seguir las siguientes Reglas:
        1. Crear una jerarquia de clases con las operaciones importantes definidas por las funciones miembro
           declaradas como virtuales en la clase padre (Aqui vamos a tener los metodos mas importantes como virtuales
           que despues se definiran en sus clases hijas)
        2. Las implementaciones especificas de las funciones virtuales se deben hacer en las clases hijas. Cada clase hija
           puede tener su propia version de las funciones
    
    Ejemplo de Uso:
        Tenemos:
            - Clase Poligono: Con dos funciones "perimetro" y "area" que al ser genericas se convierten en virtuales
                             por tanto esta es una clase abstracta
            - Clase Rectangulo: Clase hija de poligono con sus propios atributos y donde si se pueden definir los metodos
                                de la clase abstractoa
            - Clase Triangulo: Clase hija de poligono que igualmente puede definir sus metodos virtuales
        
        Ahora que tail si creamos un arreglo de objetos de la clase Poligono, si bien habiamos visto que no se pueden instanciar
        objetos de la clase abstracta pero aqui estamos creando solo el objeto.
        Hay diferencia entre crear objetos e instancias objetos de una abstracta no se pueden instanciar pero si crear
            Ejemplo:
                - Poligono *poligonos[2]; (Creacion de un objeto)
                - poligonos[0] = new Rectangulo(7,4); (Instansiacion de un objeto)
                    Esto es el polimorfismo gracias a la herencia (El rectangulo se comporta como poligono)
                - poligonos[0] = new Triangulo(7,4);

            Como ventaja de usar el polimorfismo ahora solo hacemos un bucle para imprimir los datos de cada uno de los poligonos

            Aqui esta pasando lo de la definicion, estamos mandando un mensaje de calcular el areao o perimtero y los objetos van a responder 
            de manera diferente ante el mensaje porque cada uno a implementado lo metodos virtuales de forma diferente, la llamada se 
            comportara diferente segun el objeto que se corresponda que son ademas diferentes objetos
*/
#include<iostream>
#include<conio.h>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main(){
    // Creamos un arreglo de objetos de la clase abstracta
    Poligono *p[2]; 

    // Uso del Polimorfismo
    // Instanciamos del arreglo objetos de las clases hijas
    p[0] = new Rectangulo(7, 5);
    p[1] = new Triangulo(3,4,4);

    for (int i = 0; i < 2; i++){
        // Estos metodos Area y Perimetro seran usado de diferente manera para instancia del objeto
        cout<<"Area: "<<p[i]->area()<<endl;
        cout<<"Perimetro: "<<p[i]->perimetro()<<endl;
    }
    

    getch();
    return 0;
}