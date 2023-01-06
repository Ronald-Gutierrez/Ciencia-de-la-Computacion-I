

#include <iostream>

using namespace std;    
        
int main()

{  float total,aprobados,desaprobados;
    cout<<"EL TOTAL DE ALUMNOS ES 30 \n";
    cout<<"INGRESE EL NUMERO DE ALUMNOS APROBADOS \n";
    cin>>aprobados;
    cout<<"INGRESE EL NUMERO DE ALUMNOS DESAPROBADOS \n";
    cin>>desaprobados;

    aprobados= aprobados*3.3;
    desaprobados = desaprobados*3.3;
    cout<<"DE 30 ALUMNOS \n";
    cout<<"EL PORCENTAJE EN APROBADOS ES: "<<aprobados<<"%"<<endl;
    cout<<"EL PORCENTAJE EN DESAPROBADOS ES: "<<desaprobados<<"%";

    return 0;
}