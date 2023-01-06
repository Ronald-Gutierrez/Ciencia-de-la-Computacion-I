
#include<iostream>
#include<conio.h>
using namespace std;
template <typename t>           //tipo de dato general
void intercambiar(t a, t b){        //nuestra prototipo de funcion junto con la implementacion
    t c=a;                  //se asigna el valor de "a" a "c" y de "b" a "a"
    a = b;
    b = c;
    cout<<a<<" "<<b<<endl;      //imprime los valores ya cambiados
}

int main(){
    intercambiar(10,15);                //ingreso de nuestros valores a intercambiar del tipo que sea
    intercambiar("aqui","alla");
    intercambiar(true,false);
    getch();
    return 0;
}