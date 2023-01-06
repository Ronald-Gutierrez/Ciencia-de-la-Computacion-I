#include <iostream>
using namespace std;

class Entero {
    public: int x;
        friend Entero& operator++(Entero&); // declaramos dos funciones friend para que puedan acceder otros operadores o funciones
        friend Entero& operator--(Entero&);
};
Entero& operator++ (Entero& e){
    e.x = e.x + e.x;        // sobrecargamos nuestro operador e con incremento
    return e;
}
Entero& operator-- (Entero& e){
    e.x = e.x / 2;          // sobrecargamos nuestro operador e con incremento
    return e;
}
int main (){
    Entero e1, e2, e3; // declaramos nuestras variables 
    e1.x = 5;
    e3 = ++e2 = ++e1; // asignamos el incremento para e1 y e2
    cout << " e1 = " << e1.x << "; e2 = " << e2.x<<endl; // imprime el incremento de e1 y e2
    e3 = --e2 = --e1;   // asignamos el decremento para e1 y e2
    cout << " e1 = " << e1.x << "; e2 = " << e2.x<<endl;    // imprime el decremento de e1 y e2
}