/* 
 * File:   Tablas de multiplicar.c
 * Author: Leonardo Gabriel González Manzanilla
 */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int a=1,n,x;
    
    printf("¿Qué tabla de multiplicar quieres saber?\n");
    scanf("%d,",&x);
    
    while (x<=10)
    {
        while(a<=10)
        {
            n = x*a;
            printf("%d",x);
            printf(" X ");
            printf("%d",a);
            printf(" = ");
            printf("%d\n",n); 
            a++;
        }
    }
    return (0);
}

