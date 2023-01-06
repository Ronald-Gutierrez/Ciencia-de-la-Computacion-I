
#include <iostream>
using namespace std;

int main(){
    float km=0,suma_km=0,promedio_km=0,litros;
    while(km!=-1){
        cout<<"Ingrese los kilometros a recorrer \n";
        cin>>km;
       if (km!=-1){
           suma_km += km;

       }
    }
    cout<<"Ingrese el total de litros: \n ";
    cin>>litros;
    promedio_km=suma_km/litros;
    cout<<"KPL en este viaje: "<<promedio_km<<endl;
    cout<<"KPL promedio: "<<promedio_km<<endl;
    return 0;
}


