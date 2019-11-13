#include <stdio.h>
#include <stdlib.h>

int ebob_bul(int num1, int num2)
{
    int x = 1;
    int ebob = 1;
    while (x <= num1 && x <= num2)
    {
        if (num1%x==0 && num2%x==0)
        {
            ebob = x;
        }
        x += 1;
    }
    return ebob;
}

int ekok_bul(int num1, int num2)
{
    int ekok = 1;
    int x = 2;
    while (num1 != 1 && num2 != 1)
    {
        if (num1%x==0 && num2%x==0)
        {
            ekok *= x;
            num1 /= x;
            num2 /= x;
        }
        else if(num1%x==0 && num2%x!=0)
        {
            ekok *= x;
            num1 /= x;
        }
        else if(num1%x!=0 && num2%x==0)
        {
            ekok *= x;
            num2 /= x;
        }
        else
        {
            x += 1;
        }

    }
    return ekok;
}


int main()
{
    int num1, num2;
    printf("Birinci sayiyi gir: ");
    scanf("%d", &num1);
    printf("Ikinci sayiyi gir: ");
    scanf("%d", &num2);
    printf("%d ve %d sayilarinin EBOB'u: %d, EKOK'u: %d", num1, num2, ebob_bul(num1,num2), ekok_bul(num1, num2));
    return 0;
}
