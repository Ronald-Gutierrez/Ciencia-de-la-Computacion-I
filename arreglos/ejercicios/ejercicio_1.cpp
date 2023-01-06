#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    size_t calificacion;
    const size_t t_arreglo=11;
    array<int,t_arreglo> frecuencia_calidad={};
    // ingresar 20 calificaciones del comedor
    cout<<"INGRESE LAS CALIFICACIONES \n";
    for(int i=1;i<=20;i++){
        cin>>calificacion;
        frecuencia_calidad[calificacion]++;
    }
    cout<<"Calificacion"<<setw(35)<<"Frecuencia de calificacion \n";
    for(size_t i=1;i<frecuencia_calidad.size();i++){
        cout<<setw(4)<<i<<setw(20)<<setw(20)<<frecuencia_calidad[i]<<endl;
    }
    return 0;
}
