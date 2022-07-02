// Ejercicio 1 escribir una funcion que sume dos numeros. Implemente un programa que la utilice//

#include <stdio.h>

float suma(float a, float b);

int main(){
    
float sum = suma(0, 0);
   
    printf("La suma de ambos numeros ingresados es: %.2f\n", sum);
    return 0;
}

float suma(float a, float b){
float sum;
printf("Ingrese un numero"); scanf("%f",&a);
printf("Ingrese otro numero"); scanf("%f", &b);

sum=a+b;

    return sum;
}

