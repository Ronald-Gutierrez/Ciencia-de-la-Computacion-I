#include <iostream>
#include <iomanip>
#include <array>
#include "clase_ejercicio1.cpp"
using namespace std;

int main(){
    Calificaciones clase1(5);
    clase1.nota_alumnos();
    return 0;
}



/*
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void nota_alumnos();
int main(){
    nota_alumnos();
    return 0;
}
void nota_alumnos(){
    const int tamanio_Arreglo=5; 
    array<int,tamanio_Arreglo> lista_calificaciones={};
   
    cout<<"INGRESE LAS CALIFICACIONES \n";
    for(int i=0;i<5;i++)
        cin>>lista_calificaciones[i];

    cout<<endl;

    cout<<"Las calificaciones son: "<<endl;
    for (int i=0; i<lista_calificaciones.size(); i++)
        cout<<lista_calificaciones[i]<<" ";
}
*/