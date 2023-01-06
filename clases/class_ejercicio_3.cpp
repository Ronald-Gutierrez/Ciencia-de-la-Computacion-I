
#include <iostream>
using namespace std;
#include "class_ejercicio_3.h"


Calculadora::Calculadora (float a, float b){
    _n1 = a;
    _n2 = b;
}
void Calculadora::suma(){
    cout<<"LA SUMA ES: \t \t"<<_n1+_n2<<endl;
}
void Calculadora::resta(){
    cout<<"LA RESTA ES: \t \t"<<_n1-_n2<<endl;
}
void Calculadora::producto(){
    cout<<"EL PRODUCTO ES: \t"<<_n1*_n2<<endl;
}
void Calculadora::division(){
    if (_n2==0){
        cout<<"LA DIVISION ES: \t"<<"INDEFINIDO"<<endl;
    }
    else {
        cout<<"LA DIVISION ES: \t"<<_n1/_n2<<endl;
    }
}
