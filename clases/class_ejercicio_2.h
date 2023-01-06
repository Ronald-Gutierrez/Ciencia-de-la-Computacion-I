
#include <iostream>
#include <string>

class Factura{
    private:
        std::string _codArt;
        std::string _descrArt;
        int _cantArt;
        int _precArt;
    public:
        Factura(std::string codArt,std::string descrArt,int cantArt, int precArt);
        void codigoArticulo(std::string codArt);
        void precioArticulo(int precArt);
        void descripcionArticulo(std::string descrArt);
        void cantidadArticulo(int cantArt);
        void obtener() const;
        void mostrarFactura();
};