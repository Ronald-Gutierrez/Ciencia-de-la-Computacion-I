#include<iostream>
using namespace std;
template<typename tipo>
 class Contenedor{
    private:
        tipo arreglo[10];       // declaramos nuestro atributo areglo
    public:
        tipo obtiene(int pos){      //implementamos nuestro metodo obtiene, establece e imprime
        return arreglo[pos];
        }
        void establece(tipo valor, int pos){
        arreglo[pos]=valor;
        }
        void imprime() const;
};
template<typename tipo> void Contenedor<tipo>::imprime() const{     //En nuestro metodo imprime, recorrera el arreglo
    for(int i=0; i<5;i++)
    cout<<arreglo[i]<<' ';
    cout<<endl;
}

int main(){
    Contenedor<int> c1;
    Contenedor<float> c2;
    Contenedor<double> c3;              
    //Llamamos a nuestras funciones      lo que hara, solo imprimira el primer argumento de la funcion establece, 
    c1.establece(1,0);
    c1.establece(50,1);
    c1.establece(-23,2);
    c1.establece(600,3);
    c1.establece(1000,4);
    c2.establece(2.3f,0);
    c2.establece(9.4f,1);
    c2.establece(10.25f,2);
    c2.establece(-100.01f,3);
    c2.establece(-20.1f,4);
    c3.establece(1.1,0);
    c3.establece(100.45,0);
    c3.establece(20000.1,2);
    c3.establece(1000000.527,3);
    c3.establece(3001.0,4);
    c1.imprime();
    c2.imprime();
    c3.imprime();
    return 0;

}