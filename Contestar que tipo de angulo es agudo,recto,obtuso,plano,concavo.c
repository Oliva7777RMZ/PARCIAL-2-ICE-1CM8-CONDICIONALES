#include<stdio.h>
//Contestar que tipo de angulo es agudo,recto,obtuso,plano,concavo
//Declarar funciones
void tipodeangulo();
int main(){
    //LLamar la funcion
    tipodeangulo();
    return 0;
}   
//Definir funcion
void tipodeangulo(){
    //Compilar
    float angulo;
    //Pedir datos
    printf("Ingresa el valor del angulo ");
    scanf("%f",&angulo);
    //Condicion
    if(angulo<90){
        printf("El angulo es agudo ");
    }
    else if(angulo<=90){   
        printf("El angulo es recto ");
    }
    else if(angulo ==180){   
        printf("El angulo es plano ");
    }
    else if(angulo>=180){
        printf("El angulo es concavo");
    }
    else if(angulo>90){   
        printf("El angulo es obtuso ");
    }
    
}
