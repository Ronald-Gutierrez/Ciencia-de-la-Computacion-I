
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
const size_t filas=8;
const size_t columnas=8;

void imprimir_arreglo(const array<array<int, columnas>,filas>& ); 

int main(){
    array<array<int, columnas> ,filas>arreglo1 = 
    {   1,48,31,50,33,16,63,18,
        30,51,46,3,62,19,14,35,
        47,2,49,32,15,34,17,64,
        52,29,4,45,20,61,36,13,
        5,44,25,56,9,40,21,60,
        28,53,8,41,24,57,12,37,
        43,6,55,26,39,10,59,22,
        54,27,42,7,58,23,38,11
    };
    int arreglo[filas][columnas];
    cout<<"Los valores del arreglo de posicion del caballo son:  "<<endl;
    imprimir_arreglo(arreglo1);
    cout<<endl;
    return 0;
}

void imprimir_arreglo(const array<array<int, columnas>,filas>& arreglo){
    for(auto const&fila : arreglo){
        for(auto const&elemento : fila)
            cout<<elemento<<"\t";
        cout<<endl;
    }
}
Los valores del arreglo de posicion del caballo son:  
1       48      31      50      33      16      63      18
30      51      46      3       62      19      14      35
47      2       49      32      15      34      17      64
52      29      4       45      20      61      36      13
5       44      25      56      9       40      21      60
28      53      8       41      24      57      12      37
43      6       55      26      39      10      59      22
54      27      42      7       58      23      38      11