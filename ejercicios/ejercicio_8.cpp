

#include <iostream>

using namespace std;    
        
int main()

{  float monto,carlos,jose,martha;
    cout<<"INGRESE EL MONTO DE LA FORTUNA \n";
    cin>>monto;

    carlos = monto/3;
    jose = 4*monto/9;
    martha = 4*monto/18;

    cout<<"A CARLOS LE TOCA: "<<carlos<<endl;
    cout<<"A JOSE LE TOCA: "<<jose<<endl;
    cout<<"A MARTHA LE TOCA: "<<martha;


    return 0;
}