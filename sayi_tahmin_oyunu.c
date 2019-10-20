#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int hak = 5;
    int sayi = rand()%100;
    printf("Sayi tahmin oyununa hosgeldiniz\n1-100 arasinda sayiyi tahmin et. Yalnizca 5 hakkin var!\n\n");
    while (hak > 0)
    {
        int tahmin = 0;
        printf("\nKalan hak %d \n", hak);
        printf("Tahmin gir: ");
        scanf("%d", &tahmin);
        hak -= 1;
        if (tahmin > sayi)
        {
            printf("Daha kucuk!\n");
        }
        else if (tahmin < sayi)
        {
            printf("Daha buyuk!\n");
        }
        else
        {
            printf("Tebrikler buldunuz! Sayi %d", sayi);
            break;
        }
    }


    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
