
#include <iostream>
using namespace std;
#include "LibroCalificaciones2.h"

LibroCalificaciones::LibroCalificaciones(int nota){
    _nota=nota;
    _aprobados=0;
    _desaprobados=0;
}
void LibroCalificaciones::setAprobacion(int nota,int aprobados, int desaprobados){
    _nota=nota;
    while(nota!=-1){
        cout<<"INGRESE LA NOTA \n";
        cin>>nota;
        if(nota>11){
            aprobados++;
        }
        else {
            desaprobados++;
        }
    }
    _aprobados=aprobados;
    _desaprobados=desaprobados;
}
int LibroCalificaciones::getAprobacion(){
    cout<<"Aprobados: "<<_aprobados<<"\nDesaprobados: "<<_desaprobados-1;
}
