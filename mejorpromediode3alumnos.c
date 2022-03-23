#include<stdio.h>
//Que conteste el mejor promedio de tres alumnos
//Declarar funciones
void elmejorpromedio();
int main(){
    //LLamar funcion
    elmejorpromedio();
    return 0;
}
//Definir funcion
void elmejorpromedio(){
    //Compilar
    float alumno1,alumno2,alumno3,max;
    //Pedir datos
    printf("Ingresa el promedio del primer alumno ");
    scanf("%f",&alumno1);
    printf("Ingresa el promedio del segundo alumno ");
    scanf("%f",&alumno2);
    printf("Ingresa el promedio del tercer alumno ");
    scanf("%f",&alumno3);
    //Condiconal
     if(alumno1>alumno2){
         if(alumno1>alumno2){
        max = alumno1;
    }
    else{
        max = alumno2;
    }
    }
    else{
        if(alumno2>alumno3){
            max = alumno2;
        }
        else{
            max = alumno3;
        }
    }
    //Resultado
    printf("El mejor es promedio es = %f",max);
}