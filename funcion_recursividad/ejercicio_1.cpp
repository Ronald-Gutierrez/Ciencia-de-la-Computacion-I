#include <iostream>
#include <ctime>
using namespace std;

int num_aleatorio();

int main(){
    srand(static_cast<unsigned int> (time(0)));
    for(int i=1;i<=3;i++){
        cout<<endl;
        cout<<"\t"<<num_aleatorio()<<"\t"<<num_aleatorio()<<"\t"<<num_aleatorio()<<"\t"<<num_aleatorio()<<"\t"<<num_aleatorio()<<endl;
    }
    return 0;
}
int num_aleatorio(){
    return rand();
}