#include <iostream>
#include <string.h>
class Cuenta{
    std::string titular;
    float cantidad=0,ingresar=0,retirar=0;
    public:
        Cuenta(std::string _titular,int _cantidad);
        ~Cuenta();
        void setTitular(std::string _titular);
        std::string getTitular();
        void setCantidad(float _cantidad);
        float getCantidad();
        void setIngresar(float _ingresar);
        float getIngresar();
        void setRetirar(float _retirar);
        float getRetirar();
        void mostrar();
};