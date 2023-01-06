
#include <iostream>
using namespace std;
int main(){
    int lados;
    cout<<"Ingrese el lado: ";cin>>lados;
    for(int i=1; i<=lados;i++){
        for(int j=1; j<=lados; j++){
            if(j==1 or j==lados or i==1 or i==lados){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

