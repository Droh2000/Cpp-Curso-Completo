#include<iostream>
#include<conio.h>

using namespace std;

void pedirDimencionMatriz(int&, int&);
void crearMatrices(int**&, int**&, int, int);
void pedirDatos(int**&, int**&, int, int);
bool detectarSimetria(int**&, int**&, int, int);

int main(){

    int **m1, **m2, fil, col;

    pedirDimencionMatriz(fil, col);
    crearMatrices(m1, m2, fil, col);
    pedirDatos(m1, m2, fil, col);

    if(detectarSimetria(m1, m2, fil, col)){
        cout<<"Las matrices son simetricas"<<endl;
    }else{
        cout<<"Las matrices no son simetricas"<<endl;
    }

    for(int i=0; i<fil;i++)
        delete[] m1[i];
    delete[] m1;

    for(int i=0; i<fil;++i)
        delete[] m2[i];
    delete[] m2;

    getch();
    return 0;
}

void pedirDimencionMatriz(int& fil, int& col){
    do{
        cout<<"Ingrese el numero de filas: ";
        cin>>fil;
        cout<<"Ingrese el numero de columnas: ";
        cin>>col;

        if(fil != col){
            cout<<"La matriz debe de ser cuadrada"<<endl;
        }
    }while(fil != col);
}

void crearMatrices(int**& m1, int**& m2, int fil, int col){
    m1 = new int*[fil];
    for(int i=0; i<fil; i++){
        m1[i] = new int[col];
    }

    m2 = new int*[fil];
    for (int i = 0; i < fil; i++){
        m2[i] = new int[col];
    }     
}

void pedirDatos(int**& m1, int**& m2, int fil, int col){
    cout<<"Ingrese los datos de la Matriz 1"<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<"["<<i<<","<<j<<"]: ";
            cin>>m1[i][j];
        }
    }
    cout<<"\nIngrese los datos de la Matriz 2"<<endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout<<"["<<i<<","<<j<<"]: ";
            cin>>m2[i][j];
        }
    }
}

bool detectarSimetria(int**& m1, int**& m2, int fil, int col){
    int k, l=0;
    bool simetrica = true;
    for (int i = 0; i < fil; i++){ // filas
        k=0;
        for (int j = 0; j < col; j++){ // columnas
            if(m1[i][j] != m2[k][l]){
                simetrica = false;
                break;
            }
            k++;
        }
        l++;
    }
    return simetrica;
}
