
#include<iostream>
using namespace std;
#include<conio.h>

int main(){

    int num, i = 1, mult = 0;

    cout << "Ingresa el numero para la tabla de multiplicar: ";
    cin >> num;
    if(i<=1 || i>=10){
        while(i <= 10){

            mult = i * num;
            cout <<i<<"x"<<num<<" = "<<mult<<endl;
            mult = 0;
            i++;
        }    
    }else{
        cout<<"El numero debe estar entre 1 y 10";
    }

    getch();
    return 0;
}