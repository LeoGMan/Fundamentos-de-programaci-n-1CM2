
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int cal;
    printf("Ingrese la calificación");
    scanf("%f",&cal);
    if (cal>=6) {
        printf("Aprobado");
    } else
        printf("Reprobado");
    
    return (EXIT_SUCCESS);
}

