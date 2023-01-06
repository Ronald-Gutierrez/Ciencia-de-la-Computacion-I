#include <iostream>
#include <string.h>
class Libro{
    int isbn=0,num_pag=0;
    std::string titulo="Ninguno",autor="Ninguno";
    public:
    Libro(std::string _titulo,std::string _autor);
    Libro(std::string _titulo, int _isbn,std::string _autor, int _num_pag);
    ~Libro();
    void setTitulo(std::string _titulo);
    std::string getTitulo();
    void setAutor(std::string _autor);
    std::string getAutor();
    void setLibro(std::string _libro);
    std::string getLibro();
    void setIsbn(int _isbn);
    int getIsbn();
    void setNum_pag(int _num_pag);
    int getNum_pag();
    void mostrar();

};