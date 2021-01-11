
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int numero;
    printf("Ingrese un numero: ");
    scanf("%i",&numero);
    if (numero>0){
        printf("El numero es positivo");
    }else if(numero==0){
        printf("EL numero es 0");
    }else
        printf("El numero es nagativo");
    return (EXIT_SUCCESS);
}

