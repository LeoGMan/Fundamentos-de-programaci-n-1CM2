
/* 
 * File:   Arreglos 1 a 100.c
 * Author: Leonardo Gabriel González Manzanilla
 *
 * Created on 25 de noviembre de 2020, 12:04 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int arreglo[100];
    int y;
    arreglo[0]=2;
    arreglo[1]=3;
    for (y=2;y<100;y++){
         arreglo[y] = arreglo [y-1] + arreglo [y-2];
    }
    for (y=0;y<100;y++){
        printf("[%d]" "=" "%d\n",y,arreglo[y]);
    }
    

    return (0);
}

