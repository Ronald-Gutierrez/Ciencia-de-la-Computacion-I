#include <iostream>
#include <string>

class LibroCalificaciones{
    private:
        int _nota,_aprobados,_desaprobados;
        
    public: 
    LibroCalificaciones(int nota);
    void setAprobacion(int nota,int aprobados, int desaprobados);
    int getAprobacion();

};

