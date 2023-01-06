#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

class Cuadrado{
    // acceso privado
    double _lado;

    public:
        Cuadrado (double lado); 
        double area ();
        double perimetro();
        void setLado(double lado);
        double getLado();
        
};

Cuadrado::Cuadrado(double lado){
    _lado =lado;
}
double Cuadrado::area(){
    return _lado*_lado;
}
double Cuadrado::perimetro(){
    return 4*_lado;
}
void Cuadrado::setLado(double lado){
    _lado = lado;
}
double Cuadrado::getLado(){
    return _lado;
}

class Rectangulo{
    double _base,_altura;
    public:
        Rectangulo (double base, double altura); 
        double area ();
        double perimetro();
        
};

Rectangulo::Rectangulo(double base, double altura){
    _base = base;
    _altura = altura;
}
double Rectangulo::area(){
    return _base*_altura;
}
double Rectangulo::perimetro(){
    return 2*_base + 2*_altura;
}

class Circulo{
    double _radio;
    public:
        Circulo (double radio); 
        double area ();
        double perimetro();
        void setRadio(double radio);
        double getRadio();
        
};

Circulo::Circulo(double radio){
    _radio = radio;
}
void Circulo::setRadio(double radio){
    _radio=radio;
}
double Circulo::getRadio(){
    return _radio;
}
double Circulo::area(){
    return PI * pow(getRadio(),2);
}
double Circulo::perimetro(){
    return 2*PI*getRadio();
}

int main(){
    Cuadrado C1(4.7);
    cout<<"El area del cuadrado es: "<<C1.area()<<endl;
    cout<<"El perimetro del cuadrado  es: "<<C1.perimetro()<<endl;
    cout<<endl;
    Rectangulo R1(4.5,3.2);
    cout<<"El area del rectangulo es: "<<R1.area()<<endl;
    cout<<"El perimetro del rectangulo es: "<<R1.perimetro()<<endl;
    cout<<endl;
    Circulo Cr1(4);
    cout<<"El area del circulo es: "<<Cr1.area()<<endl;
    cout<<"El perimetro del circulo es: "<<Cr1.perimetro()<<endl;

    
    return 0;
}