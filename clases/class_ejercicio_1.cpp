#include <iostream>
using namespace std;
#include "class_ejercicio_1.h"

Cuenta::Cuenta(int saldo){
    _saldoCuenta = saldo;
    if (saldo>0){
         _saldoCuenta = saldo;
    }
    else{
        cout<<"ERROR"<<endl;
        saldo=0;
        _saldoCuenta=saldo;
    }
}
void Cuenta::abonar(int abono){
     _saldoCuenta = _saldoCuenta + abono;
}
void Cuenta::cargar(int carga){
    if (carga>_saldoCuenta){
    cout<<"EL MONTO EXCEDE EN EL SALDO"<<endl;
    }
    else{
        _saldoCuenta = _saldoCuenta - carga;
    }
}
void Cuenta::mostrar(){
    cout<<"Su saldo actual es de "<<_saldoCuenta<<endl;
}
