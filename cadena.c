
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void abc (int array[]);
int main(int argc, char** argv) {

    int palabra=0;
    char cadena [100];
    char abec[ ];
    int cants[26];
    abc(cants);
   
   
    for(palabra=0; true; palabra++){
        abc(cants); 
        printf("\n>> Ingrese cuaquier palabra: "); 
        gets(cadena);
        
        for(int x=0; cadena[x] != '\0'; x++){
        
            for(int y=0; y<26; y++){
               
                if(cadena[x] == abecedario[y])
                    cants[y]++;
            }
        }
        printf("\n Número de la palabra:\n", palabra);

        for(int x=0; x<26; x++){
            if(cants[x] > 0){
            
                printf("La letra %c se utlizo: %d veces\n ", abecedario[x], cants[x]);
            }
        }
    }
        return (EXIT_SUCCESS);
}


void abc(int array[]){
   
    for(int x=0;x<26;x++){
       
        array[x]=0;
    }

}

