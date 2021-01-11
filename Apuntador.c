
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int var1=10;
    int * apEntero = &var1;
    
    printf("Valor de var1 :%d ",var1);
    *apEntero = 30;
     printf("\n\nValor de var1 :%d ",var1);
    printf("\n\n");
    return (EXIT_SUCCESS);
} 

