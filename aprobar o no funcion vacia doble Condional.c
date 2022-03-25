#include<stdio.h>
//Declarar las funciones aprobar o no funcion vacia double Condional
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