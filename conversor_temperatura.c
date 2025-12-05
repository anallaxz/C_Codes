#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Conversor de Celcius para Fahrenheit*/

    void DesenhaLinha (int Largura){
        for (int i=0; i< Largura;i++) {
        printf("=");
    }
        printf("\n");
    }


int main(){
    setlocale (LC_ALL,"Portuguese");

    float GrausCelsius, GrausF;


    DesenhaLinha(40);
    printf("        PROGRAMA QUE FAZ A CONVERSÃO DE TEMPERATURA CELSIUS PARA FAHRENHEIT \n");
    DesenhaLinha(45);
    printf ("\n \n");

    

    printf ("digite a temperatura em graus celsius: \n");
    scanf ("%f", &GrausCelsius);

    GrausF = (GrausCelsius*1.8)+32;

    printf ("a temperatura %1.f °C é igual a temperatura %1.f F (em Fahreinheit) \n", GrausCelsius, GrausF);


    return 0;
}