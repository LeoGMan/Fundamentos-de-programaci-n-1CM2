/* 
 * File:   Mayor de 3 numeros.c
 * Author: Leonardo Gabriel González Manzanilla
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    float x = 5;
    float y = 6;
    float z = 7;
    
    if (x>y && x>z){
        printf("x es el mayor");
    }
    else{
        if(y>x && y>z){
            printf("y es el mayor");
        }
        else{
            printf ("z es el mayor");
        }
            
    }
    
    
    return(0);


    }
