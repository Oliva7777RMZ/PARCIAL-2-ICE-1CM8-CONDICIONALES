#include<stdio.h>
//Definir funcion mayor de edad o no doble condicional
void mayordeedad();
int main(){
    //LLamar la funcion
    mayordeedad();
    return 0;
}
//Definir funciones
void mayordeedad(){
    //Compilar
    float edad;
    //Pedir datos
    printf("Ingresa el valor de la edad ");
    scanf("%f",&edad);
    //condicional
    if(edad <= 100 ){
         if(edad >= 18){
        printf("Eres mayor de edad ");
    }
    else{
        printf("Eres menor de edad ");
    }
    }
    else{
    printf("Rango de edad no permitido");
    }
    }
   