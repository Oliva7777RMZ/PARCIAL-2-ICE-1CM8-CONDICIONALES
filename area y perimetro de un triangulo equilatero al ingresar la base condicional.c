#include<stdio.h>
#include<math.h>
//Declarar funcion vacia area y perimetro de un triangulo equilatero al ingresar la base
void areayperimetroequilatero();
int main(){
    //LLamar funcion
    areayperimetroequilatero();
    return 0;
}
//  funcion 
void areayperimetroequilatero(){
    //compilar
    float base,altura,lado,area,perimetro;
    //Pedir datos
    printf("Ingresa el valor de la base ");
    scanf("%f",&base);
    //Condicional
    if(base>0){
        //Formula
        altura = (base * sqrt(3))/2;
        lado = (base * 1);
        area = (base * altura)/2;
        perimetro = base + lado + lado;
        //Resultado
        printf(" Altura = %f\n Lado = %f\n",altura,lado);
        printf(" El area es  = %f\n El perimetro es = %f\n ",area,perimetro);
    }
    else if(base<0){
        printf(" Error ");
    }
}
