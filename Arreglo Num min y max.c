
/* 
 * File:   Arreglo Num min y max.c
 * Author: Leonardo Gabriel González Manzanilla
 *
 * Created on 25 de noviembre de 2020, 06:07 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int A = 0;
    int n;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d",&n);
    
    float arreglo [n];
    
    for(A;A<n;A++){
        printf("Ingrese los numeros: ");
        scanf("%f",&arreglo[A]);
    }
    A=0;
    float min = arreglo[0];
    float max = arreglo[0];
    for(A;A<n;A++){
        if(arreglo[A]<min){
            min=arreglo[A];
        }
        if(arreglo[A]>max){
            max=arreglo[A];
        }
    }
    printf("\n El valor minimo es: %f",min);
    printf("\n El valor maximo es: %f",max);
    return (0);
}
