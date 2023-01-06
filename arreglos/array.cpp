//Arreglos: espacios contiguos de memoria
//Todos deben contener el mismo tipo de dato
// arreglo.size();   -->para saber cuanto es que mide mi funcion

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;



int main(){
    
    //primero el tipo de dato, y cuantos espacios
    array<int,5> nombre_arreglo;

    for(int i=0;i<nombre_arreglo.size();i++)
        nombre_arreglo[i]=0;
    cout<<"Elemento \tValor"<<endl;

    for(int i=0;i<nombre_arreglo.size();i++)
        cout<<i<<"\t \t"<<nombre_arreglo[i]<<endl;
    return 0;
}