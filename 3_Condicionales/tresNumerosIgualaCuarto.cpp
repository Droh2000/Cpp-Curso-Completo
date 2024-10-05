
#include<iostream>

using namespace std;

int main(){

    int n1, n2, n3, n4;

    cout << "Ingrese cuatro numeros: ";
    cin >> n1 >> n2 >> n3 >> n4;

    if(n4 == n1 || n4 == n2 || n4 == n3){
        cout << "El numero "<<n4<<" es igual a alguno de los introducidos";
    }else{
        cout << "El numero "<<n4<<" no se repite con niguno de los introducios";
    }

    return 0;
}