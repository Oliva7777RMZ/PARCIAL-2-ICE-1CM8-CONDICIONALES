#include <stdio.h>
//Declarar funcion area y perimetro rectangulo
void areayperimetrorectangulo();
int main(){
    //LLamar funcion  
    areayperimetrorectangulo();
    return 0;
}
//Defenir funcion
void areayperimetrorectangulo(){
    //Compilar
    float base,altura,area,perimetro;
    //Pedir datos
    printf("Ingresa el valor de la base ");
    scanf("%f",&base);
    printf("Ingresa el valor de la altura ");
    scanf("%f",&altura);
    //Condicion
    if(base<0 || altura<0){
        printf("Error! = (\n\n");
    }
    else{
    //Formula
    area = base * altura;
    perimetro = (base * 2)+(altura * 2); 
    //Resultado
    printf("El area es = %f",area);
    printf("El perimetro es = %f",perimetro);
    }
}