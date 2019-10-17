#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int total = 0;
    int num;
    while (1)
    {
        printf("Enter the number (Enter 0 to exit): ");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("Total = %d", total);
            break;
        }
        else
        {
            total += num;
        }
    }

    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
