
#include <iostream>
using namespace std;
static void seleccion (int a[],int n)
{
int indiceMenor,i,j,temp;
for (i = 0; i < n-1; i++)
{
//comienzo de la exploración en índice i
indiceMenor = i;
//j explora la sublista a[i+1]..a[n-1]
for (j = i+1; j < n; j++)
if (a[j] < a[indiceMenor])
indiceMenor = j;
temp=a[indiceMenor];
a[indiceMenor]=a[i];
a[i]=temp;
}
}
int main()
{
int b[] = {40,21,4,9,10,35};
int n=(sizeof(b)/sizeof(b[0]));

cout <<"Lista Original" <<endl;
for(int i =0; i<n; i++)
cout << b[i] <<" ";
cout <<endl;
seleccion(b,n);
cout <<"\nLista Ordenada" <<endl;

for(int i =0; i<n; i++)
cout << b[i] <<" ";
cout << endl;
system("pause");;
return 0;
}