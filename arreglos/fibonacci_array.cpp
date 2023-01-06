#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
    const int longitud=10;
    //primero el tipo de dato, y cuantos espacios
    array<int,longitud> nombre_arreglo;

    for(int i=0;i<nombre_arreglo.size();i++)
        if(i==0 ||i==1)
            nombre_arreglo[i]=1;
        else
            nombre_arreglo[i]=nombre_arreglo[i-1]+nombre_arreglo[i-2];
    cout<<"Elemento \tValor"<<endl;
    for(int i=0;i<nombre_arreglo.size();i++)
        cout<<i<<"\t \t"<<nombre_arreglo[i]<<endl;
    return 0;
}