

#include <iostream>
using namespace std;

int main(){
    float nota,promedio=0,total=0,suma=0,aprobado,desaprobado;
    cout<<"INGRESE LAS NOTAS DE LOS ALUMNOS \n";
    while(nota!=-1){
        cout<<"Ingrese la nota \n";
        cin>>nota;
        if(nota!=-1){
            suma+=nota;
            total++;
        }
            if(nota>=11){
                aprobado++;
            }
            else{
                desaprobado++;
                
            }
    }
    promedio = suma/total;
    if (promedio>=10.5){
        cout<<"Felicidades, el instructor merece un bono"<<endl;
    }
    else{
        cout<<"No se pagara bono"<<endl;
    }
    cout<<"El numero de aprobados es: "<<aprobado<<endl;
    cout<<"El numero de desaprobados es: "<<desaprobado-1<<endl;
    cout<<"El promedio del salon es: "<<promedio<<endl;
    return 0;
}