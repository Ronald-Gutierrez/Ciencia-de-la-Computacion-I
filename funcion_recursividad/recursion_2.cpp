
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int factorial(int);

int main(){
    int a;
    cout<<"ingrese el numero \n";
    cin>>a;
    cout<<factorial(a);
    return 0;
}
int factorial(int num){
    if(num==1)
        return 1;
    else if(num=0)
        return 1;
    return num=num*factorial(num-1);
}