#include <iostream>
#define MAXIMO 100
using namespace std;
template <class T>
class pila{
    private:
        int ultimo;
        T datos[MAXIMO];
    public:
        pila () {ultimo= 0;} // Constructor
        void push (T v);
        void pop ();
        T tope();
};
// Implementación de los métodos
template <class T>
void pila<T>::push (T v){
    if (ultimo<MAXIMO)
        datos[ultimo++]= v;
}
template <class T>
void pila<T>::pop (){
    if (ultimo>0)
        ultimo--;
}
template <class T>
T pila<T>::tope (){
    return datos[ultimo-1];
}
int main (){
    pila<int> p1; // p1 es una pila de enteros
    p1.push(4); p1.push(9);
    p1.pop();
    cout << p1.tope() << '\n';
    pila<char *> p2; // p2 es una pila de cadenas
    p2.push("Ultimo"); p2.push("en"); p2.push("entrar");
    p2.push("primero"); p2.push("en"); p2.push("salir");
    for (int i= 0; i<6; i++, p2.pop())
    cout << p2.tope() << '\n';
    pila<float> *p3; // p3 es una pila de float que
    p3= new pila<float>; // se crea dinámicamente
    p3->push(1.3); p3->push(2.19); p3->push(3.14);
    cout << p3->tope() << '\n';
    delete p3;
    return 0;
}