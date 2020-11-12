#include<stdio.h>
#include<stdlib.h>


int main() {
    int a, b, c, d, e;
    a = 0;
    b = 1;
    c = a + b;
    printf("%d\n%d\n%d\n",a,b,c);
    printf("¿Cuantos elementos de la serie de fibonacci deseas ver?\n");
    scanf("%d,",&d);
    
    e = 1;
    while(e <= d)
    {
        a = b;
        b = c;
        c = a + b;
        
        printf("%d\n",c);
        e++;
    }
   
    return (0);
}

