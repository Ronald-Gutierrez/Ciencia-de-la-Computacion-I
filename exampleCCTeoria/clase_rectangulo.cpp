#include <iostream>
using namespace std;

class Rectangulo{
    private:
        size_t largo;
        size_t ancho;

    public:
        Rectangulo(size_t, size_t);
        void perimetro();
        void area();
};

Rectangulo::Rectangulo(size_t _largo,size_t _ancho){
    largo = _largo;
    ancho =_ancho;
}
void Rectangulo::perimetro(){
    cout<<"El perimetro del rectangulo es: "<<(largo+ancho)*2<<endl;
}
void Rectangulo::area(){
    cout<<"El area del rectangulo es: "<<largo*ancho<<endl;
}

int main (){
    size_t a,b;
    cout<<"INGRESE EL LARGO Y ANCHO DEL RECTANGULO"<<endl;
    cin>>a;cin>>b;
    Rectangulo rect1(a,b);
    rect1.perimetro();
    rect1.area();

    system("pause");
    return 0;
}