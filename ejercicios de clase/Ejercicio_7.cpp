

#include <iostream>  

using namespace std;    
        
int main()
{   int num1,num2,num3;
    cout<<"INGRESE LOS VALORES \n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if (num1>num2){
        cout<<"El mayor valor es: "<<num1;
    }
    else if (num2>num3){
        cout<<"El mayor valor es: "<<num2;
    }
    else if (num3>num1){
        cout<<"El mayor valor es: "<<num3;
    }
    else if (num2>num1){
        cout<<"El mayor valor es: "<<num2;
    }
    else if (num1>num3){
        cout<<"El mayor valor es: "<<num1;
    }

    return 0;
}