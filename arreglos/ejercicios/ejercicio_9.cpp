#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    size_t num;
    const size_t t_arreglo=5;
    array<int,t_arreglo> lista={};
    cout<<"INGRESE LOS NUMEROS \n";
    for(int i=0;i<t_arreglo;i++){
        cin>>num;
        lista[num]=num;
            if(lista[num]==num);
                lista[num]=lista[num];
    }
    cout<<"La lista ingresada es: \n";
    for(size_t i=0;i<lista.size();i++)
        cout<<lista[i]<<" ";  
    system("pause");
    return 0;
}