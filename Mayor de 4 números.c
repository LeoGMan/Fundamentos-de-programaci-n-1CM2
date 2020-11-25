
/* 
 * File: Mayor de 4 numeros.c
 * Author: Leonardo Gabriel González Manzanilla
 *
 * Created on 9 de noviembre de 2020, 10:43 AM
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    float w = 12;
    float x = 9;
    float y = 10;
    float z = 11;
    
    if (w>x && w>y && w>z){
        printf("w es el mayor");
    }
    else{
        if(x>w && x>y && x>z){
            printf("x es el mayor");
        }
        else{
            if (y>w && y>x && y>z){
            printf ("y es el mayor");
        }
            else{
                if (z>w && z>x && z>y){
                    printf ("z es el mayor");
            }
                else {
                    printf("son iguales");
                }
            
    }

    return (0);
        }
    }
}
