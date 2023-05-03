#include <stdio.h>


int sum(int x)

{
    
    if (x==1)
    {
        return 1;
    }
    
    else

    { 
    return x + sum(x-1);
    }


}

    int main()

    {
    int number;

    printf("please, enter number:");
    scanf("%d", &number);
    printf(" result:%d", sum(number));



    return 0 ;

    }
