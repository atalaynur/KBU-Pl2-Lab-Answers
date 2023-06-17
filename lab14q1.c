#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec;
    printf("enter a number in the decimal system: ");
    if (scanf("%d", &dec) != 1)
    {

        printf("Enter a valid integer.\n");
        return 1;
    }

    printf("the reciprocity in the duality system\n");
    printf("%d ==> ",dec);

    if (dec < 0)
    {
        printf("-");
        dec = abs(dec);
    }


    if (dec == 0)
    {
        printf("0");
    }

    else
    {
        int binary[16];
        int n = 0;
        while (dec > 0)
        {
            binary[n] = dec % 2;
            dec = dec / 2;
            n++;
        }


        for (int k = n - 1; k >= 0; k--)
        {
            printf("%d", binary[k]);
        }
    }

    return 0;
}
