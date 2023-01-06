#include <iostream>
#include <iomanip>
using namespace std;

void num_max_y_min();

int main(){
    num_max_y_min();
    return 0;
}
void num_max_y_min(){
    int numero[100],num,max=0,min=0;
    cout<<"INGRESE EL NUMERO DE ELEMENTOS DEL 1 AL 100 \n";
    cin>>num;
    for (int i=0;i<num;i++){
        cout<<"Digite un numero: ";
        cin>>numero[i];
        if (numero[i]>max)
            max = numero[i];
    }
    min=max;
    for (int i=0;i<num;i++){
        if (numero[i]<max)
            max = numero[i];
    }
    
    cout<<"El numero mayor es: "<<max<<endl;
    cout<<"El numero menor es: "<<min<<endl;
}
