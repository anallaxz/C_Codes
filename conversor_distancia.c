#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Conversor de Quilômetros para Milhas*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float km, valor;
    printf("Conversor de Quilometros para Milhas \n");
    printf("Digite o valor dos Quilometros: \n");
    scanf("%f", &km);
    valor = km * 0.621371;
    printf("O valor convertido em Milhas é: %.2f \n", valor);
    return 0;
}