
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n, fact=1, sumFact=0;

    cout << "Ingrese el valor de N factorial: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "Factorial de "<<i<<": ";
        for (int j = 1; j <= i; j++){
            fact *= j;
        }
        cout << fact<<endl;
        sumFact += fact;
        fact=1;
    }
    
    cout << "La suma de factoriales es "<<sumFact<<endl; 

    system("pause");
    return 0;
}