#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
#include <string>
#include <algorithm> //search bynary y sort dentro de la libreria
// devuelve valor Boleano
using namespace std;
const size_t t_arreglo=5;

int main(){
    array<string,t_arreglo> colores = {"azul","verde","amarillo","rojo","naranja"};
    cout<<"IMPRIMIR EL ARREGLO \n";
    for(string color : colores)
        cout<<color<<"\t";
    // ordenar
    cout<<endl;
    sort(colores.begin(),colores.end());
    cout<<"ARREGLO ORDENADO \n";
    for(string color : colores)
        cout<<color<<"\t";
    //busqueda en el arreglo
    cout<<endl;
    bool encontrado = binary_search(colores.begin(),colores.end(),"rojo");
    cout<<"El color rojo es: "<<(encontrado? "si ":" nose")<<"encontro";

    
    return 0;
}