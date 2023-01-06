


#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


int cuadrado(int); // paso por valor
void cuadradoPorReferencia(int&);  //Paso por referencia (No recibe una variable entera, sino la direccion)
void hipotenusa(float,float,float&);

int main(){

    //lados del triangulo
    float a,b,hip;
    cout<<"ingrese los catetos";
    cin>>a;cin>>b;
    hipotenusa(a,b,hip);
    cout<<"La hipotenusa es: "<<hip;

    return 0;
}
int cuadrado(int num){
    return num*num;
}
void cuadradoPorReferencia(int& num){
    num *= num;
}
void hipotenusa(float cat1,float cat2,float& hip){
    hip= sqrt(pow(cat1,2)+pow(cat2,2));
}