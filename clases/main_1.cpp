

#include <iostream>
#include "class_ejercicio_1.cpp"
using namespace std;

int main(){
    int monto,abonar,retirar;
    cout<<"INGRESE EL MONTO DEL DINERO \n";
    cin>>monto;
    Cuenta primerCliente(monto);
    primerCliente.mostrar();
    cout<<"INGRESE EL MONTO ABONAR \n";
    cin>>abonar;
    primerCliente.abonar(abonar);
    primerCliente.mostrar();
    cout<<"INGRESE EL MONTO A RETIRAR "<<endl;
    cin>>retirar;
    primerCliente.cargar(retirar);
    primerCliente.mostrar();
    return 0;
}
