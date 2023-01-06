#include <iostream>
#include <string>

class Empleado
{   private:
        std::string _nombre;
        std::string _apellido;
        int _salario;

    public:
        Empleado (std::string nombre,std::string apellido,int salario);
        void setNombre(std::string nombre);
        std::string getNombre()const;
        void setApellido(std::string apellido);
        std::string getApellido()const;
        void setSalario(int salario);
        int getSalario()const;
        void mostrar();
};