
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a,b,c;
    int *p1=&a,*p2=&b,*p3=&c;
    printf("Ingrese el valor de a: ");
    scanf("%f",&a);
     printf("\nIngrese el valor de b: ");
    scanf("%f",&b);
    c=a+b;
    printf("\nResultado de la suma:%i ",c);
    printf("\np1 = %p",p1);
    printf("\np2 = %p",p2);
    printf("\np3 = %p",p3);
    return (EXIT_SUCCESS);
}

