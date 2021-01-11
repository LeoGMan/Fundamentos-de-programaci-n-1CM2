
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float com,rou,mod,esc,c,r,m,e,vt;
    printf("Ingrese la cantidad de comutadoras: ");
    scanf("%f",&com);
    printf("Ingrese la cantidad de routers: ");
    scanf("%f",&rou);
    printf("Ingrese la cantidad de modems: ");
    scanf("%f",&mod);
    printf("Ingrese la cantidad de escritorios: ");
    scanf("%f",&esc);
    if(com>=2){
        c=com*8000;
    }else{
        c=com*10000;
    }
    if(rou>=3){
        r=rou*1000;
    }else{
        r=rou*1250;
    }
     if(mod>=3){
        m=mod*1500; 
    }else{
         m=mod*1750;
    }   
     if(esc>=2){
        e=esc*2000;
    }else{
         e=esc*2300;
    }
    vt=c+r+m+e;
    printf("El total de la venta es:$%.2f",vt);
    return (EXIT_SUCCESS);
}

