#include <stdio.h>
#include <stdlib.h>

/*Soma de dois valores*/

int main() {
    int n1;
    int n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    int sum = n1 + n2;

    printf("A soma é: %d\n", sum);
    return 0;
}