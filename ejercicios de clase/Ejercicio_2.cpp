

#include <iostream>  

using namespace std;    
        
int main()
{  
    float num1,num2,num3,num4,operacion=0;
    cout<<"Ingrese 4 numeros \n";
    cout<<"Digite un numero: ";cin>> num1;
    cout<<"Digite otro numero: ";cin>> num2;
    cout<<"Digite otro numero: ";cin>> num3;
    cout<<"Digite otro numero: ";cin>> num4;
    operacion = num1+num2+num3+(num4/4);
    cout<<"El resultado es : "<<operacion;
    return 0;
}