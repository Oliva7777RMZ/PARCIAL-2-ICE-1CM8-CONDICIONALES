#include<stdio.h>
//Declarar las funciones aprobar o no funcion vacia condicionales forma 1
void aprobar();
int main(){
    //LLamar la funcion
    aprobar();
    return 0;
}
//Definir funciones
void aprobar(){
    //Compilar
    float promedio;
    //Pedir datos
    printf("Ingresa el valor de promedio ");
    scanf("%f",&promedio);
    //Condional
    if(promedio>0){
        if(promedio<=10){
        if(promedio>=6){
        printf("Aprobaste ");
    }
    else{
        printf("Reprobaste ");
    }
    }
    else{
        printf("No se puede obtener un promedio mayor a 10 ");
    }
    }
    else{
        printf("Error");
    }
}
