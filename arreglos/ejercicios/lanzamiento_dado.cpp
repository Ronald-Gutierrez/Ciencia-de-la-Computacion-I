#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;

int lanzarDados();

int main(){
    int total=0;
    srand(static_cast<unsigned int> (time(0)));
    size_t dado=0;
    const size_t t_arreglo=6;
    array<int,t_arreglo> frecuencia_dado={};

    for(int i=1; i<=200 ;i++){
        dado=lanzarDados();
        frecuencia_dado[dado-1]++;
    }
    cout<<"cara"<<setw(25)<<"frecuencia \n";
    for(size_t j=1;j<=frecuencia_dado.size();j++){
        cout<<setw(2)<<j<<setw(20)<<frecuencia_dado[j-1]<<endl;
        total+=frecuencia_dado[j-1];
    }

    sort(frecuencia_dado.begin(),frecuencia_dado.end());
    cout<<"Arreglo ordenado"<<endl;
    for (int orden:frecuencia_dado)
        cout<<orden<<endl;

    cout<<endl;
    cout<<"La cantidad total es:"<<total;
    return 0;
}
int lanzarDados(){
    return rand()%6+1;
};