
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n, fac = 1;

    cout << "Ingrese el numero a calcular factorial: ";
    cin >> n;

    for (int i = n; i >= 1; i--){
        fac *= i; 
    }
    
    cout << "El factorial del numero "<<n<<" es "<<fac<<endl;

    getch();
    return 0;
}