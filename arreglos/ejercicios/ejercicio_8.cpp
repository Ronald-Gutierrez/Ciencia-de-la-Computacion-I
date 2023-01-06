#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
using namespace std;



int main(){
    int max;
    int num,agregar;
    array<int,10> nombre_arreglo;

    for(int i=0;i<nombre_arreglo.size();i++){
        nombre_arreglo[i]=450;
            if(i%2==0)
                nombre_arreglo[i]+=200;
    }  
    cout<<"¿A que elemento quiere sumar? \n";
    cin>>num;
    switch(num){
        case 0:
            cout<<"Agregar valores a la posicion 0"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[0]+=agregar;
            break;
        case 1:
            cout<<"Agregar valores a la posicion 1"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[1]+=agregar;
            break;
        case 2:
            cout<<"Agregar valores a la posicion 2"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[2]+=agregar;
            break;
        case 3:
            cout<<"Agregar valores a la posicion 3"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[3]+=agregar;
            break;
        case 4:
            cout<<"Agregar valores a la posicion 4"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[4]+=agregar;
            break;
        case 5:
            cout<<"Agregar valores a la posicion 5"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[5]+=agregar;
            break;
        case 6:
            cout<<"Agregar valores a la posicion 6"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[6]+=agregar;
            break;
        case 7:
            cout<<"Agregar valores a la posicion 7"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[7]+=agregar;
            break;
        case 8:
            cout<<"Agregar valores a la posicion 8"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[8]+=agregar;
            break;
        case 9:
            cout<<"Agregar valores a la posicion 9"<<endl;
            cout<<"Cuanto desea agregar?"<<endl;
            cin>>agregar;
            nombre_arreglo[9]+=agregar;
            break;
        
    }

    cout<<"Elemento \tValor"<<endl;

    for(int i=0;i<nombre_arreglo.size();i++)
        cout<<i<<"\t \t"<<nombre_arreglo[i]<<endl;
    cout<<endl;
    sort(nombre_arreglo.begin(),nombre_arreglo.end());
    cout<<"La lista ordenada es: "<<endl;
    for(int valor :nombre_arreglo)
        cout<<valor<<endl;
    return 0;
}
