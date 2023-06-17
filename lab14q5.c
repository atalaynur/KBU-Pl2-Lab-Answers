#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a=5,b=1,sum,c;
    sum = a^b;
    printf("%d\n",sum);

    c = a & b;
    printf("%d\n",c);

    while(c!=0)
    {
        c = c << 1;
        a = sum;
        b = c;
        sum = a ^ b;
        c = a & b;
    }

    printf("%d",sum);
    getchar();
    return 0;
}
