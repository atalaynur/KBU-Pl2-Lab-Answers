#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[i], *p, k;

    printf("Input the number of elements to store in the array : ");
    scanf("%d",&i);


    p = array;

    for(int a=0; a<i; p++, a++)
    {
        printf("element - %d : %d\n", a, *p);
    }



    for(int a=0; a<i; a++)
    {
        printf("element - %d : ",a);
        scanf("%d",&k);
        array[a]=k;
    }


    return 0;
}
