
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int i, maxima;
    printf("Programa que imprime desde el 1 hasta el numero ingresado por el usuario\n\n\t");
    
    printf("Introduzca un numero mayor a 1");
    scanf("%d",&maxima);
    
    if(maxima>1){
        for(i=1;i<=maxima;i++)
            printf("\n\n%d",i);
    }
        else{
        printf("numero no valido");
        }
    return (EXIT_SUCCESS);
}

