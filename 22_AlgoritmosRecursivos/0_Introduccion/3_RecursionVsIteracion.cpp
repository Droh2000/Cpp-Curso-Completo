/*
                Recursion VS Iteracion
    
    En las secciones anteriores se han estudiado varios algorimos que se pueden implementar
    facilmente de modo recursivo o bien de modo iterativo, en esta parte se compararan los 
    dos enfoques y se examinan las razones por las que el programador puede elegir un enfoque
    u otro segun la situacion especifica.

    Tanto en la iteracion como en la recursion se utilizan sentencias de control, en la iteracion
    la de control seria la condicion que esta dentro del bucle y cuando no se cumple se termina
    la iteracion, en la recursion tambien se utilizan sentencias de control como condicional para 
    definir el caso recursivo o el caso base y con eso sabiramos cuantas vueltas va a hacer

    La recursion tiene muchas desventajas, se invoca repetidamente al mecanismo de llamada a funcion
    y en consecuencia, se nesecita un tiempo suplementario para realizar cada llamda. Esta caracteristica
    puede resultar cara en tiempo de procesador y espacio de memoria, porque como se llama la funcion
    en cada llamada se crea una copia exacta de dicha funcion con toda su logica de programacion que tenga
    y eso nos podria saturar el rendimiento.

    Entonces ¿Cuales son las razones para elegir la recursion? 
    La razon fundamental es que existen numerosos problemas complejos que poseen naturaleza recursiva y en 
    consecuencia son mas faciles de implementar con algoritmos de este tipo.
    Ya habiamos dicho que existen algoritmos como el divide y venceras y backtraking que funcionan con recursion
    ademas hacer estos y otros algoritmos complejos de forma iterativa que van a ser muy complicados de entenderlos
    y eso de tener un algoritmo que no entendamos como funciona no es Bueno que al hacerlos de forma recursiva
    se entiende mejor su logica a simple vista.

    Ejemplo para resolver un problema con Iteracion como con Recursividad

    Si tenemos un algoritmo iterativo tambien podemos sacar su algoritmo recursivo que de manera contraria
    se aplica tambien.

    Problema:
        Dado un numero natural N, obtener la suma de los digitos de que consta. Presentar un algoritmo recursivo
        y otro iterativo (Natural quiere decir que va a ser un numero positivo, y la suma seria por ejemplo: 25 = 2 + 5 = 7)
*/
#include<iostream>
#include<conio.h>

using namespace std;

// Solucion Recursiva
int sumaRecursiva(int n){ // n es elemento que queremos obtener la suma de sus digitos  
    // Case Base
    // Cuando sea un numero de una sola cifra, desde 1 hasta 9
    if(n <= 9){
        return n; // En este caso la suma de sus digitos es igual al mismo numero
    }else{
        // Caso Recursivo
        // Tenemos que descomponer el numero y en cada descompocicion se tiene que ir sumando
        // Ejemplo: n = 123 -> 123%10 = 3, 12/10 a la siguiente vuelta: 2+3 y quedandonos solo el 1 se sumaria al final
        return sumaRecursiva(n/10) + n%10;
    }
}

// Solucion Iterativa
int sumaIterativa(int n){
    int suma = 0;
    while(n > 9){ // Mientras tenga mas de una cifra el numero
        suma += n%10;
        n /= 10;
    }
    // Returnamos la suma mas el ultimo digito de una sola cifra que nos queda
    return (suma+n);
}

int main(){
    // Este numero vamos a encontrar la suma de sus ciras
    int num;

    cout<<"Digite un numero: "<<endl;
    cin>>num;

    cout<<"La suma de los digitos del numero es: "<<endl;
    cout<<"Algoritmo Recursivo: "<<sumaRecursiva(num)<<endl;
    cout<<"Algoritmo Iterativo: "<<sumaIterativa(num)<<endl;

    getch();
    return 0;
}

/*
            ¿CUAL ES MEJOR DE UTILIZAR?
    
    Esto dependera de nosotros asi que veamos algunas pautas para tomar la decision

        * Considere la solucion recursiva solo cuando una solucion iterativa sencilla no sea posible
        
        * Utilizar una solucion recursiva solo cuando la ejecucion y eficiencia de la memeoria de la solucion
          este dentro de limites aceptable considerando las limitaciones del sistema (si el ejemplo es sencillo 
          y no seran tantas llamadas a la funcion podremos usar recursiva)
        
        * Si son posibles las dos soluciones (Iterativa y Recursiva), la solucion recursiva siempre requerira 
          mas tiempo y espacio debido a las llamadas adicionales a las funciones
        
        * En ciertos problemas la recursion conduce naturalmente a soluciones que son mucho mas fiables de leer
          y comprender que su correspondiente iterativa. En estos casos los beneficios obtenidos con la claridad 
          de la solucion suelen compensar el coste extra (En tiempo y memoria) de la ejecucion de un programa recursivo

    Solo hay que recordar que la recursiva es mucho menos eficiente que la iterativa pero si el problemas que se nos pide
    lo podemos solucionar mas rapidamente de manera recursiva porque podemos entender el algoritmo tan facil y las llamadas
    a la funcion no seran muchas podemos usar las recursividad sin problemas porque el coste extra no sera mucho
*/
