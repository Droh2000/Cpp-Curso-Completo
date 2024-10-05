
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){

    int n, suma = 0;

    cout << "Ingrese el valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i++){ 
        suma += pow(2, i);
    }

    cout << "La suma de 2 elevado a "<<n<<" es "<<suma;    

    getch();
    return 0;
}