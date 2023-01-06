#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
//Primero filas y luego columnas
// Para acceder a un espacio, se especifica en que fila y columna esta el elemento

//ARREGLO BIDIMENSIONAL
const size_t filas=3;
const size_t columnas=4;

void imprimir_arreglo(const array<array<int, columnas>,filas>& ); 
// puede ser tambien con imprimir_arreglo(int [][])

int main(){
    array<array<int, columnas> ,filas>arreglo1 = {1 ,2 ,3 ,4 ,5 ,6,7,8,9,2,3,4};
    array<array<int, columnas> ,filas>arreglo2 = {};
    int arreglo[filas][columnas];
    
    cout<<"Los valores del arreglo 1 son: "<<endl;
    imprimir_arreglo(arreglo1);
    cout<<endl;
    cout<<"Los valores del arreglo 2 son: "<<endl;
    imprimir_arreglo(arreglo2);
    return 0;
}

void imprimir_arreglo(const array<array<int, columnas>,filas>& arreglo){
    for(auto const&fila : arreglo){
        for(auto const&elemento : fila){ 
            cout<<elemento<<"\t";
        }
        cout<<endl;
    }
}



