

#include <iostream>
using namespace std;

class Curso{
    //datos miembro
    private:
    string _nombreCurso;

    public: 
    //funciones miembro
    //funciones getter y setters
    //constructor
    Curso(string nombre){
        _nombreCurso = nombre;
    }
    void asignarNombreCurso(string nombre){
        _nombreCurso = nombre;
    }
    void mostrarCurso() const{
        cout<<"BIENVENIDOS AL CURSO DE "<<_nombreCurso;

    }
};
int main(){
    string curso;
    cout<<"INGRESE NOMBRE DEL CURSO \n";
    getline(cin,curso);
    //int variable;
    Curso instanciaCurso("primer nombre");
    cout<<endl;
    instanciaCurso.mostrarCurso();
    cout<<endl;
    instanciaCurso.asignarNombreCurso(curso);
    instanciaCurso.mostrarCurso();
    cout<<endl;
    instanciaCurso.asignarNombreCurso("algo");
    instanciaCurso.mostrarCurso();

    return 0;
}