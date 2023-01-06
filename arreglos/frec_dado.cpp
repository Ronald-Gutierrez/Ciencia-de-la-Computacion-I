#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
using namespace std;

int lanzarDados();

int main(){
    srand(static_cast<unsigned int> (time(0)));
    size_t dado=0;
    const size_t t_arreglo=7;
    array<int,t_arreglo> frecuencia_dado={};

    for(int i=1; i<=10000 ;i++){
        dado=lanzarDados();
        frecuencia_dado[dado]++;
    }
    cout<<"cara"<<setw(25)<<"frecuencia \n";
    for(size_t j=1;j<frecuencia_dado.size();j++){
        cout<<setw(2)<<j<<setw(20)<<frecuencia_dado[j]<<endl;
    }
    return 0;
}
int lanzarDados(){
    return rand()%6+1;
};