
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int cont, n, suma=0;
    printf("Digite el total de numeros a sumar: ");
    scanf("%i",&n);
    cont=1;
    while(cont<=n){
        suma += cont;
        cont ++;
    }
    printf("\n La suma es: %i",suma);
    return (EXIT_SUCCESS);
}

