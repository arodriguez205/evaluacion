// 4

#include<stdio.h>
#include<math.h>

void calculo(float x, float y, float z);

int main(){

    float a,b,c;

    do{
        printf("Introduzca el valor de a: ");scanf("%f",&a);
        printf("Introduzca el valor de b: ");scanf("%f",&b);
        printf("Introduzca el valor de c: ");scanf("%f",&c);
        if(b*b<4*a*c){
            printf("Los valores ingresados no dan como resultado una raiz real, intentelo de nuevo.\n");
        }
}while(b*b<4*a*c);

calculo(a,b,c);

    return 0;
}

void calculo(float x, float y, float z){
float raiz,r1,r2;

raiz = (sqrt(y*y-4*x*z));
r1 = -(-y + raiz)/2*x;
r2 = -(-y - raiz)/2*x;

printf("las raices reales de los numeros ingresados son: %.2f y %.2f", r1, r2);
}
