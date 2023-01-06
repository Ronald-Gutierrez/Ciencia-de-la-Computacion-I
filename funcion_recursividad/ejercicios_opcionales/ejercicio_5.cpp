#include <iostream>
using namespace std;

int rombo();//El rombo solo aceptara numeros impares como ancho

int main(){
    rombo();
    return 0;
}
int rombo(){
    int n=0,conv,ast=0,esp=0;
    cout<<"Cuantos asteriscos de ancho desea \n ";
    cin>>conv;
    n=(conv+1)/2;
    for (int i=1;i<=n;i++){
        for(esp=i;esp<=n-1;esp++)
            cout<<" ";
        for(ast=1;ast<=(2*i)-1;ast++)
            cout<<"*";
        cout<<endl;
    }
    for (int i=n-1;i>=1;i--){
        for(esp=i;esp<=n-1;esp++)
            cout<<" ";
        for(ast=1;ast<=(2*i)-1;ast++)
            cout<<"*";
        cout<<endl;
    }
}