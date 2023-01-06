
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>  
void llena(int *,int); 
void imprime(int *, int); 
void main(){
    int i,n_elementos, *a;
    printf("Introduce el número de "); 
    printf("elementos para crear el arreglo: \n"); 
    scanf("%d", &n_elementos);
    /*Asignacion del espacio de
    memoria para el puntero */ 
    a=(int *)malloc(n_elementos*sizeof(int));
    llena(a, n_elementos);
    system("cls");
    imprime(a, n_elementos);
    getch();
}
void llena(int *arr, int num){
    int i; 
    for(i=0; i <num; i++){
        printf("%d.-",i+1); 
        scanf("%d", (arr+i));
      }  /*en el scanf se coloca (a+i) pero pudo emplearse &a[i] también */
}
void imprime(int *arr, int num){
    int i; 
    for(i=0; i <num; i++){
        printf("%d.- %d ",i+1, *(arr+i));/*aqui debe colocarse * antes */
    }
}


