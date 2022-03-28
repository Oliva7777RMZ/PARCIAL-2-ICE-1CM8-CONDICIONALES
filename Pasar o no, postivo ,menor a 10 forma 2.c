#include<stdio.h>
//Pasar o no, postivo ,menor a 10 forma 2
int main(){
    //Compilar datos
    float calificacion;
    //Pedir datos
    printf("Ingresa la calificacion ");
    scanf("%f",&calificacion);
    //Condicional
    if(calificacion<0){
    printf("Error ");
    }
    else if(calificacion<6){
    printf("Reprobaste ");
    }
    else if(calificacion<=10){
    printf("Aprobaste ");
    }
    else{
    printf("La calificacion no puduede ser mas de 10 ");
    }
    return 0;
}
