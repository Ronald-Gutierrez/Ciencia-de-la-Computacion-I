
#include <iostream>
#include <string>

class Cuenta{
    private:
        int _saldoCuenta;

    public:
        Cuenta(int saldo);
        void abonar(int abono);
        void cargar(int carga);
        void mostrar();
};
