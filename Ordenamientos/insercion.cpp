
#include <iostream>
using namespace std;

void insercion(int lista[],int tam, (*comp)(int,int)); // prototipo de funcion

int main(){
    
    int lista[]={67,-8,15,44,27,12,35}; //declaramos nuestra lista
    bool (*comp)(int ,int);
    cout <<"Lista Original" <<endl;
    for(int i =0; i<7; i++) // imprimimos nuestra lista original
        cout << lista[i] <<" ";
    cout<<endl;
    insercion(lista,7,comp); //llamamos a la funcion para el ordenamiento
    cout<<"Lista Ordenada ascendente " <<endl;
    comp=ascendente;
    insercion

    cout << endl;
    cout<<"Lista Ordenada descendente " <<endl;

    cout << endl;
    return 0;
}
bool ascendente(int a, int b ){
    if(a<b)
        return true;
    else    
        return false;
}
bool descendente(int a, int b ){
    if(a>b)
        return true;
    else    
        return false;
}
void insercion(int lista[],int tam,bool (*comp)(int a ,int b)){ //implementacion de la funcion
    int i,aux,posicion; //declaramos las variables
    for(i=1;i<7;i++){
        aux=lista[i]; //asignamos el numero de la lista a un aux
        posicion=i; // asignamos la posicion en el arreglo

        while(posicion>0 && lista[posicion-1]>aux){ // condiciones 
            lista[posicion] = lista[posicion -1]; // intercambiamos el valor si es mayor
            posicion--; // seguira intercambiando hasta llegar a la posicion 1
        }
        lista[posicion]=aux; //actualiza el valor 
    }
}
https://jamboard.google.com/d/1rtTPNdHps-EMKwPGNa1-fNF6EHX3VbUv_5syqj-tsIc/viewer?f=0