#include <iostream>
#include <string.h>
class Electrodomestico{
    float precio_base=100,peso=5,precio_final=0;
    std::string color="blanco",consumo_energetico="F";
    public:
        Electrodomestico();
        Electrodomestico(float _precio_base, float _peso);
        Electrodomestico(float _precio_base, std::string _color, std::string _consumo_energetico, float _peso);
        ~Electrodomestico();
        void setComprobarConsumoEnergetico(std::string _letra);
        std::string getComprobarConsumoEnergetico();
        void seetComprobarColor(std::string _color);
        std::string getComprobarColor();
        void setPeso(float _peso);
        float getPeso();
        void setPrecio_base(float _precio_base);
        float getPrecio_base();
        void setPrecioFinal(float _precio_final);
        float getPrecioFinal();
        void mostrar();
        void setConsumoEnergetico(std::string _consumo_energetico);
        std::string getConsumoEnergetico();
        void setColor(std::string _color);
        std::string getColor();
};
class Lavadora:public Electrodomestico{
    int carga=0,precio_final2=0;
    public:
        Lavadora(float, std::string, std::string, float,int);
        ~Lavadora();
        void setCarga(int _carga);
        int getCarga();
        void setPrecioFinal2(int _precio_final2);
        int getPrecioFinal2();
        void mostrarLavadora();
};
