#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void tiempo(int totalSeg, int&, int&, int&);

int totalSeg;

int main(){
    int hrs, min, seg;
    pedirDatos();
    tiempo(totalSeg, hrs, min, seg);

    cout<<"El tiempo total es: "<<endl;
    cout<<"Horas: "<<hrs<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese la cantidad total en segundos: ";
    cin>>totalSeg;
}

void tiempo(int totalSeg, int& hrs, int& min, int& seg){
    seg = totalSeg%60;
    min = totalSeg/60;
    if(min >= 60){
        hrs = min/60;
        min = min%60;
    }
}
