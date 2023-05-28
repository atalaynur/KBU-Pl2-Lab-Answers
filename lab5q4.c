#include <stdio.h>
#include <stdlib.h>



int main()
{
    char array[50],*p,x;


    printf("Enter an array : ");
    gets(array);
    p = array;

    for(x = 0; *p != '\0'; p++)
    {
        x++;
    }

    printf("The length of the given array is : %d",x);


    return 0;
}
