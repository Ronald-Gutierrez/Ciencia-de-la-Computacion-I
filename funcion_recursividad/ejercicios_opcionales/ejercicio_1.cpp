
#include <iostream>
using namespace std;

float menor(float,float,float);

int main(){
    cout<<menor(-3.43,10.22,-2);
    return 0;
}

float menor(float a,float b,float c){

    if(a<=b && a<=c)
        return a;
    else if (b<a && b<=c)
        return b;
    else 
        return c;
}
