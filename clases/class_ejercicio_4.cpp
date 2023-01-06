

#include <iostream>
using namespace std;
#include "class_ejercicio_4.h"

Empleado::Empleado(string nombre,string apellido,int salario){
    
    _nombre = nombre;
    _apellido = apellido;
    
    if (_salario <0){
        _salario = 0;
    }
    else{
        _salario = salario;
    }
}

void Empleado::setNombre(string nombre){
    _nombre = nombre;
}
string Empleado::getNombre()const{
    return _nombre;
}

void Empleado::setApellido(string apellido){
    _apellido = apellido;
}
string Empleado::getApellido()const{
    return _apellido;
}

void Empleado::setSalario(int salario){
    _salario = salario;
}
int Empleado::getSalario()const{
    return _salario*12 ;
}
void Empleado::mostrar(){
   cout<<"El salario anual de "<<getNombre()<<" "<<getApellido()<<" es de: "<<getSalario()<<endl;
}
