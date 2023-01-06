
#include<stdio.h>
#include<malloc.h>

void main (void){

    int *datos;
    int capacidad=5, numDatos=0, valor;
    datos = (int *)malloc(capacidad * sizeof(int));
    printf("Ingrese valores enteros:\n");
    while(scanf("%d",&valor)!=EOF){
        if (numDatos == capacidad){
            capacidad += 10;
            datos = (int*)realloc(datos,capacidad* sizeof(int));
            if (datos==NULL){
                printf("No se puede continuar,\n");
                printf("espacio insuficiente de memoria\n");
                return;
            }
        }
    datos[numDatos]=valor;
    numDatos++;
    }
    for (int i=0; i<numDatos;i++)
        printf("%d) %d\n",i,datos[i]);
    
}





