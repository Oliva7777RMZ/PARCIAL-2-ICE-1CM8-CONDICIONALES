#include<stdio.h>
int main(){
    //Compilar mayor o no de edad,ositvo,menor de 100 forma 4 IZQUIEDA A DERECHA
    float  edad;
    //Pedir datos
    printf("Edad ");
    scanf("%f",&edad);
    //Condicional
    if(edad<0){
        printf("Error");
    }
    else{
        if(edad<18){
           printf("Menor de edad ");
        }
        else{
            if(edad<=100){
                printf("Mayor de edad  ");
            }
            else{
                printf("Edad Invalida");
            }
        }
    }
    
    return 0;
}
