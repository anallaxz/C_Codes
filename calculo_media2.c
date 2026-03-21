#include <stdlib.h>
#include <stdio.h>
int main (){
    char xnome[40], xsobrenome1[40], xsobrenome2[40];
    float xmedia, xnota[10];
    printf ("Digite seu nome:");
    scanf ("%s", xnome);
    printf ("Digite seu primeiro sobrenome:");
    scanf ("%s", xsobrenome1);
    printf ("Digite seu segundo sobrenome:");
    scanf ("%s", xsobrenome2);
    printf ("Digite a primeira nota:");
    scanf ("%f", &xnota[0]);
    printf ("Digite a segunda nota:");
    scanf ("%f", &xnota[1]);
    printf ("Digite a terceira nota:");
    scanf ("%f", &xnota[2]);
    printf ("Digite a quarta nota:");
    scanf ("%f", &xnota[3]);
    xmedia = (xnota[0] + xnota[1] + xnota[2] + xnota[3])/4;
    printf ("O nome completo do aluno é: %s %s %s \n ", xnome, xsobrenome1, xsobrenome2);
    printf ("A média do aluno é: %.2f \n", xmedia);
    return 0;
}
