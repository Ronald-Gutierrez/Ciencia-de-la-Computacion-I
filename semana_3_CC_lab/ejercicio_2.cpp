

#include <iostream>
using namespace std;

int main(){
    int num=0,max=0;
    while(num!=-1){
        cout<<"Ingrese un numero \n";
        cin>>num;
        if(num>max){
            max=num;
        }
    }
    
    cout<<"El numero maximo es: "<<max<<endl;
    return 0;
}