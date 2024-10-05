
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int x, y, acumX = 0, mult = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    /*if(x > 0 && y == 0){
        x = 1;
    }else if(x > 0 && y > 0 ){
        acumX = x;
        int detec = 0;
        for (int i=y;i >= 1;i--){
            if(detec == 0){
                x *= x;
                detec = 1;
                i-=2;
            }
            if(detec == 1){
                x = x * acumX;
            }
        }
    }else{
        cout << "Solo se puede ingresar numeros positivos";
    }*/

    int elevacion = 1;

    for(int i=1;i<=y;i++){
        elevacion = elevacion * x;
    }

    //cout << "El valor de elevar "<<acumX<<" a "<<y<<": "<<x<<endl;

    cout << "El resultado de la elevacion es "<<elevacion<<endl;

    system("pause");
    return 0;
}