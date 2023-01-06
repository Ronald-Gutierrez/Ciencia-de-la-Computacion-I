

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int multiplicacion(int, int);
void saludar();
float restar (float, float);
int main(){
    int num1,num2,text;
    //cout<<"ingrese los numeros \n";
    //cin>>num1;
    //cin>>num2;
    //cout<<"La multiplicacion es: "<<multiplicacion(num1,num2)<<endl;
    //cout<<"La resta es: "<<restar(num1,num2)<<endl;
    //saludar();
    
    cout<<rand()%6+1;
    return 0;
}

int multiplicacion(int num1,int num2){
    return num1*num2;
}
void saludar(){
    cout<<"Bienvenido a Funciones"<<endl;
}
float restar (float num1, float num2){
    return num1-num2;
}
