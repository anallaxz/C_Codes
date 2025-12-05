#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Calculo de potências*/

    void DesenhaLinha (int Largura){
        for (int i=0; i< Largura;i++) {
        printf("=");
    }
        printf("\n");
    }

int main(){
    setlocale(LC_ALL, "Portuguese");

    DesenhaLinha(40);
    printf("        PROGRAMA QUE CALCULA POTENCIA       \n");
    DesenhaLinha(40);
    
    int i;

    float Base, Expoente, Conta;

    printf ("digite o numero da base:\n");
    scanf("%f", &Base);
    printf ("digite o numero da expoente\n");
    scanf("%f", &Expoente);
    Conta = Base;
    i = 0;

    do{
        Conta = Conta * Base;
        i += 1;
    }while(i + 1 < Expoente);
    printf("o resultado da potencia e: %.2f", Conta);
return 0;


}