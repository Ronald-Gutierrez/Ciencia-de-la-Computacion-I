
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int lanzarDados();

int main(){
    int uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0;
    srand(static_cast<unsigned int> (time(0)));
    for(int i=1; i<=10000 ;i++){
        switch(lanzarDados())
        {
        case 1:
            uno++;
            break;
        case 2:
            dos++;
            break;
        case 3:
            tres++;
            break;
        case 4:
            cuatro++;
            break;
        case 5:
            cinco++;
            break;
        default:
            seis++;
            break;           
        }
    }
    cout<<"cantidad de 1 es: "<<uno<<endl;
    cout<<"cantidad de 2 es: "<<dos<<endl;
    cout<<"cantidad de 3 es: "<<tres<<endl;
    cout<<"cantidad de 4 es: "<<cuatro<<endl;
    cout<<"cantidad de 5 es: "<<cinco<<endl;
    cout<<"cantidad de 6 es: "<<seis<<endl;
    cout<<uno+dos+tres+cuatro+cinco+seis;
    return 0;
}

int lanzarDados(){
    return rand()%6+1;
};