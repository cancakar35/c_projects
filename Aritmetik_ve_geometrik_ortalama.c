#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*
    4 adet sayi aldik ve girilen sayılardan tek olanların geometrik ortalamasını, cift olanlarin ise aritmetik ortalamasini aldik.
*/

int main()
{
    int tek_carpim, cift_toplam, sayi;
    int cift_adet, tek_adet;
    cift_adet = 0;
    tek_adet = 0.0;
    tek_carpim = 1;
    cift_toplam = 0;
    for(int i=0; i < 4; i++)
    {
        printf("Sayi gir: ");
        scanf(" %d", &sayi);
        if (sayi % 2 == 0)
        {
            cift_toplam += sayi;
            cift_adet++;
            sayi = 0;
        }
        else
        {
            tek_carpim *= sayi;
            tek_adet += 1;
            sayi = 0;
        }
    }
    if (cift_adet != 0)
    {
        printf("Cift sayilarin a.o %f\n", (float)cift_toplam/cift_adet);
    }
    else
        printf("Cift sayi girilmedi!\n");

    if (tek_adet != 0)
    {
        printf("Tek sayilarin g.o %f \n", pow(tek_carpim, (1.0/tek_adet)) );
    }
    else
        printf("Tek sayi girilmedi!\n");
    printf("\nPress any key to continue...");
    getch();
    return 0;
}
