
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num,num2;

    cout<<"Ingrese en numero: \n";
    cin>>num;
    
    cout<<"La raiz de "<<num<<" es: "<<sqrt(num)<<endl;
    cout<<"El redondeo de "<<num<<" hacia arriba es: "<<ceil(num)<<endl;
    cout<<"El redondeo de "<<num<<" hacia abajo es: "<<floor(num)<<endl;
    cout<<"El valor absoluto de "<<num<<" es :"<<fabs(num)<<endl;
    cout<<"El logaritomo de:"<<num<<" es: "<<log10(num)<<endl;
    cout<<"El sen de "<<num<<" es: "<<sin(num)<<endl;
    cout<<"El tan de "<<num<<" es: "<<tan(num)<<endl;

    cout<<"Ingrese el segundo numero: \n";
    cin>>num2;
    cout<<num<<" elevado a "<<num2<<" es: "<<pow(num,num2)<<endl;

    return 0;
}