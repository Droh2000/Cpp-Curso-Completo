
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num, sum = 0;

    do{
        cout << "Digite un numero: "; cin>>num;

        if(num>0){
            sum += num;
        }

    }while((num<20 || num>30) && (num != 0));

    cout << "El suma de los numeros introducidos es: " << sum;

    getch();
    return 0;
}