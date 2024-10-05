#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int num[] = {1,2,3,4,5};

    // Vamos a crear un puntero para que este nos muestre los valores del arreglo
    int *dir_num;

    // Le decimos donde esta almacenado la direccion de memoria del primer elemento
    // Un array se almacena en pociciones continuas de memoiras entonces si le damos al puntero
    // la primera pocicion de memoria asi podremos recorrerlo
    //dir_num = &num[0]; -> Forma Comun
    // Forma Corta
    dir_num = num;

    cout<<"Elementos del Vector: "<<endl;
    for (int i = 0; i < 5; i++){
        // dir_num le pasamos la primera pocicion pero aumentera 
        // 4 bites y podremo acceder a los otros elementos
        cout<<"Pocicion: ["<<i<<"]: "<<endl;
        cout<<"Valor: "<<*dir_num++<<endl;
        // Aqui veremos que los valores del vector se almacenan en pocicion continuas 
        // y como es de tipo INT cada pocicion equivale a 4 bites
        cout<<"Pocicion de Memoria: "<<dir_num++<<endl;   
    }
    
    system("pause");
    return 0;
}