#include <stdio.h>
#include <stdlib.h>

int main()
{
    // CAN CAKAR
    // Kullanicidan alinan sayinin faktoriyelini hesaplayan program odevi
    printf("FAKTORIYEL HESAP PROGRAMI BY CAN CAKAR\n");
    int factorial = 1;
    while (1)
    {
        int num1;
        printf("\nFAKTORIYELI HESAPLANACAK SAYI (CIKMAK ICIN -1): ");
        scanf("%d", &num1);
        if (num1 >= 0)
        {
            if (num1 == 0 || num1 == 1)
            {
                factorial = 1;
                printf("%d! = %d", num1, factorial);
                factorial = 1;
                continue;
            }
            else
            {
                int i;
                for (i = 1; i <= num1; i++)
                {
                    factorial *= i;
                }
                printf("%d! = %d", num1, factorial);
                factorial = 1;
                continue;
            }
        }
        else if (num1 == -1)
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
