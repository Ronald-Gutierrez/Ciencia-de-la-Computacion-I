

#include <iostream>  

using namespace std;    
        
int main()
{  
    int a,b,x,c,operacion=0;
    cout<<"Ingrese los numeros \n";
    cout<<"Digite un numero: ";cin>> a;
    cout<<"Digite otro numero: ";cin>> b;
    cout<<"Digite otro numero: ";cin>> x;
    cout<<"Digite otro numero: ";cin>> c;
    operacion = a*x*x +b*x + c;
    cout<<"El resultado es : "<<operacion;
    return 0;
}