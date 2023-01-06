
#include <iostream>
#include <cmath>
using namespace std;

float entero(float,float,float);

int main(){
    float a,b,c;
    a=25.75;
    b=10.5;
    c=12.7;
    cout<<entero(a,b,c);
    return 0;
}

float entero(float a,float b,float c){
    if(a>=b && a>=c)
        return ceil(a);
    else if (b>a && b>=c)
        return ceil(b);
    else 
        return ceil(c);
}
