#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    int i,j;
    for (i=0; i < n; i++)
    {
        for (j=0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {35,27,91,11,4};
    int byt_arr = (int)sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Before sorting:\n");
    for (i=0; i < byt_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, byt_arr);
    printf("\nAfter sorting:\n");
    for (i=0; i < byt_arr; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
