

#include <iostream>

using namespace std;

void Burbuja(int a[],int tam)
{
for(int i = 0; i< tam - 1 ; i++)
for(int j = i; j< tam;j++)
if(a[i]>a[j])
{
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

}
int main()
{
int b[20] = {1,2,3,2,4,3,5,6,3,7,8,9,4,5,3,5,3,4,5,6};
cout <<"Lista Original:" <<endl;
for(int i =0; i<20; i++)
cout << b[i] <<" ";
cout <<endl;

Burbuja(b,20);
cout <<"\nLista Ordenada:" <<endl;
for(int i =0; i<20; i++)
cout << b[i] <<" ";
cout << endl;
system("pause");;
return 0;
}