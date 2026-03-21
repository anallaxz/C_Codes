#include <stdio.h>
#include <stdlib.h>
int main()
{
    float xaresta1, xaresta2, xaresta3, xvolume;
    printf ("Digite o primeiro valor:");
    scanf ("%f", &xaresta1);
    printf ("Digite o segundo valor:");
    scanf ("%f", &xaresta2);
    printf ("Digite o terceiro valor:");
    scanf ("%f", &xaresta3);
    xvolume = xaresta1 * xaresta2 * xaresta3;
    printf ("O volume é: %.2f \n", xvolume);
    return 0;
}
