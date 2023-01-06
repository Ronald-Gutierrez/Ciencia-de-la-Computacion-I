#include <iostream>  

using namespace std;    
        
int main()
{  
    int p,r,q,w,x,y,operacion=0;
    cout<<"Ingrese los numeros \n";
    cout<<"Digite un numero: ";cin>> p;
    cout<<"Digite otro numero: ";cin>> r;
    cout<<"Digite otro numero: ";cin>> q;
    cout<<"Digite otro numero: ";cin>> w;
    cout<<"Digite otro numero: ";cin>> x;
    cout<<"Digite otro numero: ";cin>> y;
    operacion = ((p*r)%q) + (w/x) -y;
    cout<<"El resultado es : "<<operacion;
    return 0;
}