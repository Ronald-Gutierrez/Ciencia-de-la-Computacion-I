#include <iostream>
using namespace std;
#include "clase_ejercicio1.h"

Calificaciones::Calificaciones(int tamanio){
    tamanio =5;
}
void Calificaciones::nota_alumnos(){
   
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
