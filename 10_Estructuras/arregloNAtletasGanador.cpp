#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct atleta{
    string nombre;
    string pais;
    int numMedallas;
};

int main(){
    int n, ganador = 0, pos = 0;
    cout<<"Ingrese el numero de atletas: ";
    cin>>n;

    atleta *a = new atleta[n];

    cout<<"Ingrese la informacion de los Atletas: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Nombre: ";
        cin >> a[i].nombre;
        cout<<"Pais: ";
        cin >> a[i].pais;
        cout<<"Numero de medallas: ";
        cin>>a[i].numMedallas;

        if(a[i].numMedallas > ganador){
            ganador = a[i].numMedallas;
            pos = i;
        }
    }

    cout<<"El atleta con el mayor numero de medallas es: "<<endl;
    cout<<"Nombre: "<<a[pos].nombre<<endl;
    cout<<"Pais: "<<a[pos].pais<<endl;

    delete [] a;
    system("pause");
    return 0;
}