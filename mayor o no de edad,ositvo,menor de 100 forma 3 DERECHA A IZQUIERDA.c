#include<stdio.h>
int main(){
    //compilar mayor o no de edad,ositvo,menor de 100 forma 3 DERECHA A IZQUIERDA
    float edad;
    //Pedir datos
    printf("Edad ");
    scanf("%f",&edad);
    //Condicional
    if(edad>100){
        printf("Error");
    }
    else{
        if(edad>=18){
            printf("Mayor de edad");
        }
        else{
            if(edad>=0){
                printf("Menor de edad");
                    
                }
                else{
                    printf("Edad invalida ");
                }
            }
        }
    return 0;
}

