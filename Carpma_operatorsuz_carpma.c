#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Carpma operatoru kullanmadan kullanicidan alinan iki sayiyinin carpim sonucunu bulan program
*/

int main()
{
    int x,y, end;
    end = 0;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
    {
        end += x;
    }
    printf("%d x %d = %d", x, y, end);

    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
