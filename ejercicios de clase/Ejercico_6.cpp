

#include <iostream>  

using namespace std;    
        
int main(){  
    
    int num1,num2;
    cout<<"INGRESE LOS VALORES \n";

    cin>>num1>>num2;

    if (num1>num2){

        cout<<num1<<" Es mayo que "<<num2;
    }
    else if (num1<num2){

        cout<<num2<<" Es mayo que "<<num1;
    }
    else if (num1==num2){

        cout<<num2<<" Es igual que "<<num1;
    }

    return 0;
}