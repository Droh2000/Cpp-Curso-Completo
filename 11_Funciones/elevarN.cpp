#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

void pedirDatos();
void funpot(int num, int pot);

int num, pot;

int main(){

    pedirDatos();
    funpot(num,pot);

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero: ";
    cin>>num;
    cout<<"Ingrese la potencia: ";
    cin>>pot;
}

void funpot(int num, int pot){
    if(pot > 0){
        cout<<"La Elevacion es: "<<pow(num,pot)<<endl;
    }else{
        cout<<"La potencia debe ser positiva"<<endl;
    }   
}