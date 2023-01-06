#include <iostream>
using namespace std;
template<class T>

class suma{            //primero declaramos los metodos y despues los atributos
    public:
        suma(T,T);//constructor
        T sumar();
    private:
        T n1; //T es cualquier tipo de dato
        T n2;
};
//metodo sumar
template<class T>
suma<T>::suma(T n,T m){ //:: operador de ambito
    n1 = n;             //asignamos nuestras variables
    n2 = m;
}
template<class T>
T suma<T>::sumar(){         // retornamos nuestras variables a sumarse
    return n1+n2;
}
int main(){
    suma<int> sum(4,6); //objeto sum
    cout<<sum.sumar();      //llamamos a nuestra funcion suma con los valores ya ingresados como argumentos
    return 0;
}