
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int n, alum, unidad;
    float calificaciones[50][6], promedio [50], suma=0;
    printf("Numero de alumnos: ");
    scanf("%i",&n);
    for(alum=1;alum<=n;alum++){
        suma=0;
                for(unidad=1;unidad<=6;unidad++){
                    printf("Calificacion de la unidad %i es: ",unidad);
                    scanf("f",&calificaciones[alum-1][unidad-1]);
                    suma=suma+calificaciones[alum-1][unidad-1];
                }
        printf("Promedio del alumno %i es: %.2f",promedio[alum-1]=suma/6);
    }
    return (EXIT_SUCCESS);
}

