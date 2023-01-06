
#include <iostream>
using namespace std;

int main(){
    int num_inicial,num_final;
    cout<<"Ingrese el numero inicial: ";cin>>num_inicial;
    cout<<"Ingrese el numero final: ";cin>>num_final;
    cout<<"Numeros \t"<<"Cuadrado \t"<<"Cubo"<<endl;
    for(int i=num_inicial; i<=num_final;i++){
        cout<<i<<" \t\t"<<i*i<<" \t\t"<<i*i*i<<endl;
    }   
    return 0;
}


