#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* instagram.com/cancakar35
       github.com/cancakar35

       YILDIZ KARAKTERIYLE KUM SAATI DESENI BASMA (ICI BOS)

    */


    int row,col;
    for (row=0; row<7; row++)
    {
        for (col=0; col<7; col++)
        {
            if (row == 0 || row == 6)
            {
                printf("*");
            }
            else if (row == col)
            {
                printf ("*");
            }
            else if (row + col == 6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }




    printf("\n\nPress any key to continue...");
    getch();
    return 0;
}
