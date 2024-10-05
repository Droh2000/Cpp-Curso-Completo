#include<iostream>
#include<stdlib.h>

using namespace std;

/*
    0 1 1 2 3 5 8 13 21 34

    fibonaacci(n) = n                              , si n<2 -> Si es 0 o 1 entonces solo se mandan estos numeros
                    fibonacci(n-1) + fibonacci(n-2), si n>=2
*/

int fibonacci(int);

int main(){

    int n;
    cout<<"Ingrese la cantidad de elementos que quiere: ";
    cin>>n;

    cout<<"\nSerie de Fibonacci"<<endl;
    for (int i = 0; i < n; i++){
        cout<<fibonacci(i)<<endl;
    }

    system("pause");
    return 0;
}

int fibonacci(int n){
    if(n < 2){
        return n;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

