#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<string.h>

using namespace std;

struct persona{
    string nombre;
    char discapacidad[2];
};

int main(){
    int n;
    cout<<"Ingrese el numero de personas a registrar: ";
    cin>>n;
    persona *pReg = new persona[n];
    
    vector<persona> conDisc;
    vector<persona> sinDisc;
    int j=0, k=0;
    cout<<"Ingrese los datos de cada Persona: "<<endl;
    for (int i = 0; i < n; i++){
        cin.ignore(INT_MAX, '\n');
        cout<<"Nombre: ";
        getline(cin,pReg->nombre);
        cout<<"Tiene Discapacidad (Si/No): ";
        cin>>pReg->discapacidad;
        if(strcmp(strlwr(pReg->discapacidad),"si")==0){
            conDisc.push_back(pReg[i]);
            //conDisc.insert(conDisc.begin()+j,pReg[i]);
            cout<<"Entro al Si"<<endl;
            cout<<conDisc.at(j).nombre<<endl;
            j++;

        }
        if(strcmp(strlwr(pReg->discapacidad),"no")==0){
            sinDisc.push_back(pReg[i]);
            //sinDisc.insert(sinDisc.begin()+k,pReg[i]);
            cout<<"Entro al No"<<endl;
            cout<<sinDisc.at(k).nombre<<endl;
            k++;
        }    
    }
    
    cout<<"\nPersonas con Discapacidad: "<<endl;
    /*for(persona p: conDisc){
        cout<<"Nombre: "<<p.nombre<<endl;
    }*/
   for(int i=0;i<conDisc.size();i++){
        cout<<"Nombre: "<<conDisc.at(i).nombre<<endl;
   }

    cout<<"\nPersonas sin Discapacidad: "<<endl;
    /*for(persona p: sinDisc){
        cout<<"Nombre: "<<p.nombre;
    }*/
   for(int i=0;i<sinDisc.size();i++){
        cout<<"Nombre: "<<sinDisc.at(i).nombre<<endl;
   }

    cout<<"\n"<<endl;
    delete[] pReg;
    system("pause");
    return 0;
}