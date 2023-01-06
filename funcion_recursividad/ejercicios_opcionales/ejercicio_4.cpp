#include <iostream>
using namespace std;

int multiplo(int, int);

int main(){
    multiplo(4,24);
    return 0;
}

int multiplo(int a, int b){
    if((b%a==1) || (b%a==0))
        cout<<"Si es multiplo "<<endl;
    else    
        cout<<"No es multiplo"<<endl;
}
