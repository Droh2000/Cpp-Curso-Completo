#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct fecha{
    int dia, mes, anio;
} f1, f2;

void pedirDatos();
bool detectarFechaCorrecta(fecha);
fecha mayor(fecha, fecha);

int main(){

    pedirDatos();
    fecha fm = mayor(f1, f2);

    cout<<"La fecha mayor es: "<<fm.dia<<"/"<<fm.mes<<"/"<<fm.anio<<endl;

    system("pause");
    return 0;
}

bool detectarFechaCorrecta(fecha f1){
    bool correcta = true;
    if(f1.dia>30 || f1.dia<1){
        correcta = false;
    }
    if(f1.mes>12 || f1.mes<1){
        correcta = false;
    }
    if(f1.anio<0){
        correcta = false;
    }
    return correcta;
}

void pedirDatos(){
    cout<<"\nFecha 1: "<<endl;
    do{
        cout<<"Ingrese el dia: ";cin>>f1.dia;
        cout<<"Ingrese el mes: ";cin>>f1.mes;
        cout<<"Ingrese el año: ";cin>>f1.anio;
        if(!detectarFechaCorrecta(f1)){
            cout<<"\nIngrese correctamente la fecha, ejemplo"<<endl;
            cout<<"10/9/2005";
        }
    }while (!detectarFechaCorrecta(f1));
    
    cout<<"\nFecha 2: "<<endl;    
    do{
        cout<<"Ingrese el dia: ";cin>>f2.dia;
        cout<<"Ingrese el mes: ";cin>>f2.mes;
        cout<<"Ingrese el año: ";cin>>f2.anio;
        if(!detectarFechaCorrecta(f2)){
            cout<<"\nIngrese correctamente la fecha, ejemplo"<<endl;
            cout<<"10/9/2005";
        }
    }while (!detectarFechaCorrecta(f2));
}

fecha mayor(fecha f1, fecha f2){
    if(f1.anio > f2.anio){
        return f1;
    }else if(f2.anio > f1.anio){
        return f2;
    }else{
        if(f1.mes>f2.mes){
            return f1;
        }else if(f2.mes > f1.mes){
            return f2;
        }else{
            if(f1.dia > f2.dia){
                return f1;
            }else if(f2.dia > f1.dia){
                return f2;
            }else{
                fecha f3;
                cout<<"Las fechas son iguales"<<endl;
                return f3;
            }
        }
    }
}