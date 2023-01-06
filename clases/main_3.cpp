#include <iostream>
#include "class_ejercicio_3.cpp"
using namespace std;

int main(){
    float a,b;
    cout<<"INGRESE EL PRIMER NUMERO \n";
    cin>>a;
    cout<<"INGRESE EL SEGUNDO NUMERO \n";
    cin>>b;
    Calculadora operaciones(a,b);
    cout<<"calculando................"<<endl;
    operaciones.suma();
    operaciones.resta();
    operaciones.producto();
    operaciones.division();
    return 0;
}
