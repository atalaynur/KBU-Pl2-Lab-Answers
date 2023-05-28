#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    int array[i],*p,k,sum=0;

    printf("Input the number of elements to store in the array : ");
    scanf("%d",&i);


    for(x=0; x<i; x++)
    {
        printf("element - %d : ",x);
        scanf("%d",&k);
        array[x]=k;
    }

    p = array;

    for(x = 0; x<i; p++, x++)
    {
        sum+=*p;
    }

    printf("The sum of the array : %d",sum);


    return 0;
}
