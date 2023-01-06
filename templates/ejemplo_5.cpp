#include <iostream>
#include <vector> //  permite almacenar varios valores bajo una sola variable y realizar operaciones complejas con esta
#include <string>
using namespace std;
template <class TipoGenerico> // declaramos nuestro template 
class Datos{                    //creamos nuestra clase
    public:
    Datos(TipoGenerico x){      //creamos nuestro constructor 
    cout<<x<<" es de tipo numerico "<<endl;
    }
};
template<>class Datos<string>{
    public:
    Datos(string x){        //Constructor
    cout<<x<<" es una cadena "<<endl;
    }
};

int main(){
    Datos<int> numero_entero(10);       //al llamar a nuestra clase, esta mediante el template designara de que tipo es
    Datos<float> numero_decimal(80.67);
    Datos<string> cadena("TEXTO");
}