#include<stdio.h>
#include<math.h>
//Declarar funcion descuento por compra respecto a membresia 
// 1(10%),2(%15),3(%20)
void descuento();
int main(){
    //LLamar la funciones
    descuento();
    return 0;
}
//Definir funciones
void descuento(){
  //Compilar
    float cantidad,descuento1,descuento2,descuento3,precio,membresia,total1,total2,total3;
    
    
    //Pedir datos
    printf(" Precio es 15 cd\n");
    printf(" Membresia 1 (10 Porciento)\n");
    printf(" Membresia 2 (15 Porciento)\n");
    printf(" Membresia 3 (20 Porciento)\n");
    printf("Ingresa la cantidad de helados ");
    scanf("%f",&cantidad);
    printf("Ingresa el numero de membresia ");
    scanf("%f",&membresia);
    //Formula
    precio  = 15;
    descuento1 = ((precio * cantidad)* .10);
    descuento2 = (precio * cantidad)*(.15);
    descuento3 = ((precio * cantidad)* .20);
    total1 = (precio * cantidad)-descuento1;
    total2 = (precio * cantidad)-descuento2;
    total3 = (precio * cantidad)-descuento3;
    //Codicional
    if(membresia>0){
        if(cantidad >0){
        if(membresia == 1){
        printf("El total es = %f ",total1);
    }
    else if(membresia == 2){
        printf("El total es = %f ",total2);
    }
    else if(membresia = 3){
        printf("El total es = %f ",total3);
    }
}
else if(cantidad<0){
    printf("No se puede introducir un numero negativo ");
    }
    
}
else if(membresia<=0){
    printf("No se puede introducir un numero negativo ");
}
    }

    