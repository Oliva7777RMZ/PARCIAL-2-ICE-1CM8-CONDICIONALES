#include<stdio.h>
//Conteste si el angulo que se le dio es agudo
//Declarar funcion
float siagudo();
int main (){
    //LLamar datos
    siagudo();
    return 0;
}
//Definir funcion
float siagudo(){
    //Compilar
    float angulo;
    //Pedir datos
    printf("Ingresar el Angulo ");
    scanf("%f",&angulo);
    //Condicional
    if(angulo>90){
        printf("No es un Angulo Agudo ");
    }

    else{
    //Resultaddo
    printf("El angulo es agudo = %f",angulo);
    }
}