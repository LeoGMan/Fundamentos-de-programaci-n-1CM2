
#include <stdio.h>
#include <stdlib.h>

void cubo(int *n);
int main(int argc, char** argv) {
    
    int num = 5;
    printf("Valor original%i\n",num);
    cubo(&num);
    printf("El nuevo valor%i\n",num);
    return (EXIT_SUCCESS);
}
void cubo(int *n){
    *n = *n * *n * *n;
}

