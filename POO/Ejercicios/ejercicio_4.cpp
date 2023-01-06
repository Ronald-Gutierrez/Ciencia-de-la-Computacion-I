#include <iostream>
#include <string.h>
#include "ejercicio_4.h"
using namespace std;

Electrodomestico::~Electrodomestico(){}
Electrodomestico::Electrodomestico(){
    precio_base=100;
    peso=5;
    color="blanco";
    consumo_energetico="F";
    precio_final=precio_base;
}
Electrodomestico::Electrodomestico(float _precio_base, float _peso){
    precio_base=_precio_base;
    peso=_peso;
}
Electrodomestico::Electrodomestico(float _precio_base, string _color, string _consumo_energetico, float _peso){
    precio_base=_precio_base;
    peso=_peso;
    if(_color=="negro")
        _color="negro";
    else if(_color=="rojo")
        _color="azul";
    else if(_color=="azul")
        _color="azul";
    else if(_color=="gris")
        _color="gris";
    else 
        _color="blanco";
    color=_color;
    if(_consumo_energetico=="A")
        _consumo_energetico="A";
    else if(_consumo_energetico=="B")
        _consumo_energetico="B";
    else if(_consumo_energetico=="C")
        _consumo_energetico="C";
    else if(_consumo_energetico=="D")
        _consumo_energetico="D";
    else if(_consumo_energetico=="E")
        _consumo_energetico="E";
    else
        _consumo_energetico="F";
    consumo_energetico=_consumo_energetico;
    if(consumo_energetico=="A")
        precio_final=precio_base+50;
    else if(consumo_energetico=="B")
        precio_final=precio_base+70;
    else if(consumo_energetico=="C")
        precio_final=precio_base+90;
    else if(consumo_energetico=="D")
        precio_final=precio_base+100;
    else if(consumo_energetico=="E")
        precio_final=precio_base+120;
    else
        precio_final=precio_base+150;
}
void Electrodomestico::setColor(string _color){
    color=_color;
}
string Electrodomestico::getColor(){
    return color;
}
void Electrodomestico::setPeso(float _peso){
    peso=_peso;
}
float Electrodomestico::getPeso(){
    return peso;
}
void Electrodomestico::setPrecio_base(float _precio_base){
    precio_base=_precio_base;
}
float Electrodomestico::getPrecio_base(){
    return precio_base;
}
void Electrodomestico::setComprobarConsumoEnergetico(string _consumo_energetico){
    consumo_energetico=_consumo_energetico;
}
string Electrodomestico::getComprobarConsumoEnergetico(){
    return consumo_energetico;
}
void Electrodomestico::setPrecioFinal(float _precio_final){
    precio_final=_precio_final;
}   
float Electrodomestico::getPrecioFinal(){
    return precio_final;
}
void Electrodomestico::mostrar(){
    cout<<"El precio base es: "<<getPrecio_base()<<endl;
    cout<<"El peso es de: "<<getPeso()<<endl;
    cout<<"El color es: "<<getColor()<<endl;
    cout<<"El consumo energetico es de: "<<getComprobarConsumoEnergetico()<<endl;
    cout<<"El precio final es de: "<<getPrecioFinal()<<endl;
}