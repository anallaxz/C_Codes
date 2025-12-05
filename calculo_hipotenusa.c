#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calculo de hipotenusa*/

int main()
{
    float cateto1, cateto2, hipotenusa;
    printf ("Digite o primeiro valor:");
    scanf ("%f", &cateto1);
    printf ("Digite o segundo valor:");
    scanf ("%f", &cateto2);
    hipotenusa = sqrt ((cateto1 * cateto1) + (cateto2 * cateto2));
    printf ("A hipotenusa é de: %.2f \n", hipotenusa);
    return 0;
}