

#include <iostream>

using namespace std;

int main(){

    int monto,w,w2,x,x2,y,y2,z,z2;
    cout<<"INGRESE EL MONTO TOTAL\n";
    cin>>monto;
    
    w=monto/0.5;
    w2=monto%50;

    x = w2/20;
    x2 = w2%20;

    y=x2/10;
    y2=x2%10;

    z=y2/5;
    z2=y2%5;

    cout<<"------------------------------------ \n";
    cout<<"\t"<<w<<"  MONEDAS DE 50 "<<endl;
    cout<<"\t"<<x<<"  MONEDAS DE 20 "<<endl;
    cout<<"\t"<<y<<"  MONEDAS DE 10 "<<endl;
    cout<<"\t"<<z<<"  MONEDAS DE  5 "<<endl;
    cout<<"------------------------------------ \n";

    return 0;

}