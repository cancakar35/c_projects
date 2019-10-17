#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define pi 3.14159265359

int main()
{
    float r, alan, cevre;

    printf("Dairenin yaricapi : ");
    scanf("%f", &r);

    cevre = 2 * pi * r;
    alan = pi * r * r;

    printf("Cevre : %f , Alan : %f\n(pi = 3.14159265359 olarak alinmistir)", cevre, alan);

    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
