#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    size_t nota;
    const size_t t_arreglo=21;
    array<int,t_arreglo> frecuencia_nota={};
    // ingresar 20 notas
    for(int i=1;i<=20;i++){
        cin>>nota;
        frecuencia_nota[nota]++;
    }
    //frecuencia de cada nota (0-5)

    //dibujar barras de asteriscos dependiendo de la frecuencia de cada nota
    cout<<"Grafico de barras \n";
    cout<<"Nota"<<setw(20)<<"frecuencia \n";
    for(size_t i=0;i<frecuencia_nota.size();i++){
        cout<<setw(4)<<i<<setw(20);
        for(size_t j=0;j<frecuencia_nota[i];j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}