#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm> //search bynary y sort dentro de la libreria
using namespace std;

void arregloAutomatico();
void arregloEstatico();
const size_t t_arreglo=4;
int main(){
    cout<<"ARREGLO AUTOMATICO"<<endl;
    arregloAutomatico();
    cout<<endl;
    arregloAutomatico();
    cout<<endl;
    cout<<endl;
    cout<<"ARREGLO ESTATICO"<<endl;
    arregloEstatico(); // se inicializan los valores
    cout<<endl;
    arregloEstatico(); // se inicializan con los valores den la primera llamada
    return 0;
}
void arregloAutomatico(){

    array<int,t_arreglo> arreglo_aut={1,2,3,4};
    cout<<"Los valores del arreglo al entrar en la funcion son: \n"; //Arreglo automatico

    for(int item: arreglo_aut) // item (valor de cada elemento)
        cout<<item<<"\t";
    for(int& refer_espacio:arreglo_aut )
        refer_espacio+=1;

    cout<<endl;
    cout<<"Los valores del arreglo modificado: \n"; //Arreglo automatico
    for(int item: arreglo_aut)
        cout<<item<<"\t";
}
void arregloEstatico(){  // Solo lo creo una vez, y sobre esta sigue funcionando
    static array<int,t_arreglo> arreglo_sta={1,2,3,4};
    cout<<"Los valores del arreglo al entrar en la funcion son: \n"; //Arreglo automatico
    for(size_t i=0;i<t_arreglo;i++)
        cout<<arreglo_sta[i]<<"\t";
    cout<<endl;
    cout<<"Los valores del arreglo modificado: \n"; //Arreglo automatico
    for(size_t i=0;i<t_arreglo;i++)
        cout<<(arreglo_sta[i]+=1)<<"\t";

}
