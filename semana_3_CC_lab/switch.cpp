
#include <iostream>
using namespace std;

int main(){

    int numero,par,impar; 
    cout<<"ingrese su numero  \n";
    cin>>numero;

    switch (numero%2 || -numero%2){
        case 0:
            cout<<"es par";
            break;
        case 1:
            cout<<"es impar";
            break;
    }
    return 0;
}