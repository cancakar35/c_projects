#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*
    instagram.com/cancakar35

    1den 999a kadar olan tam sayilar icerisinden basamaklarinin kup degerlerinin toplami kendine esit olan sayilari bulan program
*/

int main()
{
    int total = 0;
    int yuz, on, bir;
    for (int i = 1; i < 1000; i++)
    {
        int num = i;
        bir = num % 10;
        if (i > 9)
        {
            num = num / 10;
            on = num % 10;
        }
        else
        {
            yuz = 0;
            on = 0;
        }
        if (i > 99)
        {
            num = num / 10;
            yuz = num % 10;
        }
        else
            yuz = 0;

        total = pow(yuz, 3) + pow(on, 3) + pow(bir,3);
        if (total == i)
        {
            printf("%d \n", i);
            total = 0;
        }
    }

    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
