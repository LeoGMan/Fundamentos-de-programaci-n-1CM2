
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int n1,n2;
    printf("Digite 2 numeros: ");
    scanf("%i%i",&n1,&n2);
    
    if(n1 % n2==0){
        printf("El numero %i es divisible entre %i",n1,n2);
    }else{
        Printf("EL numero %i no es divisible entre %i",n1,n2);
    }
    return (EXIT_SUCCESS);
}

