
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char op;
    float num1 = 0;
    float num2 = 0;
    
    printf("Calculadora basica\n\n");
    printf("Ingrese: numero operador numero\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op){
        case '+':
            printf(" = %f",num1 + num2);
            break;
        case '-':
            printf(" = %f",num1 - num2);
            break;
        case '*':
            printf(" = %f",num1 * num2);
            break;
        case '/':
            printf(" = %f",num1 / num2);
            break;
        default:
            printf("\n Lo sentimos operaci+on desconocida");
    }
    return (EXIT_SUCCESS);
}

