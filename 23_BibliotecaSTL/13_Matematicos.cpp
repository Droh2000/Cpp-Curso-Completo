#include<iostream>
#include<conio.h>
// Este porque tendremos un archivo txt donde tenemos numeros flotantes
// Vamos a pasar del archivo de texto hacia un vector
#include<fstream> 
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric> // Para usar la funcin accumulate
using namespace std;

// Funcion logica para comprobar si un numero es psotivo
template<typename T>
bool esPositivo(T valor){
    return (valor>=0);
}

int main(){
    // De tipo float porque son los tipos denumeros que tiene el archivo
    vector<float> numeros;

    // Abrimos el archivo en modo lectura
    ifstream archivo("archivoNumeros.txt", ios::in);
    
    // Copiar todos los elementos del archivo al vector
    // Pasamos desde donde hacia donde queremos copiar (Del archivo al vector) entonces necesitamos un iterador 
    // para recorrer archivos con iteradores
    // istream_iterator<float>(archivo) -> Ponemos el iterador desde el inicio del archivo
    // istream_iterator<float>()        -> Le decimos aqui que debe de llegar hasta el final del archivo de texto (Al no poner nada entre parentesis estaria señalando a NULL)
    // back_inserter(numeros)           -> Para copiar el contenido dentro del vector, esta funcion funciona como un iterador que al inicio apunta al inicio del contenedro y despues avanza conforme se almacenan valores
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));

    // Operaciones Matematicas

    // Calculamos el maximo y minimo de los elementos del vector
    // Le paamos de donde hacia donde comprueba el maximo y nos retorna un iterador apuntando al valor mayor por eso se le pone el astedisco
    // esto es lo mismo para la funcion minimo
    cout<<"Maximo: "<<*max_element(numeros.begin(), numeros.end());
    cout<<"\nMinimo: "<<*min_element(numeros.begin(), numeros.end());

    // Calcular el valor promedio de todos los elementos que hay en el vector
    // Para esto nesecitamos sumar todos los elementos y luego dividirlo entre la cantidad que hay
    cout<<"\nValor Promedio:"<<endl;
    // Esta funcion nos calcula la sumatoria de todos los elementos que hay en el contenedor
    // Se le pasa de donde a donde a recorra (Sume los elementos que encuentre) y ademas el valor inicion con el que empeize la suma
    cout<<accumulate(numeros.begin(), numeros.end(), 0.0)/numeros.size()<<endl;// Dividimos entre el tamaño que tiene el vector

    // Contar solo los numeros positivos
    cout<<"Cantidad de numeros positivos: "<<endl;
    // Funcion para contar cuantos elementos cumplen con un criterio que le vamos a decir
    // Queremos contar desde que el vector inicie hasta que termine, despues le pasamos la funcion logica
    // que nos comprueba si los numeros son positivos o no
    cout<<count_if(numeros.begin(), numeros.end(), esPositivo<float>)<<endl;// Esta funcion nos retorna un entero contabilizando los valores segun la funcion esPositivo

    getch();
    return 0;
}