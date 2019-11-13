#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4] = {4,1,7,0,5,3,9,2,11,8,6,10}; // biz sırayla yazdık ancak sırasıyla 3erli sütünlar oluşacak.
    int len_row = (int)sizeof(arr)/sizeof(arr[0]);
    int len_col = (int)sizeof(arr[0])/sizeof(arr[0][0]);
    int temp;
    int i,j,k,l;
    printf("Siralanmadan Once:\n");
    for (i=0; i<len_row; i++) // sıralanmadan önceki diziyi yazdırdık
    {
        for (j=0;j<len_col; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<len_row; i++) // sıralama için iç içe 4 döngüye ihtiyacımız var
    {
        for (j=0;j<len_col; j++)
        {
            for (k=0; k<len_row; k++)
            {
                for (l=0;l<len_col; l++)
                {
                    if (arr[i][j]<arr[k][l])
                    {
                        temp = arr[i][j]; // sıralama icin swap islemini yapiyoruz
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }
    printf("Siralandiktan Sonra:\n");
    for (i=0; i<len_row; i++) // sıralanmış diziyi yazdırdık
    {
        for (j=0;j<len_col; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
