#include <stdio.h>
#include <stdlib.h>
int main()
{
    float xcateto1, xcateto2, xarea;
    printf ("Digite o primeiro valor:");
    scanf ("%f", &xcateto1);
    printf ("Digite o segundo valor:");
    scanf ("%f", &xcateto2);
    xarea = (xcateto1 * xcateto2)/2;
    printf ("A área é de: %.2f \n", xarea);
    return 0;
}
