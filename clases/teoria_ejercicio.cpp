
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Animal{
    private:
        string nombre;
    public:
        Animal(string); // constructor
        virtual void comer(); //método de Polimorfismo, solo en la clase padre irá siempre virtual
};
class Humano : public Animal{
    private:
        string apellido; // creamos su atributo apellido para el humano
    public:
        Humano(string,string);//constructor
        void comer(); 
};
class Perro:public Animal{
    private:
        string raza; //creamos el atributo de raza para el perro
    public:
        Perro(string,string);//constructor
        void comer();
};
Animal::Animal(string _nombre){
        nombre = _nombre;
}
void Animal::comer(){
    cout<<"Nombre: "<<nombre<<endl;
}
Humano::Humano(string _nombre,string _apellido):Animal(_nombre){
    apellido=_apellido;
}
void Humano::comer(){
    Animal::comer(); 
    cout<<"Apellido: "<<apellido<<"\nCome en un plato con una cuchara o tenedor "<<endl;
}
Perro::Perro(string _nombre,string _raza):Animal(_nombre){
    raza=_raza;
}
void Perro::comer(){
    Animal::comer(); 
    cout<<"Raza: "<<raza<<"\nDesgarra con sus dientes la carne "<<endl;
}
int main(){
    Animal *vector[3]; //objeto vector haciendo uso de punteros, es objeto de la clase persona
    vector[0]=new Humano("Pedro","Diaz"); //objeto Humano
    vector[1]=new Perro("Bobby"," chiguagua");//objeto Perro
    vector[0]->comer();
    cout<<"\n";
    vector[1]->comer();
    cout<<"\n";
    cout<<"\n";
    system("pause");
    return 0;
}