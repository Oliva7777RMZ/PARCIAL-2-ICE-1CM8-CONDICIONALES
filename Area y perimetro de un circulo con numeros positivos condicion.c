#include<stdio.h>
#include<math.h>
//Area y perimetro de un circulo con numeros positivos condicion
//Declarar funcion
void areayperimetro();
int main(){
    //LLamar funcion
    areayperimetro();
    return 0;
}
//Definir funcion
void areayperimetro(){
    //Compilar
    float radio,diametro,area,perimetro;
    //Pedir datos
    printf("Ingresa el radio ");
    scanf("%f",&radio );
    //Condicional
    if(radio>0){
    diametro = radio * 2;
    area = M_PI * pow(radio,2);
    perimetro = M_PI * 2 * radio ;
    printf("El area es igual a = %f",area);
    printf("El perimetro es igual a = %f",perimetro);
    }
    else if(radio<0){
        printf("Error");
    }
}