#include <stdio.h>
//Saber si un angulo es suplementario
//Declarar funciones
float suplementario();
int main(){
    //Llamar la funcion
    suplementario();
    return 0;
}
//Definir la funcion
float suplementario(){
    //Compilar
    float angulo1,angulo2;
    //Pedir datos
    printf("Ingresa el valor del angulo 1 ");
    scanf("%f",&angulo1);
    printf("Ingresa el valor del angulo 2 ");
    scanf("%f",&angulo2);
    //Condiicional
    if((angulo1 + angulo2)<180){
        printf("El angulo no es Suplementario");
    }
    else if((angulo1 + angulo2)>180){
        printf("El angulo no es Suplementario");
    }
    else if((angulo1 + angulo2)>=180){
        printf("El angulo es Suplementario");
    }
}
 