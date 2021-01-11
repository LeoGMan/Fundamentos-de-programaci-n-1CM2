
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo[6]={1, -10, 0, 20, 100};
    int *apArray = arreglo;
    
    *ApArray++;
    Printf("Contenido de la direccion de memoria: %d",*apArray);
    ApArray += 4;
    Printf("\nContenido de la direccion de memoria: %d",*apArray);
    ApArray -= 5;
    Printf("Contenido de la direccion de memoria: %d",*apArray);
    printf("\n\n");
    return (EXIT_SUCCESS);
}

