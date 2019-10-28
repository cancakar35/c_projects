#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // Can Cakar Fibonacci serisi odevi

    int fbn_uzn;
    printf("FIBONACCI SERISI\n");
    printf("Uzunluk gir: ");
    scanf("%d", &fbn_uzn);
    int num1 = 1;
    int num2 = 1;
    int c;
    int k;
    printf("%d %d ", num1, num2);
    for (k = 0; k < fbn_uzn; k++)
    {
        c = num1;
        num1 = num2;
        num2 += c;
        printf("%d ", num2);
    }

    printf("\n\nDevam etmek icin bir tusa basin...");
    getch();
    return 0;
}
