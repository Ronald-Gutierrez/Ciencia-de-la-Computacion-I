#include <iostream>
using namespace std;

int calcular_primo(int);

int main(){
    
    int num;
    cout<<"Ingrese el numero a evaluar \n";
    cin>>num;
    calcular_primo(num);
    return 0;
}
int calcular_primo(int num){
    int divisores=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
            divisores++;
    }
    if(num==1 ||num==0)
        cout<<"El numero "<<num<<" no es primo "<<endl;
    else if(num<0)
        cout<<"Ingrese un numero positivo"<<endl;
    else if (divisores==2)
        cout<<"El numero "<<num<<" es primo"<<endl;
    else
        cout<<"El numero "<<num<<" no es primo "<<endl;
    return 0;
}
