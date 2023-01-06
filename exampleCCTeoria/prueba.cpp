

// Hace falta el #include <iostream>
// Hace falta el using namespace std;
class ClaseBase{
    protected:
    std::string name = "";
    public:
    ClaseBase(std::string n):name(n){
    }
    void showName(){
        cout<<"My name is: "<<name<<endl; // Hace falta el std::
    }
};
class DerivadaA: private ClaseBase{ // se llama a la ClaseBase pero con private, cuando debe de ser public
    public:
    DerivadaA(std::string n):name(n){ 
    }
};
class DerivadaB: public DerivadaA  // Haria falta los parametros public de a class DerivadaA 
{
};
int main(){
    DerivadaA obj1("Objeto_1");
    DerivadaB obj2("Objeto_2");
    obj1.showName();
    obj2.showName();
    return 0; // Falto colocar para que finalice ocn exito
}

