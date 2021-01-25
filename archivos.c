
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    FILE *F1;
    
    float valores[3], suma;
    
    float promedio = 0;
    int x;
    F1 = fopen("datos.txt", "wt");
    
    for( x=0; x<3; x++){
        printf("Ingrese los valores %d: ", x++);
        scanf("%d", &valores[x]);
        suma=0;
        suma+= valores[x];
        
        fprintf(F1, "%d\n", valores[x]);
    }
    
    promedio = suma / 3.0;
    printf("El promedio es: %f", promedio);
    fprintf(F1, "%f", promedio);
    printf("\n\n");   
    return (EXIT_SUCCESS);
}

