
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float sb=2000,ba,pi,pt;
    printf("ingrese la cantidad de dias trabajados: ");
    scanf("%d",&ba);
    printf("\ningrese las propinas totales: ");
    scanf("%f",&pt);
    pi=25*pt/100;
    if (ba>=7){
        printf("El sueldo semanal es: %f",sb+1000+pi);
    }
    else{
        printf("El sueldo semanal es: %f",sb-250+pi);
    }
        
    return (EXIT_SUCCESS);
}

