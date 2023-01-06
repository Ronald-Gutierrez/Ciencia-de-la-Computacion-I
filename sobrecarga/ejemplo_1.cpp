
#include <iostream>
using namespace std;

class Vector{   //creamos nuestra clase Vector
    public:
        float x, y;     // declaramos nuestras variables
        Vector operator+ (Vector v){ // función-operador operator suma binaria +
            x = x + v.x;        // le asignamos la sobre carga para x
            y = y + v.y;        // le asignamos la sobre carga para y
            return *this;
        }
};
int main (){
    float x = 5, y = 6;
    cout <<"R = "<<x + y<< endl; // versión global
    Vector v1 = {1, 2}, v2 = {3, 4};
    Vector v3 = v1 + v2; // sobrecarga con objetos v1 y v2 de la clase vector
    cout <<"Rx = "<< v3.x << endl; // se imprime la suma, de v1 el elemento 1 de v2 el elemento 3
    cout <<"Ry = "<< v3.y << endl; // se imprime la suma, de v1 el elemento 2 de v2 el elemento 4
    return 0;
}