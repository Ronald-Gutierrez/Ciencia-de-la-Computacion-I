

//Para saber cuantos apretones de mano se dieron, usamos una combinacion, ya que no importa el orden
//De tal manera que aplicamos la formula de combinacion c(2,n).

#include <iostream>  

using namespace std;    
        
int main()
{  
    int personas, factorial=1,factorial2,respuesta;
    cout<<"INGRESE EL NUMERO DE PERSONAS \n";
    cin>>personas;

    for (int x=1; x<=personas; x++)
        factorial = factorial*x;

    for (int x=1; x<=(personas-2); x++)
        factorial2 = factorial2*x;

    respuesta= factorial/(factorial2*2);

    cout<<"EL NUMERO DE APRETONES DE MANO ES: "<<respuesta;

    return 0;
}