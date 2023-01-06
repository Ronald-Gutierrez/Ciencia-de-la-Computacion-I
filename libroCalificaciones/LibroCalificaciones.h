
#include <iostream>
#include <string>

class LibroCalificaciones{
    private:
        int _nota,_total,_suma=0,_promedio=0,_aprobados,_desaprobados;
        
    public: 
    LibroCalificaciones(int nota);
    void setPromedios(int nota,int suma,int promedio);
    int getPromedios();

};


