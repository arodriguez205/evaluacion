#include <stdio.h>
#include <string.h>

        void concatenacion(char serie[], char serii[], char concat[]); 
        void vuelta(char result[], char inver[]);
int main(){
    char ser1[16], ser2[16], conca[32],inver[32];
conca[0] = '\0';
        printf("Ingrese una serie de caracteres: ");gets(ser1);
        printf("Ingrese otra serie de caracteres: ");gets(ser2);

concatenacion (ser1, ser2, conca);
vuelta (conca,inver);

printf("\n%s\n",inver);

    return 0;
}

void concatenacion(char serie[], char serii[], char concat[]){

    strcat(concat, serie);
    strcat(concat, " ");
    strcat(concat, serii); 

}

void vuelta(char result[], char invertido[]){
int i,longitud = strlen(result);
int j = longitud - 1;
for (i=0;i<longitud;i++){
invertido[i] = result[j];
j--;
}
invertido[longitud] = '\0';
return;
}
