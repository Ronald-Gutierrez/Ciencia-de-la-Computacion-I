
#include <iostream>
#include <cmath>

using namespace std;

int potencia(int,int);

int main(){
    
    int base, exponente;
    cout<<"ingrese la base y el exponente \n";
    cin>>base;cin>>exponente;
    cout<<potencia(base,exponente);
    
    return 0;
}

int potencia(int base,int exp){
    if(exp==0)
        return 1;
    return base*potencia(base,(--exp));
}