#include <iostream>
#include <string.h>
#include "ejercicio_2.h"
using namespace std;

Cuenta::~Cuenta(){}
Cuenta::Cuenta(string _titular,int _cantidad){
    titular=_titular;
    cantidad=_cantidad;
}
void Cuenta::setTitular(string _titular){
    titular=_titular;
}
string Cuenta::getTitular(){
    return titular;
}
void Cuenta::setCantidad(float _cantidad){
    cantidad=_cantidad;
}
float Cuenta::getCantidad(){
    return cantidad;
}
void Cuenta::setIngresar(float _ingresar){
    ingresar=_ingresar;
    if(ingresar>0)
        cantidad+=ingresar;
}
float Cuenta::getIngresar(){
    return cantidad;
}

void Cuenta::setRetirar(float _retirar){
    retirar=_retirar;
    cantidad-=retirar;
}
float Cuenta::getRetirar(){
    return cantidad;
}

void Cuenta::mostrar(){
    cout<<"El titular de la cuenta es: "<<getTitular()<<endl;
    cout<<"Tiene "<<getCantidad()<<" en su cuenta"<<endl;
}