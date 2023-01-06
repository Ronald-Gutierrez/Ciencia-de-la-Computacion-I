#include <iostream>
using namespace std;

int conv_segundos(int,int,int);

int main(){
    int h,m,s;
    h= 1;
    m=1;
    s=5;
    cout<<"El total en segundos es: "<<conv_segundos(h,m,s);
    return 0;
}
int conv_segundos(int horas, int minutos, int segundos){
    int total_seg=0;
    horas = horas*3600;
    minutos = minutos*60;
    segundos= segundos;
    total_seg=horas+minutos+segundos;
    return total_seg;
}
