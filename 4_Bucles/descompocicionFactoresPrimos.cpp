
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n, cont = 0;

    cout << "Ingrese el numero para descomponer en factores primos: ";
    cin >> n;

    cout << "Sus factores primos son: "<<endl;
    for (int i = 2; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont == 2){
            // Aqui tenemos el numero primo
            int res = n; // 5
            while(true){
                if(res % i == 0){ // 10
                    res = res / i; // 10/2 = 5
                    cout << i << endl;
                    n = res; // 5
                }else{
                    break;
                }
            }
        }
        cont = 0;
    }
    
    cout << endl;

    system("pause");
    return 0;
}