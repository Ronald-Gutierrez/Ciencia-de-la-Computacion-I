

#include <iostream>

using namespace std;    
        
int main()

{  int monto1,monto2,monto3,s_neto;
    cout<<"INGRESE LOS 3 MONTOS VENDIDOS \n";
    cin>>monto1;
    cin>>monto2;
    cin>>monto3;

    s_neto = (monto1+ monto2+ monto3)*0.12 + 450;

    cout<<"EL SUELDO NETO DEL VENDEDOR ES: "<<s_neto;
    return 0;
}