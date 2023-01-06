
#include <iostream>
using namespace std;

int bsecuencial(int A[], int b, int tam)
{
for(int i = 0; i< tam; i++){
if(A[i]==b)
{ 
    cout<<"La posicion del numero buscado es: "<<i<<endl;
    return i;
}
cout<<"No existe";
}
int main()
{
int x[10],y;
int n=(sizeof(x)/sizeof(x[0]));
cout<<"ingresar 10 numeros\n";
for(int i=0;i<n;i++)
cin>>x[i];

cout<<"ingresar el numero a buscar: ";
cin>>y;

bsecuencial(x,y,n);
}