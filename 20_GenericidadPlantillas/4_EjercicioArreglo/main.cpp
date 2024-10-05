#include<iostream>
#include<stdlib.h>
#include "Arreglo.h" 

using namespace std;

void opciones(){
    cout<<"\t\nMENU:"<<endl;
    cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
    cout<<"2. Comprobar el espacio en el arreglo"<<endl;
    cout<<"3. Ver Arreglo"<<endl;
    cout<<"4. Vaciar el arreglo"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Ingrese la Opcion: ";
}

int main(){
    // Tenemos un arreglo de 5 elementos que por el momento es de tipo INT
    Arreglo <int> arr1(5);
    int opc;

    do{
        opciones();
        cin>>opc;
        //cout<<endl;

        switch (opc){
        case 1:
            // Si el arreglo ya esta lleno no podremos agregar mas elementos
            if(!arr1.arregloLleno()){
                int dato;
                cout<<"\nIngrese el valor a ingresar: ";
                cin>>dato;
                arr1.agregar(dato);
            }else{
                cout<<"\nEl arreglo ya esta lleno"<<endl;
            }
            break;
        case 2:
            if(!arr1.arregloLleno()){
                cout<<"\nAun queda espacio en el arreglo"<<endl;
            }else{
                cout<<"\nEl arreglo ya esta lleno"<<endl;
            }
            break;    
        case 3:
            cout<<"\nMostrando los elementos del arreglo: "<<endl;
            arr1.mostrarArreglo();
            break;
        case 4:
            cout<<"\nSe eliminaron todos los elementos del arreglo"<<endl;
            arr1.vaciarArreglo();
            break;            
        case 5:
            break;    
        default:
            cout<<"\nOpcion fuera de rango"<<endl;
        }
        //cout<<endl;
        //system("pause");
        //system("cls");
        
    } while (opc >= 1 && opc<=4);
    
    cout<<endl;
    system("pause");
    return 0;
}