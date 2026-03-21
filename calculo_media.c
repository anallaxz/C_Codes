#include <stdio.h>
#include <stdlib.h>
int main()
{
    float xnota1, xnota2, xnota3, xnota4, xmedia;
    printf ("Digite a primeira nota:");
    scanf ("%f", &xnota1);
    printf ("Digite a segunda nota:");
    scanf ("%f", &xnota2);
    printf ("Digite a terceira nota:");
    scanf ("%f", &xnota3);
    printf ("Digite a quarta nota:");
    scanf ("%f", &xnota4);
    xmedia = (xnota1 + xnota2 + xnota3 + xnota4)/4;
    printf ("A média é: %.4f \n", xmedia);
    return 0;
}
