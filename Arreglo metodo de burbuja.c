
/* 
 * File:   Arreglo metodo de burbuja.c
 * Author: Leonardo Gabriel González Manzanilla
 *
 * Created on 25 de noviembre de 2020, 07:03 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int a,n,y,x;
   
    printf("Ingrese la cantidad de numeros: ");
    scanf("%i",&n);
    int arreglo [n];
    for(a;a<n;a++){
        printf("Ingrese los numeros: ");
        scanf("%d",&arreglo[a]);
    }
    int x=0;
    int y=0;
    for(x;x<n;x++){
        scanf("%d",&arreglo[x]);
    }
    for(x;x<n;x++){
     for(y;y<n;y++){
        if(arreglo[y]>arreglo[y+1]){
            a=arreglo[y];
            arreglo[y]=arreglo[y+1];
            arreglo[y+1]=a;
        }  
     }  
    }
    for(x=1;x<=n;x++){
        printf("\n%d",arreglo[x]);
    }
    
   
    return (0);
}

