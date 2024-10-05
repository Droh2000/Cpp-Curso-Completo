
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){

    int n, suma = 1, val1 = 1, val2 = 1, val3 = 1, anterior = 1;
    int cont = 1;

    cout << "Ingrese el valor de N: "; 
    cin >> n;

    cout << "Valores de fibonacci: "<<endl;
    for (int i = 1; i <= n; i++){
        if(i == 1){
            suma =  val1 + val2;
        }
        if(i != 1){
            if(i > 2){
                val3 = val1 + val2;
                if(cont % 2 == 0){
                    val1 = val3;
                }else{
                    val2 = val3;
                }
                cont++;
            }
            suma = anterior + val3;
        }
        anterior = suma;
        cout << suma << endl;   
    }

    /*
    Serie de Fibonaci del Video

    int n, x=0, y=1, z=1;

    cout << "Digite el numero de elementos: ";
    cin >>n;

    cout <<"1 ";
    for(int i=1;i<n;i++){
        z = x + y;
        cout<<z<<" ";
        x=y;
        y=z;    
    }
    cout << "\n";
    */
    
    getch();
    return 0;
}