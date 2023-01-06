#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

//size_t  --> es un tipo de  entero positivo pequeño  sin signo  ( ahorrar memoria)

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