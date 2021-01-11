
#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y){
    int suma = 0;
    suma = x + y;
    return suma;
}
int mult(int x, int y){
    int res = 0;
    res = x*y;
    return res;
}
int div(){
    int res = 0, x, y;
    printf("Inserta un valor: ");
    scanf("%d",&x);
    printf("Inserta otro valor: ");
    scanf("%d",&y);
    res = x/y;
}
void resta(int x, int y){
    int res = 0;
    res = x-y;
    printf("La resta es:%d",res);
}
int main(int argc, char** argv) {

    int a,b;
    printf("Inserta un valor: ");
    scanf("%d",&a);
    printf("Inserta otro valor: ");
    scanf("%d",&b);
    printf("La suma es:%d\n ",suma(a,b));
    printf("La multiplicacion es:%d \n",mult(a,b));
    printf("La division es:%d\n ",div());
    resta(a,b);
    
    return 0;
}

