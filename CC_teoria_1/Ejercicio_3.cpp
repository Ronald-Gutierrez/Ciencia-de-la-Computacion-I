#include <iostream>  

using namespace std;    
        
int main()
{  
    int tiempo,h,m,s;
    cout<<"INGRESE EL TIEMPO TOTAL EN SEGUNDOS \n";
    cin>>tiempo;
    h=tiempo/3600;
    tiempo%=3600;
    m=tiempo/60;
    s=tiempo%60;
    cout<<"-------------------------------------------- \n";
    cout<<h<<" HORA(S)"<<"\t"<<m<<"  MINUTOS "<<"\t"<<s<<" SEGUNDOS"<<endl;
    cout<<"-------------------------------------------- \n";

    return 0;
}