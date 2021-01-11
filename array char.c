
#include <stdio.h>
#include <stdlib.h>

struct datos{
    char nombre [30];
    int edad;
    float promedio;
}alumno1,alumno2;
int main(int argc, char** argv) {
    printf("ingresa el nombre del alumno #1: ");
    gets(alumno1.nombre);
    fflush(stdin);
    printf("Ingresa la edad del alumno #1: ");
    scanf("%d",&alumno1.edad);
    printf("Ingresa el promedio del alumno #1: ");
    scanf("%f",&alumno1.promedio);
    fflush(stdin);
    printf("ingresa el nombre del alumno #2: ");
    gets(alumno2.nombre);
    fflush(stdin);
    printf("Ingresa la edad del alumno #2: ");
    scanf("%d",&alumno2.edad);
    printf("Ingresa el promedio del alumno #2: ");
    scanf("%f",&alumno2.promedio);
    printf("Mostrando los datos de los alumnos\n");
    printf("__________________\n");
    printf("Alumno #1\n");
    printf("Nombre: %s\n",alumno1.nombre);
    printf("Edad: %d\n",alumno1.edad);
    printf("Promedio: %f\n",alumno1.promedio);
    printf("__________________\n");
    printf("Alumno #2\n");
    printf("Nombre: %s\n",alumno2.nombre);
    printf("Edad: %d\n",alumno2.edad);
    printf("Promedio: %f\n",alumno2.promedio);
    return (EXIT_SUCCESS);
}

