
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int a = 2;
    int *apt = &a;
    printf("%p\n",apt);

    return (EXIT_SUCCESS);
}

