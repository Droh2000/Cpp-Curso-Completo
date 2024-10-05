
#include<iostream>
using namespace std;
#include<stdlib.h>

int main(){

    int num, cont = 0;

    do{
        cout << "Introduce un numero: ";
        cin >> num;

        if(num > 0)
            cont++;

    }while(num != 0);

    cout << "El numero de valores mayores a cero son: "<<cont<<endl;

    system("pause");
    return 0;
}