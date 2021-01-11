
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float s,so,e,en,f,fl;
    printf("Ingrese la cantidad de enchiladas: ");
    scanf("%f",&e);
    printf("Ingrese la cantidad de sopes: ");
    scanf("%f",&s);
    printf("Ingrese la cantidad de flautas: ");
    scanf("%f",&f);
    en = e*8;
    so = s*14;
    fl = f*7;
    printf("El total de la venta es:$%.2f",en+so+fl);
    return (EXIT_SUCCESS);
}

