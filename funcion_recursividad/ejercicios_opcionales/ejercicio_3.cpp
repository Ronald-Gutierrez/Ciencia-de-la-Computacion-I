#include <iostream>
#include <cmath>
using namespace std;

float num_horas();

int main(){
    num_horas();
    return 0;
}
float num_horas(){
    float horas,sumador=0,total=0,inicial=3;
    while(horas!=-1){
        cout<<"Ingrese la hora \n";
        cin>>horas;
            if(horas!=-1){
                sumador+=horas;
            }
                if(sumador==12)
                    break;
    }
    total= ((sumador-1)*0.5)+3;
    cout<<"El total a pagar es: "<<total<<endl;
}
