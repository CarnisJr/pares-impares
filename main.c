#include<stdio.h>

int main(void){

    int contPares, contImpares;
    int num;

    contImpares = 0;
    contPares = 0;

    printf("\t---CUANTOS SON PARES Y CUANTOS IMPARES\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    while(num != 0){

        if(num % 2 == 0)
            contPares++;
        else
            contImpares++;
        printf("Ingrese un número entero: ");
        scanf("%d", &num);       
    }
    printf("Hay %d pares\n", contPares);
    printf("Hay %d impares\n", contImpares);
    return 0;
}