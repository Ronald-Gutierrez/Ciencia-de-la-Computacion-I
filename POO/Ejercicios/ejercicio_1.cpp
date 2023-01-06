#include <iostream>
#include <string.h>
#include "ejercicio_1.h"
using namespace std;

Libro::~Libro(){}
Libro::Libro(string _titulo,string _autor){
    titulo=_titulo;
    autor=_autor;
}
Libro::Libro(string _titulo, int _isbn,string _autor, int _num_pag){
    titulo=_titulo;
    autor=_autor;
    isbn=_isbn;
    num_pag=_num_pag;
}
//int isbn,num_pag;
// string titulo,autor,libro;
void Libro::setIsbn(int _isbn){
    isbn=_isbn;
}
int Libro::getIsbn(){
    return isbn;
}
void Libro::setNum_pag(int _num_pag){
    num_pag=_num_pag;
}
int Libro::getNum_pag(){
    return num_pag;
}
void Libro::setAutor(string _autor){
    autor=_autor;
}
string Libro::getAutor(){
    return autor;
}
void Libro::setTitulo(string _titulo){
    titulo=_titulo;
}
string Libro::getTitulo(){
    return titulo;
}

void Libro::mostrar(){
    cout<<"El libro "<<getTitulo()<<" con ISBN "<<getIsbn()<<endl;
    cout<<"creado por el autor "<<getAutor()<<" tiene "<<getNum_pag()<<" paginas"<<endl;
}

   