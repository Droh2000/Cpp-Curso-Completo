#include<iostream>
#include<conio.h>
#include "Tablero.h"

using namespace std;

int main(){
    int x,y, op, n;
    Tablero *t;

    cout<<"Ingrese el valor de X: ";
    cin>>x;
    cout<<"Ingrese el valor de Y: ";
    cin>>y;

    t = new Tablero(x,y);

    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Mover Arriba"<<endl;
        cout<<"2. Mover Abajo"<<endl;
        cout<<"3. Mover Derecha"<<endl;
        cout<<"4. Mover Izquierda"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opcion: ";cin>>op;

        if(op >= 1 && op<=4){
            cout<<"\nIngrese el valor de movimiento: ";
            cin>>n;
        }

        switch (op){
        case 1:
            t->moverArriba(n);
            break;
        case 2:
            t->moverAbajo(n);
            break;
        case 3:
            t->moverDerecha(n);
            break;
        case 4:
            t->moverIzquierda(n);
            break;
        default:
            cout<<"Valor No correcto"<<endl;
            break;
        }

        cout<<"\nPosicion en el plano carteciano: "<<endl;
        cout<<"("<<t->getX()<<", "<<t->getY()<<")"<<endl;

    }while(op != 5);

    delete t;
    getch();
    return 0;
}