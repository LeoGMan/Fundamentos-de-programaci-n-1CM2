
/* 
 * File:   arreglo burbuja mejorada.c
 * Author: Brenda
 *
 * Created on 25 de noviembre de 2020, 09:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a,x,y,z;
    int i,j;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%i",&i);
    int arreglo[i];
    
    for(a=0;a<i;a++){
        scanf("%i",&j);
        arreglo[a]=j;
    }
    for(a=1;a<i;a++){
        y=0;
        for(x=i-1;x>=a;x--){
            if(arreglo[x-1]>arreglo[x]){
                y=arreglo[x-1];
                arreglo[x-1]=arreglo[x];
                arreglo[x]=y;
                z=1;
            }
        }
        if(z==0)break;
    }
    printf("El orden es:");
    for(x=0;x<i;x++){
        printf("%i\t",arreglo[x]);
    }

    return (0);
}

