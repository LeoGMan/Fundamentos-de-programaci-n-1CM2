
#include <stdio.h>
#include <stdlib.h>


int main() {

    int a,x,z;
    
    printf("¿Qué tabla de multiplicar quieres saber?\n");
    scanf("%d,",&z);
    
    for (a=1;a<=z;a++)
    {
        printf("-----------------------------------------------------------------------\n\t\tTabla del %d\n",a);
        for (x=1;x<11;x++)
           
        printf ("%d X %d = %d\n",a,x,a*x);
        
    }
    return (0);
}

