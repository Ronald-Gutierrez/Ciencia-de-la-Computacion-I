

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


int cuadrado(int); // paso por valor
void cuadradoPorReferencia(int&);  //Paso por referencia (No recibe una variable entera, sino la direccion)

int main(){

    int a=4,b=3;
    cout<<"El paso por valor de"<<a<<"devuelve"<<cuadrado(a)<<endl;
    cout<<"Luego de llamar a la funcion, a vale "<<a<<endl;
    cout<<"El paso por referencia de "<<b<<" devuelve: ";
    cuadradoPorReferencia(b);
    cout<<b<<endl;
    return 0;
}
int cuadrado(int num){
    return num*num;
}
void cuadradoPorReferencia(int& num){
    num *= num;
}