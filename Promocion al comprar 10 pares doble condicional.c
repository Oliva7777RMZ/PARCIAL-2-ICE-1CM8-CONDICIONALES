#include<stdio.h>
//Promocion al comprar 10 pares doble condicional ;
//Declarar funcion
void promocion();
int main(){
    //LLamar funcion
    promocion();
    return 0;
}
//Definir funcion
void promocion(){
    //Compilar
    float costo,numerodepares,descuento,total;
    //Pedir datos
    printf("Ingresa el numero de pares ");
    scanf("%f",&numerodepares);
    //Condicional
    if(numerodepares>0){
      if(numerodepares>=10){
    //Formula
    costo = 250 * numerodepares;
    descuento =costo * .20; 
    total = costo - descuento;
    //Reultado
    printf("El total es = %f",total);
    }
     else if(numerodepares<10){
        costo = 250 * numerodepares;
        
        printf("El total es = %f",costo);
    }  
    }
    //Si no se cumple
    else{
        printf("Error ");
    }
}

