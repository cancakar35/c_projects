#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    while (1)
    {
        int num;
        printf("SAYI GIRIN (CIKMAK ICIN -1): ");
        scanf("%d", &num);
        if (num != -1 && num >= 0)
        {
            double total = 0;
            int temp = num;
            int len_bsm = 0;
            double bsm = 0;
            while (temp>0)
            {
                temp /= 10;
                len_bsm += 1;
            }
            temp = num;
            while (temp > 0)
            {
                bsm = temp%10;
                temp /= 10;
                total += pow(bsm, len_bsm);
            }
            if (total != num)
            {
                printf("%d sayisi armstrong sayisi DEGILDIR!\n", num);
            }
            else
            {
                printf("%d sayisi ARMSTRONG SAYISIDIR!\n", num);
            }
        }
        else if (num == -1)
        {
            printf("PROGRAM KAPATILIYOR...");
            break;
        }
        else
        {
            printf("Negatif sayi girmeyin!\n");
            continue;
        }
    }

    return 0;
}
