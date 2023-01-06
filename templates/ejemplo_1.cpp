#include<iostream>
#include<conio.h>
using namespace std;
//prototipo de función
template<class TIPOD>               //tipo de dato general
void mostrarAbs(TIPOD numero);
int main(){
    int num1=-4;                            //ingresamos los valores tanto int,float y double
    float num2 = -55.66;
    double num3 = -120.2357;
    mostrarAbs(num1);           //llamamos a nuestra funcion mostrarAbs(numero) con el argumento de nuestras variables
    mostrarAbs(num2);
    mostrarAbs(num3);
    getch();
    return 0;
}

template<class TIPOD>           //nuestra funcion template
void mostrarAbs(TIPOD numero){//void no retorna nada
    if(numero<0)
    numero = numero*-1;                 //hace la multiplicacion por -1 a todos los numeros menores que 0
    cout<<"El valor absoluto del numero es:"<<numero<<endl;             //muestra el valor despues de la condicion
}