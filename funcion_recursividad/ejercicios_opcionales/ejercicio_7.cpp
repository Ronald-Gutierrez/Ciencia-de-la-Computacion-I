#include <iostream>
using namespace std;

int convertido(float);
int main(){
    float C;
    cout<<"Ingrese los grados Centigrados \n";
    cin>>C;
    cout<<"El grado "<<C<<" en Fahrengeits es:  "<<convertido(C)<<endl;
    return 0;
}
int convertido(float grados_C){
    return (grados_C*9/5)+32;
}
