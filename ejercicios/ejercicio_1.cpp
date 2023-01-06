
#include <iostream>  

using namespace std;    
        
int main()
{  
    int num1,num2,producto,promedio;

    cout<<"INGRESE EL PRIMER NUMERO \n";
    cin>>num1;
    cout<<"INGRESE EL SEGUNDO NUMERO \n";
    cin>>num2;
    producto = num1*num2;
    promedio = (num1 + num2)/2;

    cout<<"El producto es: "<<producto<<endl;
    cout<<"El promedio es: "<<promedio;

    return 0;
}