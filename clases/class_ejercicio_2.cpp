
#include <iostream>
using namespace std;
#include "class_ejercicio_2.h"


Factura::Factura(string codArt,string descrArt,int cantArt, int precArt){
    _codArt = codArt;
    _descrArt = descrArt;
    _cantArt = cantArt;
    _precArt = precArt;
}

void Factura::codigoArticulo(string codArt){
    _codArt = codArt;
    cout<<"CODIGO: \t \t"<<_codArt<<endl;
}
void Factura::precioArticulo(int precArt){
    _precArt = precArt;
    if (_precArt<=0){
        cout<<"PRECIO: \t \t"<<"INGRESE OTRO VALOR"<<endl;
    }
    else {
        cout<<"PRECIO: \t \t"<<_precArt<<endl;
    }
}
void Factura::descripcionArticulo(string descrArt){
    _descrArt = descrArt;
    cout<<"DESCRIPCION: \t \t"<<_descrArt<<endl;
}
void Factura::cantidadArticulo(int cantArt){
    _cantArt = cantArt;
    if (_cantArt<=0){
        cout<<"CANTIDAD: \t \t"<<"INGRESE OTRO VALOR"<<endl;
    }
    else {
        cout<<"CANTIDAD: \t \t"<<_cantArt<<endl;
    }
}
void Factura::obtener() const{
    cout<<"EL MONTO A PAGAR ES: \t"<<_cantArt*_precArt<<endl;
}
void Factura::mostrarFactura(){
    cout<<"--------SU FACTURA ES----------- \n";
}
