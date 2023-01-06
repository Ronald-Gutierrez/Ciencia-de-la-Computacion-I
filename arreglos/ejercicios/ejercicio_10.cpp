#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
using namespace std;
const size_t filas=5;
const size_t columnas=5;
void imprimir_arreglo( array<array<int, columnas>,filas>& arreglo ); 
void llenarArreglo( array<array<int, columnas>,filas>& arreglo);
int random();

int main(){
    int dado;
    array<array<int, columnas> ,filas>arreglo1 = {};
    srand(static_cast<unsigned int> (time(0)));
    
    for(int i=1; i<=30 ;i++){
        arreglo1[dado-1]++;
    
    imprimir_arreglo(arreglo1);
}

void imprimir_arreglo(array<array<int, columnas>,filas>& arreglo){
    int suma=0;
    for(auto &fila : arreglo){
        for(auto &elemento : fila){ 
            elemento=random();
            cout<<elemento<<"\t";
            suma+=elemento;
        }
        cout<<endl;
    }
    cout<<"LA SUMA DE TODO ES: "<<suma<<endl;
}

int random(){
    return rand()%6+1;
}