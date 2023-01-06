#include <iostream>
#include <cmath>
using namespace std;

// Ejemplo 
// Punto_1 = (7,5)
//Punto_2 = (4,1)
// Distancia = 5

int distanciaPuntos(float,float,float,float);

int main(){
    float x1,y1,x2,y2;
    cout<<"Ingrese la coordenada X1 y Y1 \n";
    cin>>x1;cin>>y1;
    cout<<"Ingrese la coordenada X2 y Y2 \n";
    cin>>x2;cin>>y2;
    cout<<"La distancia entre los puntos es: "<<distanciaPuntos(x1,y1,x2,y2);
    return 0;
}
int distanciaPuntos(float x1,float y1,float x2,float y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}