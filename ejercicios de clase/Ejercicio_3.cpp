
#include <iostream>  

using namespace std;    
        
int main()
{  
    int m,x,b,operacion=0;
    cout<<"Ingrese los numeros \n";
    cout<<"Digite un numero: ";cin>> m;
    cout<<"Digite otro numero: ";cin>> x;
    cout<<"Digite otro numero: ";cin>> b;
    operacion = (m*x) + b;
    cout<<"El resultado es : "<<operacion;
    return 0;
}