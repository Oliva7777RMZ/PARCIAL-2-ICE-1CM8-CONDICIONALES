#include<stdio.h>
int main(){
    //Compilar positivo,menor de 100, mayor de edad o no Condicional forma 1
    float edad;
    //Pedir datos
    printf("Edad ");
    scanf("%f",&edad);
    //Condicional
    if(edad >= 0){
        if(edad <=100){
            if(edad >= 18){
           printf("Mayor de edad ");
       }
       else{
           printf("Menor de edad ");
       }
        }
        else{ 
            printf("Edad invalida");
        }
    }
    else{
       printf("Error ");
    }
    return 0;
}

