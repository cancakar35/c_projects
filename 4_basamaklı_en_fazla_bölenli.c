#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int maks;
    int maks_bolen;
    maks = 0;
    maks_bolen = 1;
    int i;
    int j;
    for (i = 1000; i < 10000; i++)
    {
        int bolen = 1;
        for (j = 2; j < i+1; j++)
        {
            if (i % j == 0)
            {
                bolen += 1;
            }
        }

        if (bolen >= maks_bolen)
        {
            maks_bolen = bolen;
            maks = i;
        }
    }

    printf("%d", maks);

    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
