

#include <iostream>
#include "LibroCalificaciones.cpp"
using namespace std;

int main()
{   int  nota,total,suma,promedio;
    cout<<"INGRESE EL NUMERO DE ESTUDIANTES \n";
    cin>>total;
    LibroCalificaciones alumnos(total);
    alumnos.setPromedios(nota,suma=0,promedio=0);
    cout<<"El promedio es: "<<alumnos.getPromedios();
    return 0;
}
    
    