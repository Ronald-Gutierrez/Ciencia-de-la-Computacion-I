#include <iostream>

using namespace std;

class Miclase{

    int a;
    public:
        Miclase(int);
        ~Miclase();
       void mostrar();
};
Miclase::Miclase(int _a){
    a=_a;
}
Miclase::~Miclase(){}
void Miclase::mostrar(){
    cout<<"El numero es: "<<a<<endl;
}
int main(){
    Miclase objeto(100);
    objeto.mostrar();

    return 0;
}