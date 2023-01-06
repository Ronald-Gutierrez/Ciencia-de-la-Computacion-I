

#include <iostream>  

using namespace std;    
        
int main()
{  
    int a,b,c,r,area;

    cout<<"INGRESE LOS LADOS DEL TRIANGULO \n";
    cin>>a;
    cin>>b;
    cin>>c;
    
    cout<<"INGRESE EL RADIO DEL CIRCUNFERENCIA \n";
    cin>>r;
    
    area= (a+b+c)*r/2;
    cout<<"EL AREA DEL TRIANGULO ES: "<<area;
    return 0;
}