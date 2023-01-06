

#include <iostream>
#include <cmath>
using namespace std;

int sumaDeNumeros(int);

int main(){
    int num;
    cout<<"Ingrese el total \n";
    cin>>num;
    cout<<"La suma es: "<<sumaDeNumeros(num);
    return 0;
}
int sumaDeNumeros(int num){
    if(num==1)
        return 1;
    return num+sumaDeNumeros(num-1);
}