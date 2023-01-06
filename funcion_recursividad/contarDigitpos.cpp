#include <iostream>
#include <cmath>
using namespace std;

int contarDigitos(int);
int main(){

    cout<<contarDigitos(1023);
    return 0;
}
int contarDigitos(int num){
    if(num==1);
        return 1;
    return 1+contarDigitos(num/10);
}
