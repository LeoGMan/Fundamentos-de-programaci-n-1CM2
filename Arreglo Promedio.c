
#include <stdio.h>
#include <stdlib.h>


int main() {

    int A=0;
    int n;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d",&n);
    
    float arreglo[n];
    for(A; A<n;A++){
        printf("Ingrese los numeros: ");
        scanf("%f",&arreglo[A]);
    }
    A=0;
    float suma=0;
    for(A;A<n;A++){
        suma=suma+arreglo[A];
    }
    printf("\n El promedio es: %f ",suma/n);
    return (0);
}

