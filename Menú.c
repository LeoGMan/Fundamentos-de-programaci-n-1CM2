

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int opcion;
    int opc;
    do {
        printf("1) opcion 1\n");
        printf("2) opcion 2\n");
        printf("3) opcion 3\n");
        printf("4) Salir 4\n");
        scanf("%d",&opcion);
        
    switch(opcion)
        case 1:
            printf ("Usted selecciono %i\n",opcion);
        break;
        case 2:
            printf ("Usted selecciono %i\n",opcion);
        break;
        case 3:
            printf ("Usted selecciono %i\n",opcion);
        break;
        case 4:
        break;
        default;
        printf ("opcion no valida");
        break;
    } while(opcion !=4);
    return (EXIT_SUCCESS);
}

