
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int x, y, i;
    
    printf("Introduce un numero: ");
    scanf("%i",&x);
    do{
        printf("Introduce un numero mayor al anterior: ");
        scanf ("%i",&y);
    }while(y < x);
    
    for(i = x + 1;i < y;i++){
        printf("%i, ",i);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

