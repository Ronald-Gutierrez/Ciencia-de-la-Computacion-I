
#include <iostream>
using namespace std;



int main(){

    int x,total,suma=0,promedio=0;
    cout<<"Ingrese el total de datos"<<endl;
    cin>>total;
    int i=1;
    for (;i<=total;){ // condicion fija,, --- se puede sacar la primera como el final del for
        cout<<"Ingrese un numero"<<endl;
        cin>>x;
        suma+=x;
        i++;
    }
    promedio=suma/total;
    cout<<"El promedio es: "<<promedio<<endl;
}




/*
int main(){
    int a,suma=0,total=0;
    float promedio=0;
    while(a!=0){
        cout<<"Ingrese un numero \n";
        cin>>a;
        if(a!=0){
            suma+=a;
            total++;
        }
    }
    promedio = suma/total;
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;
}
*/