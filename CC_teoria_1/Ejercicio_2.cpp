

#include <iostream>  
using namespace std;        
int main()
{  
    float cola,p_cola,naranja,p_naranja,limon,p_limon,total;
    cout<<"INGRESE LA CANTIDAD DE REFRESCO COLA Y SU PRECIO \n";
    cin>>cola;
    cin>>p_cola;
    cout<<"INGRESE LA CANTIDAD DE REFRESCO DE NARANJA Y SU PRECIO \n";
    cin>>naranja;
    cin>>p_naranja;
    cout<<"INGRESE LA CANTIDAD DE REFRESCO DE LIMON Y SU PRECIO \n";
    cin>>limon;
    cin>>p_limon;

    if (cola>=5000000 || naranja>=5000000 || limon>=5000000){
        cola =5000000;
        naranja=5000000;
        limon=5000000;
    }
    cout<<"PRODUCTO"<<"\t"<<"VENTAS"<<"\t"<<"PRECIO"<<"\t"<<"TOTAL"<<endl;
    cout<<"-------------------------------------- \n";
    cout<<"COLA"<<"\t \t"<<cola<<"\t"<<p_cola<<"\t"<<cola*p_cola<<endl;
    cout<<"NARANJA"<<"\t \t"<<naranja<<"\t"<<p_naranja<<"\t"<<naranja*p_naranja<<endl;
    cout<<"LIMON"<<"\t \t"<<limon<<"\t"<<p_limon<<"\t"<<limon*p_limon<<endl;
    total = cola*p_cola + naranja*p_naranja + limon*p_limon;
    cout<<"-------------------------------------- \n";
    cout<<"\t \t \t"<<"TOTAL  "<<total;
    return 0;
}


