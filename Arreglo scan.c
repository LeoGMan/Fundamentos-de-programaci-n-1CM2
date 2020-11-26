

/* 
 * File:   Arreglo scan.c
 * Author: Leonardo Gabriel González Manzanilla
 *
 * Created on 25 de noviembre de 2020, 12:23 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int x;
    int arreglo[x];
    int y;
    
    printf("Dame el número del arreglo: ");
    scanf("%d",&x);
    
    for (y=0;y<x;y++){
      printf("Introduzca los numeros del arreglo: \n");
      scanf("%d",&arreglo[y]);
    }
    printf("\n Los numeros que introduciste son: \n");
    
    for(y=0;y<x;y++){
        printf("En la posición %d el valor que introduciste fue: %d\n",y,arreglo[y]);
    }
    return (0);
}

