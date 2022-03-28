#include<stdio.h>
int main(){
    //Compilar positivo,menor de 100, mayor de edad o no Condicional Forma 2
    float edad;
    //Pedir datos
    printf("Edad ");
    scanf("%f",&edad);
    //Condicional
    if(edad < 0){
    printf("Error ");
    }
    else if(edad >100){
    printf("Edad invalida");
    }
    else if(edad < 18){
    printf("Menor de edad ");
    }
    else{
    printf("Mayor de edad ");
    }
    return 0;
}
    

