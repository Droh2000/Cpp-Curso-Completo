#include<iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"
using namespace std;

// Como ambas clases son del mismo tipo publicas con ponerlo una vez es suficiente si fueran diferens si se especifica
class ClaseDerivada : public ClaseBase1, ClaseBase2{
    protected:
        // Vamos a crear una ambiguedad llamando los dos atributos igual
        int x; 
    
    public:
        // Como en las tres se llama igual, no podemos llamaro int x int x, int x
        // le trendemos que poner otro nombre como atributos del consttructor
        ClaseDerivada(int x1, int x2, int x) : ClaseBase1(x1), ClaseBase2(x2){
            this->x = x;
        }

        ~ClaseDerivada(){}

        //          SOLUCION A NIVEL DE ATRIBUTOS
        // Podriamos pensar que aqui hay una ambiguedad pero C++ sabe muy bien a cual X 
        // nos referimos que es el de esta clase
        // Si no especificamos Nada esto nos muestra el valor de la clase hija
        
        // Pero si queremos el valor de alguna de la clase padre usamos el operador de resolucion de ambito 
        /*int getx(){
            return ClaseBase1::x; // Lo mismo seria si queremos el de otra clase padre
        }*/

       //          SOLUCION A NIVEL DE METODOS
       int getX(){
            // Por defecto sin especificar nada al llamar el metodo desde el objeto nos saldra el valor de la clase hija
            //return x;

            // Aqui nos dara Error C++ porque se llama igual en las claes padre
            //return getX();

            // LA solucion es el operador de ambito especificando la clase padre
            return ClaseBase1::getx();
       }
};