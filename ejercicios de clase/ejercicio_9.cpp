



#include <iostream>  

using namespace std;    
        
int main()
{  
    int num,centena,decena,unidad;
    
    cout<<"INGRESE EL NUMERO";
    cin>>num;
    centena = num%1000;
    decena = centena%100;
    unidad = decena%10;
    cout<<centena;
    cout<<decena;
    cout<<unidad;

    
    return 0;
}