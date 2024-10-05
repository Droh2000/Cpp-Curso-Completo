/*
    Recursividad (Funcion que se manda a llamar a si misma)

    Factorial de un Numero: 3! = 3*2*1 == 3*2!
        factorial(n) = 1                , s1 n=0
                       n*factorial(n-1) , si n>0     
    
        Necesitamos dos casos: El Base y el General
            El Base: el 0! = 1
            El General: numero > 0 entonces n*factorial(n-1)
*/

#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);

int main(){

    cout<<"El Factorial es:"<<endl;
    cout<<factorial(3)<<endl;

    getch();
    return 0;
}

int factorial(int n){
    // Empezamos con nuestro caso base
    if(n==0){
        n = 1;
    }else{
        // Caso General
        n = n * factorial(n-1); // Aqui mandamos a llamar la funcion
    }
    return n;

    /*
            FUNCION DE LA FUNCION

        n = 3
        Se va al ELSE que es 3 * 2! -> Vuelve a llamarse la funcion
        Se va al ELSE y es: 2 * 1! -> Vuelve a llamar la funcion
        Se va al ELSE y es: 1 * 0! -> Vuelve a llamar la funcion
        Ahora cumple con el caso Base, entra al if y n=1

        Despues se va para atras y retorna el valor que obtiene
            return 0 en 1 * 0! = 1 * 1
            return 1 (Resultado anterior) en 2! = 2 *1! = 2 * 1
            return 2 en 3! = 3 * 2! = 3 * 2
            return 6 -> Como ya no hay otra llamada esto es el resultado de la funcion principal

            n = 6    
    */
}