
#include <iostream>
#include "class_ejercicio_2.cpp"
using namespace std;
int main(){
    string codigo,descripcion;
    int cantidad,precio;
    cout<<"INGRESE EL CODIGO DEL ARTICULO \n";
    getline(cin,codigo);
    cout<<"INGRESE LA DESCRIPCION \n";
    getline(cin,descripcion);
    cout<<"INGRESE LA CANTIDAD \n";
    cin>>cantidad;
    cout<<"INGRESE EL PRECIO \n";
    cin>>precio;
    Factura cliente(codigo,descripcion,cantidad,precio);
    cout<<endl;
    cliente.mostrarFactura();
    cliente.codigoArticulo(codigo);
    cliente.descripcionArticulo(descripcion);
    cliente.cantidadArticulo(cantidad);
    cliente.precioArticulo(precio);
    cliente.obtener();
   return 0;
}
