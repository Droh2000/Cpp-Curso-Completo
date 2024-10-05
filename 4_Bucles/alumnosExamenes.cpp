
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    float n1, n2, n3, todosExam=0, unExam=0, utlimoExam=0;

    for (int i = 1; i <= 5; i++){
        cout << "Ingrese las 3 notas del alumno "<<i<<endl;
        cin >>n1>>n2>>n3;

        if(n1 >= 70 && n2 >= 70 && n3 >= 70){
            todosExam+=1;
            cout << "El alumno aprobo todos los examenes"<<endl;
        }else if(n1 <= 70 && n2 <= 70 && n3 >= 70){
            utlimoExam+=1;
            cout << "El alumno aprobo solo el ultimo examen"<<endl;
        }else if(n1 >= 70 || n2 >= 70 || n3 >= 70){
            unExam+=1;
            cout << "El alumno aprobo almenos un examen"<<endl;
        }
    }

    cout << "Cantidad de alumnos que aprobaron todos los examenes: "<<todosExam<<endl;
    cout << "Cantidad de alumnos que aprobaron almenos un examen: "<<unExam<<endl;
    cout << "Cantidad de alumnos que aprobaron solo el ultimo examen: "<<utlimoExam<<endl;
    
    system("pause");
    return 0;
}