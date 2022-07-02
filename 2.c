//ejercicio 2  Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función
#include<stdio.h>

void media ();

int main(){
media();
return 0;
}     


void media(){
    float n,i;
    float suma = 0;
    float a;
            
            printf("Ingrese la cantidad de numeros que ingresara en el conjunto: ");scanf("%f",&n);

for (i=1; i<=n; i++){

    printf("Ingrese un numero: ");scanf("%f", &a);

            suma+=a;
            
        }   
suma/=n;


    printf("La media de los numeros ingresados es de: %f\n", suma);
       

}