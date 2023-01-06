
#include <iostream>
using namespace std;

int main(){
    int pago_fijo=200,venta=0,total_ventas=0,pago_semanal;

    for(int i=1;i<=7;i++){ // va de 1 a 7, por los dias de la semana
        cout<<"Ingrese la cantidad vendida hoy: "<<endl;
        cin>>venta;
        total_ventas+=venta;

    }
    pago_semanal= (total_ventas*0.09)+pago_fijo;
    cout<<"Su pago semanal es: "<<pago_semanal<<endl;
    return 0;
}



