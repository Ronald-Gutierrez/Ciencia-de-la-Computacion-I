

#include <iostream>
using namespace std;
#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(int total){
    _total=total;
    
}
void LibroCalificaciones::setPromedios(int nota,int suma,int promedio){
    _suma=suma;
    _nota=nota;

    for (int i=1;i<=_total;i++){ 
        cout<<"Ingrese un numero"<<endl;
        cin>>nota;
        suma+=nota;
    }
    promedio=suma/_total;
    _promedio=promedio;
}
int LibroCalificaciones::getPromedios(){
    return _promedio;
}


