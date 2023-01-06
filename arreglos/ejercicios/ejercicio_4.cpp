#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void promedios_Alumnos();
int main(){
    promedios_Alumnos();
    return 0;
} 
void promedios_Alumnos(){
    float promedio=0;
    size_t calificacion=0;
    const int tamanio_Arreglo=21; // tamaño de mi lista
    array<int,tamanio_Arreglo> lista_calificaciones={};
    cout<<"INGRESE LAS CALIFICACIONES \n";
    for(int i=1;i<=20;i++){ //numero de veces a ingresar
        cin>>calificacion;
        lista_calificaciones[calificacion]++;
        promedio+=calificacion;  
    }
    cout<<"Calificacion"<<setw(13)<<"Frecuencia"<<setw(20)<<"Grafico de barras"<<endl;
    for (int i=0; i<lista_calificaciones.size(); i++){
        cout<<setw(5)<<i<< setw(15)<<lista_calificaciones[i]<<setw(10);
        for (int j =0;j<lista_calificaciones[i]; j++){
            cout<<'*';
        }
        cout<<endl; 
    } 
    cout<<"El promedio de las calificacioens es : "<<promedio/20;
}
